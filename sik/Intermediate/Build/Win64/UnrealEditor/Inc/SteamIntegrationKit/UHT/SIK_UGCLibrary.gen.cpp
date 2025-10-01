// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_UGCLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UGCLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UGCLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AccountID();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_DepotId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamUGCDetails();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCQueryHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_UGCLibrary Function AddContentDescriptor
struct Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics
{
	struct SIK_UGCLibrary_eventAddContentDescriptor_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		TEnumAsByte<ESIK_UGCContentDescriptorID> ContentDescriptor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentDescriptor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddContentDescriptor_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ContentDescriptor = { "ContentDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddContentDescriptor_Parms, ContentDescriptor), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 1398825308
void Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddContentDescriptor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddContentDescriptor_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ContentDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddContentDescriptor", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::SIK_UGCLibrary_eventAddContentDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::SIK_UGCLibrary_eventAddContentDescriptor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddContentDescriptor)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_ContentDescriptor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddContentDescriptor(Z_Param_UpdateHandle,ESIK_UGCContentDescriptorID(Z_Param_ContentDescriptor));
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddContentDescriptor

// Begin Class USIK_UGCLibrary Function AddExcludedTag
struct Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics
{
	struct SIK_UGCLibrary_eventAddExcludedTag_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddExcludedTag_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddExcludedTag_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddExcludedTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddExcludedTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddExcludedTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::SIK_UGCLibrary_eventAddExcludedTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::SIK_UGCLibrary_eventAddExcludedTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddExcludedTag)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddExcludedTag(Z_Param_QueryHandle,Z_Param_TagName);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddExcludedTag

// Begin Class USIK_UGCLibrary Function AddItemKeyValueTag
struct Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics
{
	struct SIK_UGCLibrary_eventAddItemKeyValueTag_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemKeyValueTag_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemKeyValueTag_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemKeyValueTag_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddItemKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddItemKeyValueTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddItemKeyValueTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::SIK_UGCLibrary_eventAddItemKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::SIK_UGCLibrary_eventAddItemKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddItemKeyValueTag)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddItemKeyValueTag(Z_Param_UpdateHandle,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddItemKeyValueTag

// Begin Class USIK_UGCLibrary Function AddItemPreviewFile
struct Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics
{
	struct SIK_UGCLibrary_eventAddItemPreviewFile_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString PreviewFile;
		TEnumAsByte<ESIK_ItemPreviewType> FileType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemPreviewFile_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewFile_MetaData), NewProp_PreviewFile_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemPreviewFile_Parms, FileType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 3850993794
void Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddItemPreviewFile_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddItemPreviewFile", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::SIK_UGCLibrary_eventAddItemPreviewFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::SIK_UGCLibrary_eventAddItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddItemPreviewFile)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_GET_PROPERTY(FByteProperty,Z_Param_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddItemPreviewFile(Z_Param_UpdateHandle,Z_Param_PreviewFile,ESIK_ItemPreviewType(Z_Param_FileType));
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddItemPreviewFile

// Begin Class USIK_UGCLibrary Function AddItemPreviewVideo
struct Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics
{
	struct SIK_UGCLibrary_eventAddItemPreviewVideo_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString VideoID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemPreviewVideo_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoID_MetaData), NewProp_VideoID_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddItemPreviewVideo_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_VideoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddItemPreviewVideo", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::SIK_UGCLibrary_eventAddItemPreviewVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::SIK_UGCLibrary_eventAddItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddItemPreviewVideo)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddItemPreviewVideo(Z_Param_UpdateHandle,Z_Param_VideoID);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddItemPreviewVideo

// Begin Class USIK_UGCLibrary Function AddRequiredKeyValueTag
struct Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics
{
	struct SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms, Value), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Value_MetaData), NewProp_Value_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddRequiredKeyValueTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::SIK_UGCLibrary_eventAddRequiredKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddRequiredKeyValueTag)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY(FStrProperty,Z_Param_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddRequiredKeyValueTag(Z_Param_UpdateHandle,Z_Param_Key,Z_Param_Value);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddRequiredKeyValueTag

// Begin Class USIK_UGCLibrary Function AddRequiredTag
struct Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics
{
	struct SIK_UGCLibrary_eventAddRequiredTag_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredTag_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredTag_Parms, TagName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagName_MetaData), NewProp_TagName_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddRequiredTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddRequiredTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddRequiredTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::SIK_UGCLibrary_eventAddRequiredTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::SIK_UGCLibrary_eventAddRequiredTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddRequiredTag)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddRequiredTag(Z_Param_QueryHandle,Z_Param_TagName);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddRequiredTag

// Begin Class USIK_UGCLibrary Function AddRequiredTagGroup
struct Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics
{
	struct SIK_UGCLibrary_eventAddRequiredTagGroup_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		TArray<FString> TagNames;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TagNames_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagNames_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TagNames;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredTagGroup_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_TagNames_Inner = { "TagNames", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_TagNames = { "TagNames", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventAddRequiredTagGroup_Parms, TagNames), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TagNames_MetaData), NewProp_TagNames_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventAddRequiredTagGroup_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventAddRequiredTagGroup_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_TagNames_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_TagNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "AddRequiredTagGroup", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::SIK_UGCLibrary_eventAddRequiredTagGroup_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::SIK_UGCLibrary_eventAddRequiredTagGroup_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execAddRequiredTagGroup)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_TARRAY_REF(FString,Z_Param_Out_TagNames);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::AddRequiredTagGroup(Z_Param_QueryHandle,Z_Param_Out_TagNames);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function AddRequiredTagGroup

// Begin Class USIK_UGCLibrary Function BInitWorkshopForGameServer
struct Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics
{
	struct SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms
	{
		FSIK_DepotId DepotId;
		FString Folder;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Folder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_DepotId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_DepotId = { "DepotId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms, DepotId), Z_Construct_UScriptStruct_FSIK_DepotId, METADATA_PARAMS(0, nullptr) }; // 2608535757
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms, Folder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Folder_MetaData), NewProp_Folder_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_DepotId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "BInitWorkshopForGameServer", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::SIK_UGCLibrary_eventBInitWorkshopForGameServer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execBInitWorkshopForGameServer)
{
	P_GET_STRUCT(FSIK_DepotId,Z_Param_DepotId);
	P_GET_PROPERTY(FStrProperty,Z_Param_Folder);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::BInitWorkshopForGameServer(Z_Param_DepotId,Z_Param_Folder);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function BInitWorkshopForGameServer

// Begin Class USIK_UGCLibrary Function CreateQueryAllUGCRequest
struct Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics
{
	struct SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms
	{
		TEnumAsByte<ESIK_UGCQuery> QueryType;
		TEnumAsByte<ESIK_UGCMatchingUGCType> MatchingType;
		FSIK_AppId CreatorAppID;
		FSIK_AppId ConsumerAppID;
		int32 Page;
		FSIK_UGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_QueryType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_QueryType = { "QueryType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, QueryType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCQuery, METADATA_PARAMS(0, nullptr) }; // 3497845918
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_MatchingType = { "MatchingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, MatchingType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 1155507562
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, CreatorAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, ConsumerAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_QueryType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_MatchingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_CreatorAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "CreateQueryAllUGCRequest", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::SIK_UGCLibrary_eventCreateQueryAllUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execCreateQueryAllUGCRequest)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_QueryType);
	P_GET_PROPERTY(FByteProperty,Z_Param_MatchingType);
	P_GET_STRUCT(FSIK_AppId,Z_Param_CreatorAppID);
	P_GET_STRUCT(FSIK_AppId,Z_Param_ConsumerAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Page);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCQueryHandle*)Z_Param__Result=USIK_UGCLibrary::CreateQueryAllUGCRequest(ESIK_UGCQuery(Z_Param_QueryType),ESIK_UGCMatchingUGCType(Z_Param_MatchingType),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function CreateQueryAllUGCRequest

// Begin Class USIK_UGCLibrary Function CreateQueryUGCDetailsRequest
struct Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics
{
	struct SIK_UGCLibrary_eventCreateQueryUGCDetailsRequest_Parms
	{
		TArray<FSIK_PublishedFileId> PublishedFileIDs;
		FSIK_UGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUGCDetailsRequest_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUGCDetailsRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "CreateQueryUGCDetailsRequest", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::SIK_UGCLibrary_eventCreateQueryUGCDetailsRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::SIK_UGCLibrary_eventCreateQueryUGCDetailsRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execCreateQueryUGCDetailsRequest)
{
	P_GET_TARRAY(FSIK_PublishedFileId,Z_Param_PublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCQueryHandle*)Z_Param__Result=USIK_UGCLibrary::CreateQueryUGCDetailsRequest(Z_Param_PublishedFileIDs);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function CreateQueryUGCDetailsRequest

// Begin Class USIK_UGCLibrary Function CreateQueryUserUGCRequest
struct Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics
{
	struct SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms
	{
		FSIK_AccountID AccountID;
		TEnumAsByte<ESIK_UserUGCList> ListType;
		TEnumAsByte<ESIK_UGCMatchingUGCType> MatchingType;
		TEnumAsByte<ESIK_UserUGCListSortOrder> SortOrder;
		FSIK_AppId CreatorAppID;
		FSIK_AppId ConsumerAppID;
		int32 Page;
		FSIK_UGCQueryHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AccountID;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ListType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_MatchingType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SortOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_CreatorAppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ConsumerAppID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Page;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_AccountID = { "AccountID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, AccountID), Z_Construct_UScriptStruct_FSIK_AccountID, METADATA_PARAMS(0, nullptr) }; // 1783192467
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ListType = { "ListType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, ListType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCList, METADATA_PARAMS(0, nullptr) }; // 587205116
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_MatchingType = { "MatchingType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, MatchingType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCMatchingUGCType, METADATA_PARAMS(0, nullptr) }; // 1155507562
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder = { "SortOrder", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, SortOrder), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UserUGCListSortOrder, METADATA_PARAMS(0, nullptr) }; // 2285635663
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID = { "CreatorAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, CreatorAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID = { "ConsumerAppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, ConsumerAppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_Page = { "Page", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, Page), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_AccountID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ListType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_MatchingType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_SortOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_CreatorAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ConsumerAppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_Page,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "CreateQueryUserUGCRequest", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::SIK_UGCLibrary_eventCreateQueryUserUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execCreateQueryUserUGCRequest)
{
	P_GET_STRUCT(FSIK_AccountID,Z_Param_AccountID);
	P_GET_PROPERTY(FByteProperty,Z_Param_ListType);
	P_GET_PROPERTY(FByteProperty,Z_Param_MatchingType);
	P_GET_PROPERTY(FByteProperty,Z_Param_SortOrder);
	P_GET_STRUCT(FSIK_AppId,Z_Param_CreatorAppID);
	P_GET_STRUCT(FSIK_AppId,Z_Param_ConsumerAppID);
	P_GET_PROPERTY(FIntProperty,Z_Param_Page);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCQueryHandle*)Z_Param__Result=USIK_UGCLibrary::CreateQueryUserUGCRequest(Z_Param_AccountID,ESIK_UserUGCList(Z_Param_ListType),ESIK_UGCMatchingUGCType(Z_Param_MatchingType),ESIK_UserUGCListSortOrder(Z_Param_SortOrder),Z_Param_CreatorAppID,Z_Param_ConsumerAppID,Z_Param_Page);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function CreateQueryUserUGCRequest

// Begin Class USIK_UGCLibrary Function DownloadItem
struct Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics
{
	struct SIK_UGCLibrary_eventDownloadItem_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		bool bHighPriority;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bHighPriority_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bHighPriority;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventDownloadItem_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_bHighPriority_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventDownloadItem_Parms*)Obj)->bHighPriority = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_bHighPriority = { "bHighPriority", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventDownloadItem_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_bHighPriority_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventDownloadItem_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventDownloadItem_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_bHighPriority,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "DownloadItem", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::SIK_UGCLibrary_eventDownloadItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::SIK_UGCLibrary_eventDownloadItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execDownloadItem)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_GET_UBOOL(Z_Param_bHighPriority);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::DownloadItem(Z_Param_PublishedFileId,Z_Param_bHighPriority);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function DownloadItem

// Begin Class USIK_UGCLibrary Function GetAppDependencies
struct Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics
{
	struct SIK_UGCLibrary_eventGetAppDependencies_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetAppDependencies_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetAppDependencies_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetAppDependencies_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetAppDependencies", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::SIK_UGCLibrary_eventGetAppDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::SIK_UGCLibrary_eventGetAppDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetAppDependencies)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetAppDependencies(Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetAppDependencies

// Begin Class USIK_UGCLibrary Function GetItemDownloadInfo
struct Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics
{
	struct SIK_UGCLibrary_eventGetItemDownloadInfo_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		int64 BytesDownloaded;
		int64 BytesTotal;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesDownloaded;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesTotal;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemDownloadInfo_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded = { "BytesDownloaded", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemDownloadInfo_Parms, BytesDownloaded), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemDownloadInfo_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetItemDownloadInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetItemDownloadInfo_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_BytesDownloaded,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetItemDownloadInfo", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::SIK_UGCLibrary_eventGetItemDownloadInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::SIK_UGCLibrary_eventGetItemDownloadInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetItemDownloadInfo)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesDownloaded);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetItemDownloadInfo(Z_Param_PublishedFileId,Z_Param_Out_BytesDownloaded,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetItemDownloadInfo

// Begin Class USIK_UGCLibrary Function GetItemInstallInfo
struct Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics
{
	struct SIK_UGCLibrary_eventGetItemInstallInfo_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		int64 SizeOnDisk;
		FString Folder;
		int32 TimeStamp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SizeOnDisk;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Folder;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TimeStamp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemInstallInfo_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_SizeOnDisk = { "SizeOnDisk", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemInstallInfo_Parms, SizeOnDisk), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_Folder = { "Folder", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemInstallInfo_Parms, Folder), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_TimeStamp = { "TimeStamp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemInstallInfo_Parms, TimeStamp), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetItemInstallInfo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetItemInstallInfo_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_SizeOnDisk,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_Folder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_TimeStamp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetItemInstallInfo", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::SIK_UGCLibrary_eventGetItemInstallInfo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::SIK_UGCLibrary_eventGetItemInstallInfo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetItemInstallInfo)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SizeOnDisk);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Folder);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_TimeStamp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetItemInstallInfo(Z_Param_PublishedFileId,Z_Param_Out_SizeOnDisk,Z_Param_Out_Folder,Z_Param_Out_TimeStamp);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetItemInstallInfo

// Begin Class USIK_UGCLibrary Function GetItemState
struct Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics
{
	struct SIK_UGCLibrary_eventGetItemState_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemState_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemState_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetItemState", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::SIK_UGCLibrary_eventGetItemState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::SIK_UGCLibrary_eventGetItemState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetItemState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetItemState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetItemState)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetItemState(Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetItemState

// Begin Class USIK_UGCLibrary Function GetItemUpdateProgress
struct Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics
{
	struct SIK_UGCLibrary_eventGetItemUpdateProgress_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		int64 BytesProcessed;
		int64 BytesTotal;
		TEnumAsByte<ESIK_ItemUpdateStatus> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesProcessed;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_BytesTotal;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemUpdateProgress_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_BytesProcessed = { "BytesProcessed", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemUpdateProgress_Parms, BytesProcessed), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_BytesTotal = { "BytesTotal", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemUpdateProgress_Parms, BytesTotal), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetItemUpdateProgress_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemUpdateStatus, METADATA_PARAMS(0, nullptr) }; // 2310125798
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_BytesProcessed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_BytesTotal,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetItemUpdateProgress", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::SIK_UGCLibrary_eventGetItemUpdateProgress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::SIK_UGCLibrary_eventGetItemUpdateProgress_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetItemUpdateProgress)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesProcessed);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_BytesTotal);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_ItemUpdateStatus>*)Z_Param__Result=USIK_UGCLibrary::GetItemUpdateProgress(Z_Param_UpdateHandle,Z_Param_Out_BytesProcessed,Z_Param_Out_BytesTotal);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetItemUpdateProgress

// Begin Class USIK_UGCLibrary Function GetNumSubscribedItems
struct Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics
{
	struct SIK_UGCLibrary_eventGetNumSubscribedItems_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetNumSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetNumSubscribedItems", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::SIK_UGCLibrary_eventGetNumSubscribedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::SIK_UGCLibrary_eventGetNumSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetNumSubscribedItems)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetNumSubscribedItems();
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetNumSubscribedItems

// Begin Class USIK_UGCLibrary Function GetQueryUGCAdditionalPreview
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 PreviewIndex;
		FString PreviewURL;
		FString OriginalFileName;
		TEnumAsByte<ESIK_ItemPreviewType> FileType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewURL;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OriginalFileName;
	static const UECodeGen_Private::FBytePropertyParams NewProp_FileType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewURL = { "PreviewURL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, PreviewURL), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName = { "OriginalFileName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, OriginalFileName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_FileType = { "FileType", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms, FileType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemPreviewType, METADATA_PARAMS(0, nullptr) }; // 3850993794
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_PreviewURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_OriginalFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_FileType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCAdditionalPreview", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::SIK_UGCLibrary_eventGetQueryUGCAdditionalPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCAdditionalPreview)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_PreviewURL);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OriginalFileName);
	P_GET_PROPERTY_REF(FByteProperty,Z_Param_Out_FileType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCAdditionalPreview(Z_Param_QueryHandle,Z_Param_Index,Z_Param_PreviewIndex,Z_Param_Out_PreviewURL,Z_Param_Out_OriginalFileName,(TEnumAsByte<ESIK_ItemPreviewType>&)(Z_Param_Out_FileType));
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCAdditionalPreview

// Begin Class USIK_UGCLibrary Function GetQueryUGCChildren
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCChildren_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		TArray<FSIK_PublishedFileId> PublishedFileIDs;
		int32 MaxEntries;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCChildren_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCChildren_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCChildren_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCChildren_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCChildren_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCChildren", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::SIK_UGCLibrary_eventGetQueryUGCChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::SIK_UGCLibrary_eventGetQueryUGCChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCChildren)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_TARRAY_REF(FSIK_PublishedFileId,Z_Param_Out_PublishedFileIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCChildren(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCChildren

// Begin Class USIK_UGCLibrary Function GetQueryUGCContentDescriptors
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		TArray<TEnumAsByte<ESIK_UGCContentDescriptorID> > ContentDescriptors;
		int32 MaxEntries;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentDescriptors_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ContentDescriptors;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ContentDescriptors_Inner = { "ContentDescriptors", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 1398825308
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ContentDescriptors = { "ContentDescriptors", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms, ContentDescriptors), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 1398825308
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ContentDescriptors_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ContentDescriptors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCContentDescriptors", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::SIK_UGCLibrary_eventGetQueryUGCContentDescriptors_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCContentDescriptors)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_TARRAY_REF(TEnumAsByte<ESIK_UGCContentDescriptorID>,Z_Param_Out_ContentDescriptors);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCContentDescriptors(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Out_ContentDescriptors,Z_Param_MaxEntries);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCContentDescriptors

// Begin Class USIK_UGCLibrary Function GetQueryUGCKeyValueTag
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		FString Key;
		FString Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCKeyValueTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::SIK_UGCLibrary_eventGetQueryUGCKeyValueTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCKeyValueTag)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCKeyValueTag(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Key,Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCKeyValueTag

// Begin Class USIK_UGCLibrary Function GetQueryUGCMetadata
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		FString Metadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms, Metadata), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCMetadata", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::SIK_UGCLibrary_eventGetQueryUGCMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCMetadata)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCMetadata(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Out_Metadata);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCMetadata

// Begin Class USIK_UGCLibrary Function GetQueryUGCNumAdditionalPreviews
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCNumAdditionalPreviews", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::SIK_UGCLibrary_eventGetQueryUGCNumAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCNumAdditionalPreviews)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCNumAdditionalPreviews(Z_Param_QueryHandle,Z_Param_Index);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCNumAdditionalPreviews

// Begin Class USIK_UGCLibrary Function GetQueryUGCNumKeyValueTags
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCNumKeyValueTags", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::SIK_UGCLibrary_eventGetQueryUGCNumKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCNumKeyValueTags)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCNumKeyValueTags(Z_Param_QueryHandle,Z_Param_Index);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCNumKeyValueTags

// Begin Class USIK_UGCLibrary Function GetQueryUGCNumTags
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCNumTags", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::SIK_UGCLibrary_eventGetQueryUGCNumTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCNumTags)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCNumTags(Z_Param_QueryHandle,Z_Param_Index);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCNumTags

// Begin Class USIK_UGCLibrary Function GetQueryUGCPreviewURL
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		FString URL;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStrPropertyParams NewProp_URL;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_URL = { "URL", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms, URL), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_URL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCPreviewURL", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::SIK_UGCLibrary_eventGetQueryUGCPreviewURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCPreviewURL)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_URL);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCPreviewURL(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Out_URL);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCPreviewURL

// Begin Class USIK_UGCLibrary Function GetQueryUGCResult
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCResult_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		FSIK_SteamUGCDetails Details;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Details;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCResult_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCResult_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_Details = { "Details", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCResult_Parms, Details), Z_Construct_UScriptStruct_FSIK_SteamUGCDetails, METADATA_PARAMS(0, nullptr) }; // 2108381925
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCResult_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCResult_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_Details,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCResult", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::SIK_UGCLibrary_eventGetQueryUGCResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::SIK_UGCLibrary_eventGetQueryUGCResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCResult)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_STRUCT_REF(FSIK_SteamUGCDetails,Z_Param_Out_Details);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCResult(Z_Param_QueryHandle,Z_Param_Index,Z_Param_Out_Details);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCResult

// Begin Class USIK_UGCLibrary Function GetQueryUGCStatistic
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		TEnumAsByte<ESIK_ItemStatistic> StatType;
		int64 Value;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FBytePropertyParams NewProp_StatType;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Value;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_StatType = { "StatType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms, StatType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ItemStatistic, METADATA_PARAMS(0, nullptr) }; // 2611181071
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms, Value), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_StatType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_Value,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCStatistic", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::SIK_UGCLibrary_eventGetQueryUGCStatistic_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCStatistic)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FByteProperty,Z_Param_StatType);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Value);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCStatistic(Z_Param_QueryHandle,Z_Param_Index,ESIK_ItemStatistic(Z_Param_StatType),Z_Param_Out_Value);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCStatistic

// Begin Class USIK_UGCLibrary Function GetQueryUGCTag
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCTag_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 TagIndex;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTag_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTag_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_TagIndex = { "TagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTag_Parms, TagIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTag_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_TagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::SIK_UGCLibrary_eventGetQueryUGCTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::SIK_UGCLibrary_eventGetQueryUGCTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCTag)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_TagIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCTag(Z_Param_QueryHandle,Z_Param_Index,Z_Param_TagIndex,Z_Param_Out_TagName);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCTag

// Begin Class USIK_UGCLibrary Function GetQueryUGCTagDisplayName
struct Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics
{
	struct SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Index;
		int32 TagIndex;
		FString TagName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TagIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_TagName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_TagIndex = { "TagIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms, TagIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_TagName = { "TagName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms, TagName), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_TagIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_TagName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetQueryUGCTagDisplayName", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::SIK_UGCLibrary_eventGetQueryUGCTagDisplayName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetQueryUGCTagDisplayName)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_PROPERTY(FIntProperty,Z_Param_TagIndex);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_TagName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::GetQueryUGCTagDisplayName(Z_Param_QueryHandle,Z_Param_Index,Z_Param_TagIndex,Z_Param_Out_TagName);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetQueryUGCTagDisplayName

// Begin Class USIK_UGCLibrary Function GetSubscribedItems
struct Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics
{
	struct SIK_UGCLibrary_eventGetSubscribedItems_Parms
	{
		TArray<FSIK_PublishedFileId> PublishedFileIDs;
		int32 MaxEntries;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxEntries;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_PublishedFileIDs = { "PublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetSubscribedItems_Parms, PublishedFileIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_MaxEntries = { "MaxEntries", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetSubscribedItems_Parms, MaxEntries), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventGetSubscribedItems_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_PublishedFileIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_PublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_MaxEntries,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "GetSubscribedItems", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::SIK_UGCLibrary_eventGetSubscribedItems_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::SIK_UGCLibrary_eventGetSubscribedItems_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execGetSubscribedItems)
{
	P_GET_TARRAY_REF(FSIK_PublishedFileId,Z_Param_Out_PublishedFileIDs);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxEntries);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UGCLibrary::GetSubscribedItems(Z_Param_Out_PublishedFileIDs,Z_Param_MaxEntries);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function GetSubscribedItems

// Begin Class USIK_UGCLibrary Function ReleaseQueryUGCRequest
struct Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics
{
	struct SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "ReleaseQueryUGCRequest", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::SIK_UGCLibrary_eventReleaseQueryUGCRequest_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execReleaseQueryUGCRequest)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::ReleaseQueryUGCRequest(Z_Param_QueryHandle);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function ReleaseQueryUGCRequest

// Begin Class USIK_UGCLibrary Function RemoveContentDescriptor
struct Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics
{
	struct SIK_UGCLibrary_eventRemoveContentDescriptor_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		TEnumAsByte<ESIK_UGCContentDescriptorID> ContentDescriptor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ContentDescriptor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveContentDescriptor_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ContentDescriptor = { "ContentDescriptor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveContentDescriptor_Parms, ContentDescriptor), Z_Construct_UEnum_SteamIntegrationKit_ESIK_UGCContentDescriptorID, METADATA_PARAMS(0, nullptr) }; // 1398825308
void Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventRemoveContentDescriptor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventRemoveContentDescriptor_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ContentDescriptor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "RemoveContentDescriptor", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::SIK_UGCLibrary_eventRemoveContentDescriptor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::SIK_UGCLibrary_eventRemoveContentDescriptor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execRemoveContentDescriptor)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_ContentDescriptor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::RemoveContentDescriptor(Z_Param_UpdateHandle,ESIK_UGCContentDescriptorID(Z_Param_ContentDescriptor));
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function RemoveContentDescriptor

// Begin Class USIK_UGCLibrary Function RemoveItemKeyValueTags
struct Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics
{
	struct SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Key;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "RemoveItemKeyValueTags", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::SIK_UGCLibrary_eventRemoveItemKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execRemoveItemKeyValueTags)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::RemoveItemKeyValueTags(Z_Param_UpdateHandle,Z_Param_Key);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function RemoveItemKeyValueTags

// Begin Class USIK_UGCLibrary Function RemoveItemPreview
struct Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics
{
	struct SIK_UGCLibrary_eventRemoveItemPreview_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		int32 PreviewIndex;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveItemPreview_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventRemoveItemPreview_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventRemoveItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventRemoveItemPreview_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "RemoveItemPreview", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::SIK_UGCLibrary_eventRemoveItemPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::SIK_UGCLibrary_eventRemoveItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execRemoveItemPreview)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::RemoveItemPreview(Z_Param_UpdateHandle,Z_Param_PreviewIndex);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function RemoveItemPreview

// Begin Class USIK_UGCLibrary Function SetAllowCachedResponse
struct Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics
{
	struct SIK_UGCLibrary_eventSetAllowCachedResponse_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 MaxAgeSeconds;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAgeSeconds;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetAllowCachedResponse_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds = { "MaxAgeSeconds", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetAllowCachedResponse_Parms, MaxAgeSeconds), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetAllowCachedResponse_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetAllowCachedResponse_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_MaxAgeSeconds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetAllowCachedResponse", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::SIK_UGCLibrary_eventSetAllowCachedResponse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::SIK_UGCLibrary_eventSetAllowCachedResponse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetAllowCachedResponse)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxAgeSeconds);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetAllowCachedResponse(Z_Param_QueryHandle,Z_Param_MaxAgeSeconds);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetAllowCachedResponse

// Begin Class USIK_UGCLibrary Function SetCloudFileNameFilter
struct Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics
{
	struct SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		FString MatchCloudFileName;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MatchCloudFileName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_MatchCloudFileName;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName = { "MatchCloudFileName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms, MatchCloudFileName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MatchCloudFileName_MetaData), NewProp_MatchCloudFileName_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_MatchCloudFileName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetCloudFileNameFilter", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::SIK_UGCLibrary_eventSetCloudFileNameFilter_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetCloudFileNameFilter)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_MatchCloudFileName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetCloudFileNameFilter(Z_Param_QueryHandle,Z_Param_MatchCloudFileName);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetCloudFileNameFilter

// Begin Class USIK_UGCLibrary Function SetItemContent
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics
{
	struct SIK_UGCLibrary_eventSetItemContent_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Content;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Content_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Content;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemContent_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_Content = { "Content", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemContent_Parms, Content), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Content_MetaData), NewProp_Content_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemContent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemContent_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_Content,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemContent", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::SIK_UGCLibrary_eventSetItemContent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::SIK_UGCLibrary_eventSetItemContent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemContent)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Content);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemContent(Z_Param_UpdateHandle,Z_Param_Content);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemContent

// Begin Class USIK_UGCLibrary Function SetItemDescription
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics
{
	struct SIK_UGCLibrary_eventSetItemDescription_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Description;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemDescription_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemDescription_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemDescription_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemDescription", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::SIK_UGCLibrary_eventSetItemDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::SIK_UGCLibrary_eventSetItemDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemDescription)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemDescription(Z_Param_UpdateHandle,Z_Param_Description);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemDescription

// Begin Class USIK_UGCLibrary Function SetItemMetadata
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics
{
	struct SIK_UGCLibrary_eventSetItemMetadata_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Metadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Metadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemMetadata_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_Metadata = { "Metadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemMetadata_Parms, Metadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Metadata_MetaData), NewProp_Metadata_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemMetadata_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_Metadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemMetadata", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::SIK_UGCLibrary_eventSetItemMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::SIK_UGCLibrary_eventSetItemMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemMetadata)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Metadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemMetadata(Z_Param_UpdateHandle,Z_Param_Metadata);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemMetadata

// Begin Class USIK_UGCLibrary Function SetItemPreview
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics
{
	struct SIK_UGCLibrary_eventSetItemPreview_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemPreview_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemPreview_Parms, PreviewFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewFile_MetaData), NewProp_PreviewFile_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemPreview_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemPreview_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemPreview", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::SIK_UGCLibrary_eventSetItemPreview_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::SIK_UGCLibrary_eventSetItemPreview_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemPreview)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemPreview(Z_Param_UpdateHandle,Z_Param_PreviewFile);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemPreview

// Begin Class USIK_UGCLibrary Function SetItemTags
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics
{
	struct SIK_UGCLibrary_eventSetItemTags_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		TArray<FString> Tags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Tags_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Tags_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Tags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemTags_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_Tags_Inner = { "Tags", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_Tags = { "Tags", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemTags_Parms, Tags), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Tags_MetaData), NewProp_Tags_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemTags_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_Tags_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_Tags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemTags", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::SIK_UGCLibrary_eventSetItemTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::SIK_UGCLibrary_eventSetItemTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemTags)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_TARRAY_REF(FString,Z_Param_Out_Tags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemTags(Z_Param_UpdateHandle,Z_Param_Out_Tags);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemTags

// Begin Class USIK_UGCLibrary Function SetItemTitle
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics
{
	struct SIK_UGCLibrary_eventSetItemTitle_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Title;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemTitle_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemTitle_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemTitle_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemTitle_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemTitle", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::SIK_UGCLibrary_eventSetItemTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::SIK_UGCLibrary_eventSetItemTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemTitle)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemTitle(Z_Param_UpdateHandle,Z_Param_Title);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemTitle

// Begin Class USIK_UGCLibrary Function SetItemUpdateLanguage
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics
{
	struct SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemUpdateLanguage", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::SIK_UGCLibrary_eventSetItemUpdateLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemUpdateLanguage)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemUpdateLanguage(Z_Param_UpdateHandle,Z_Param_Language);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemUpdateLanguage

// Begin Class USIK_UGCLibrary Function SetItemVisibility
struct Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics
{
	struct SIK_UGCLibrary_eventSetItemVisibility_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		TEnumAsByte<ESIK_RemoteStoragePublishedFileVisibility> Visibility;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Visibility;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemVisibility_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_Visibility = { "Visibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetItemVisibility_Parms, Visibility), Z_Construct_UEnum_SteamIntegrationKit_ESIK_RemoteStoragePublishedFileVisibility, METADATA_PARAMS(0, nullptr) }; // 2120565303
void Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetItemVisibility_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetItemVisibility_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_Visibility,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetItemVisibility", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::SIK_UGCLibrary_eventSetItemVisibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::SIK_UGCLibrary_eventSetItemVisibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetItemVisibility)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_Visibility);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetItemVisibility(Z_Param_UpdateHandle,ESIK_RemoteStoragePublishedFileVisibility(Z_Param_Visibility));
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetItemVisibility

// Begin Class USIK_UGCLibrary Function SetLanguage
struct Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics
{
	struct SIK_UGCLibrary_eventSetLanguage_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		FString Language;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Language_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Language;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetLanguage_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_Language = { "Language", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetLanguage_Parms, Language), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Language_MetaData), NewProp_Language_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetLanguage_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetLanguage_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_Language,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetLanguage", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::SIK_UGCLibrary_eventSetLanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::SIK_UGCLibrary_eventSetLanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetLanguage)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_Language);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetLanguage(Z_Param_QueryHandle,Z_Param_Language);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetLanguage

// Begin Class USIK_UGCLibrary Function SetMatchAnyTag
struct Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics
{
	struct SIK_UGCLibrary_eventSetMatchAnyTag_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bMatchAnyTag;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bMatchAnyTag_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bMatchAnyTag;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetMatchAnyTag_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetMatchAnyTag_Parms*)Obj)->bMatchAnyTag = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag = { "bMatchAnyTag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetMatchAnyTag_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetMatchAnyTag_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_bMatchAnyTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetMatchAnyTag", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::SIK_UGCLibrary_eventSetMatchAnyTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::SIK_UGCLibrary_eventSetMatchAnyTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetMatchAnyTag)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bMatchAnyTag);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetMatchAnyTag(Z_Param_QueryHandle,Z_Param_bMatchAnyTag);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetMatchAnyTag

// Begin Class USIK_UGCLibrary Function SetRankedByTrendDays
struct Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics
{
	struct SIK_UGCLibrary_eventSetRankedByTrendDays_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetRankedByTrendDays_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetRankedByTrendDays_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetRankedByTrendDays_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetRankedByTrendDays_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetRankedByTrendDays", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::SIK_UGCLibrary_eventSetRankedByTrendDays_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::SIK_UGCLibrary_eventSetRankedByTrendDays_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetRankedByTrendDays)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Days);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetRankedByTrendDays(Z_Param_QueryHandle,Z_Param_Days);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetRankedByTrendDays

// Begin Class USIK_UGCLibrary Function SetReturnAdditionalPreviews
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics
{
	struct SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnAdditionalPreviews;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnAdditionalPreviews_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnAdditionalPreviews;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms*)Obj)->bReturnAdditionalPreviews = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews = { "bReturnAdditionalPreviews", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_bReturnAdditionalPreviews,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnAdditionalPreviews", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::SIK_UGCLibrary_eventSetReturnAdditionalPreviews_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnAdditionalPreviews)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnAdditionalPreviews);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnAdditionalPreviews(Z_Param_QueryHandle,Z_Param_bReturnAdditionalPreviews);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnAdditionalPreviews

// Begin Class USIK_UGCLibrary Function SetReturnChildren
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics
{
	struct SIK_UGCLibrary_eventSetReturnChildren_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnChildren;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnChildren_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnChildren;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnChildren_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnChildren_Parms*)Obj)->bReturnChildren = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_bReturnChildren = { "bReturnChildren", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnChildren_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_bReturnChildren_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnChildren_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnChildren_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_bReturnChildren,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnChildren", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::SIK_UGCLibrary_eventSetReturnChildren_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::SIK_UGCLibrary_eventSetReturnChildren_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnChildren)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnChildren);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnChildren(Z_Param_QueryHandle,Z_Param_bReturnChildren);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnChildren

// Begin Class USIK_UGCLibrary Function SetReturnKeyValueTags
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics
{
	struct SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnKeyValueTags;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnKeyValueTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnKeyValueTags;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms*)Obj)->bReturnKeyValueTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags = { "bReturnKeyValueTags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_bReturnKeyValueTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnKeyValueTags", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::SIK_UGCLibrary_eventSetReturnKeyValueTags_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnKeyValueTags)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnKeyValueTags);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnKeyValueTags(Z_Param_QueryHandle,Z_Param_bReturnKeyValueTags);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnKeyValueTags

// Begin Class USIK_UGCLibrary Function SetReturnLongDescription
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics
{
	struct SIK_UGCLibrary_eventSetReturnLongDescription_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnLongDescription;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnLongDescription_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnLongDescription;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnLongDescription_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnLongDescription_Parms*)Obj)->bReturnLongDescription = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription = { "bReturnLongDescription", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnLongDescription_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnLongDescription_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_bReturnLongDescription,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnLongDescription", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::SIK_UGCLibrary_eventSetReturnLongDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::SIK_UGCLibrary_eventSetReturnLongDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnLongDescription)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnLongDescription);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnLongDescription(Z_Param_QueryHandle,Z_Param_bReturnLongDescription);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnLongDescription

// Begin Class USIK_UGCLibrary Function SetReturnMetadata
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics
{
	struct SIK_UGCLibrary_eventSetReturnMetadata_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnMetadata;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnMetadata_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnMetadata;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnMetadata_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnMetadata_Parms*)Obj)->bReturnMetadata = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_bReturnMetadata = { "bReturnMetadata", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_bReturnMetadata_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnMetadata_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnMetadata_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_bReturnMetadata,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnMetadata", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::SIK_UGCLibrary_eventSetReturnMetadata_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::SIK_UGCLibrary_eventSetReturnMetadata_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnMetadata)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnMetadata);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnMetadata(Z_Param_QueryHandle,Z_Param_bReturnMetadata);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnMetadata

// Begin Class USIK_UGCLibrary Function SetReturnOnlyIDs
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics
{
	struct SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnOnlyIDs;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnOnlyIDs_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnOnlyIDs;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms*)Obj)->bReturnOnlyIDs = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs = { "bReturnOnlyIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_bReturnOnlyIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnOnlyIDs", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::SIK_UGCLibrary_eventSetReturnOnlyIDs_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnOnlyIDs)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnOnlyIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnOnlyIDs(Z_Param_QueryHandle,Z_Param_bReturnOnlyIDs);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnOnlyIDs

// Begin Class USIK_UGCLibrary Function SetReturnPlaytimeStats
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics
{
	struct SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		int32 Days;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Days;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_Days = { "Days", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms, Days), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_Days,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnPlaytimeStats", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::SIK_UGCLibrary_eventSetReturnPlaytimeStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnPlaytimeStats)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_Days);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnPlaytimeStats(Z_Param_QueryHandle,Z_Param_Days);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnPlaytimeStats

// Begin Class USIK_UGCLibrary Function SetReturnTotalOnly
struct Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics
{
	struct SIK_UGCLibrary_eventSetReturnTotalOnly_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		bool bReturnTotalOnly;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static void NewProp_bReturnTotalOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bReturnTotalOnly;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetReturnTotalOnly_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnTotalOnly_Parms*)Obj)->bReturnTotalOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly = { "bReturnTotalOnly", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetReturnTotalOnly_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetReturnTotalOnly_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_bReturnTotalOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetReturnTotalOnly", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::SIK_UGCLibrary_eventSetReturnTotalOnly_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::SIK_UGCLibrary_eventSetReturnTotalOnly_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetReturnTotalOnly)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_UBOOL(Z_Param_bReturnTotalOnly);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetReturnTotalOnly(Z_Param_QueryHandle,Z_Param_bReturnTotalOnly);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetReturnTotalOnly

// Begin Class USIK_UGCLibrary Function SetSearchText
struct Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics
{
	struct SIK_UGCLibrary_eventSetSearchText_Parms
	{
		FSIK_UGCQueryHandle QueryHandle;
		FString SearchText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SearchText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_QueryHandle;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SearchText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_QueryHandle = { "QueryHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetSearchText_Parms, QueryHandle), Z_Construct_UScriptStruct_FSIK_UGCQueryHandle, METADATA_PARAMS(0, nullptr) }; // 2743364455
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_SearchText = { "SearchText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetSearchText_Parms, SearchText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SearchText_MetaData), NewProp_SearchText_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetSearchText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetSearchText_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_QueryHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_SearchText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetSearchText", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::SIK_UGCLibrary_eventSetSearchText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::SIK_UGCLibrary_eventSetSearchText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetSearchText)
{
	P_GET_STRUCT(FSIK_UGCQueryHandle,Z_Param_QueryHandle);
	P_GET_PROPERTY(FStrProperty,Z_Param_SearchText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetSearchText(Z_Param_QueryHandle,Z_Param_SearchText);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetSearchText

// Begin Class USIK_UGCLibrary Function SetUserItemVote
struct Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics
{
	struct SIK_UGCLibrary_eventSetUserItemVote_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		bool bVoteUp;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static void NewProp_bVoteUp_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bVoteUp;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventSetUserItemVote_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
void Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetUserItemVote_Parms*)Obj)->bVoteUp = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_bVoteUp = { "bVoteUp", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetUserItemVote_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_bVoteUp_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSetUserItemVote_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSetUserItemVote_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_bVoteUp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SetUserItemVote", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::SIK_UGCLibrary_eventSetUserItemVote_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::SIK_UGCLibrary_eventSetUserItemVote_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSetUserItemVote)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_GET_UBOOL(Z_Param_bVoteUp);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::SetUserItemVote(Z_Param_PublishedFileId,Z_Param_bVoteUp);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SetUserItemVote

// Begin Class USIK_UGCLibrary Function ShowWorkshopEULA
struct Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics
{
	struct SIK_UGCLibrary_eventShowWorkshopEULA_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventShowWorkshopEULA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventShowWorkshopEULA_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "ShowWorkshopEULA", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::SIK_UGCLibrary_eventShowWorkshopEULA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::SIK_UGCLibrary_eventShowWorkshopEULA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execShowWorkshopEULA)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::ShowWorkshopEULA();
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function ShowWorkshopEULA

// Begin Class USIK_UGCLibrary Function StartItemUpdate
struct Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics
{
	struct SIK_UGCLibrary_eventStartItemUpdate_Parms
	{
		FSIK_AppId AppID;
		FSIK_PublishedFileId PublishedFileID;
		FSIK_UGCUpdateHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventStartItemUpdate_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventStartItemUpdate_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventStartItemUpdate_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "StartItemUpdate", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::SIK_UGCLibrary_eventStartItemUpdate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::SIK_UGCLibrary_eventStartItemUpdate_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execStartItemUpdate)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_UGCUpdateHandle*)Z_Param__Result=USIK_UGCLibrary::StartItemUpdate(Z_Param_AppID,Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function StartItemUpdate

// Begin Class USIK_UGCLibrary Function SuspendDownloads
struct Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics
{
	struct SIK_UGCLibrary_eventSuspendDownloads_Parms
	{
		bool bSuspend;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bSuspend_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuspend;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::NewProp_bSuspend_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventSuspendDownloads_Parms*)Obj)->bSuspend = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::NewProp_bSuspend = { "bSuspend", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventSuspendDownloads_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::NewProp_bSuspend_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::NewProp_bSuspend,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "SuspendDownloads", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::SIK_UGCLibrary_eventSuspendDownloads_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::SIK_UGCLibrary_eventSuspendDownloads_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execSuspendDownloads)
{
	P_GET_UBOOL(Z_Param_bSuspend);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UGCLibrary::SuspendDownloads(Z_Param_bSuspend);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function SuspendDownloads

// Begin Class USIK_UGCLibrary Function UpdateItemPreviewFile
struct Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics
{
	struct SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		int32 PreviewIndex;
		FString PreviewFile;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviewFile_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PreviewFile;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_PreviewFile = { "PreviewFile", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms, PreviewFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviewFile_MetaData), NewProp_PreviewFile_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_PreviewFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "UpdateItemPreviewFile", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::SIK_UGCLibrary_eventUpdateItemPreviewFile_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execUpdateItemPreviewFile)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_PreviewFile);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::UpdateItemPreviewFile(Z_Param_UpdateHandle,Z_Param_PreviewIndex,Z_Param_PreviewFile);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function UpdateItemPreviewFile

// Begin Class USIK_UGCLibrary Function UpdateItemPreviewVideo
struct Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics
{
	struct SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms
	{
		FSIK_UGCUpdateHandle UpdateHandle;
		int32 PreviewIndex;
		FString VideoID;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit | SDK Functions | UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VideoID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_UpdateHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PreviewIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_VideoID;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_UpdateHandle = { "UpdateHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms, UpdateHandle), Z_Construct_UScriptStruct_FSIK_UGCUpdateHandle, METADATA_PARAMS(0, nullptr) }; // 3853585374
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_PreviewIndex = { "PreviewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms, PreviewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_VideoID = { "VideoID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms, VideoID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VideoID_MetaData), NewProp_VideoID_MetaData) };
void Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms), &Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_UpdateHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_PreviewIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_VideoID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UGCLibrary, nullptr, "UpdateItemPreviewVideo", nullptr, nullptr, Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::SIK_UGCLibrary_eventUpdateItemPreviewVideo_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UGCLibrary::execUpdateItemPreviewVideo)
{
	P_GET_STRUCT(FSIK_UGCUpdateHandle,Z_Param_UpdateHandle);
	P_GET_PROPERTY(FIntProperty,Z_Param_PreviewIndex);
	P_GET_PROPERTY(FStrProperty,Z_Param_VideoID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UGCLibrary::UpdateItemPreviewVideo(Z_Param_UpdateHandle,Z_Param_PreviewIndex,Z_Param_VideoID);
	P_NATIVE_END;
}
// End Class USIK_UGCLibrary Function UpdateItemPreviewVideo

// Begin Class USIK_UGCLibrary
void USIK_UGCLibrary::StaticRegisterNativesUSIK_UGCLibrary()
{
	UClass* Class = USIK_UGCLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddContentDescriptor", &USIK_UGCLibrary::execAddContentDescriptor },
		{ "AddExcludedTag", &USIK_UGCLibrary::execAddExcludedTag },
		{ "AddItemKeyValueTag", &USIK_UGCLibrary::execAddItemKeyValueTag },
		{ "AddItemPreviewFile", &USIK_UGCLibrary::execAddItemPreviewFile },
		{ "AddItemPreviewVideo", &USIK_UGCLibrary::execAddItemPreviewVideo },
		{ "AddRequiredKeyValueTag", &USIK_UGCLibrary::execAddRequiredKeyValueTag },
		{ "AddRequiredTag", &USIK_UGCLibrary::execAddRequiredTag },
		{ "AddRequiredTagGroup", &USIK_UGCLibrary::execAddRequiredTagGroup },
		{ "BInitWorkshopForGameServer", &USIK_UGCLibrary::execBInitWorkshopForGameServer },
		{ "CreateQueryAllUGCRequest", &USIK_UGCLibrary::execCreateQueryAllUGCRequest },
		{ "CreateQueryUGCDetailsRequest", &USIK_UGCLibrary::execCreateQueryUGCDetailsRequest },
		{ "CreateQueryUserUGCRequest", &USIK_UGCLibrary::execCreateQueryUserUGCRequest },
		{ "DownloadItem", &USIK_UGCLibrary::execDownloadItem },
		{ "GetAppDependencies", &USIK_UGCLibrary::execGetAppDependencies },
		{ "GetItemDownloadInfo", &USIK_UGCLibrary::execGetItemDownloadInfo },
		{ "GetItemInstallInfo", &USIK_UGCLibrary::execGetItemInstallInfo },
		{ "GetItemState", &USIK_UGCLibrary::execGetItemState },
		{ "GetItemUpdateProgress", &USIK_UGCLibrary::execGetItemUpdateProgress },
		{ "GetNumSubscribedItems", &USIK_UGCLibrary::execGetNumSubscribedItems },
		{ "GetQueryUGCAdditionalPreview", &USIK_UGCLibrary::execGetQueryUGCAdditionalPreview },
		{ "GetQueryUGCChildren", &USIK_UGCLibrary::execGetQueryUGCChildren },
		{ "GetQueryUGCContentDescriptors", &USIK_UGCLibrary::execGetQueryUGCContentDescriptors },
		{ "GetQueryUGCKeyValueTag", &USIK_UGCLibrary::execGetQueryUGCKeyValueTag },
		{ "GetQueryUGCMetadata", &USIK_UGCLibrary::execGetQueryUGCMetadata },
		{ "GetQueryUGCNumAdditionalPreviews", &USIK_UGCLibrary::execGetQueryUGCNumAdditionalPreviews },
		{ "GetQueryUGCNumKeyValueTags", &USIK_UGCLibrary::execGetQueryUGCNumKeyValueTags },
		{ "GetQueryUGCNumTags", &USIK_UGCLibrary::execGetQueryUGCNumTags },
		{ "GetQueryUGCPreviewURL", &USIK_UGCLibrary::execGetQueryUGCPreviewURL },
		{ "GetQueryUGCResult", &USIK_UGCLibrary::execGetQueryUGCResult },
		{ "GetQueryUGCStatistic", &USIK_UGCLibrary::execGetQueryUGCStatistic },
		{ "GetQueryUGCTag", &USIK_UGCLibrary::execGetQueryUGCTag },
		{ "GetQueryUGCTagDisplayName", &USIK_UGCLibrary::execGetQueryUGCTagDisplayName },
		{ "GetSubscribedItems", &USIK_UGCLibrary::execGetSubscribedItems },
		{ "ReleaseQueryUGCRequest", &USIK_UGCLibrary::execReleaseQueryUGCRequest },
		{ "RemoveContentDescriptor", &USIK_UGCLibrary::execRemoveContentDescriptor },
		{ "RemoveItemKeyValueTags", &USIK_UGCLibrary::execRemoveItemKeyValueTags },
		{ "RemoveItemPreview", &USIK_UGCLibrary::execRemoveItemPreview },
		{ "SetAllowCachedResponse", &USIK_UGCLibrary::execSetAllowCachedResponse },
		{ "SetCloudFileNameFilter", &USIK_UGCLibrary::execSetCloudFileNameFilter },
		{ "SetItemContent", &USIK_UGCLibrary::execSetItemContent },
		{ "SetItemDescription", &USIK_UGCLibrary::execSetItemDescription },
		{ "SetItemMetadata", &USIK_UGCLibrary::execSetItemMetadata },
		{ "SetItemPreview", &USIK_UGCLibrary::execSetItemPreview },
		{ "SetItemTags", &USIK_UGCLibrary::execSetItemTags },
		{ "SetItemTitle", &USIK_UGCLibrary::execSetItemTitle },
		{ "SetItemUpdateLanguage", &USIK_UGCLibrary::execSetItemUpdateLanguage },
		{ "SetItemVisibility", &USIK_UGCLibrary::execSetItemVisibility },
		{ "SetLanguage", &USIK_UGCLibrary::execSetLanguage },
		{ "SetMatchAnyTag", &USIK_UGCLibrary::execSetMatchAnyTag },
		{ "SetRankedByTrendDays", &USIK_UGCLibrary::execSetRankedByTrendDays },
		{ "SetReturnAdditionalPreviews", &USIK_UGCLibrary::execSetReturnAdditionalPreviews },
		{ "SetReturnChildren", &USIK_UGCLibrary::execSetReturnChildren },
		{ "SetReturnKeyValueTags", &USIK_UGCLibrary::execSetReturnKeyValueTags },
		{ "SetReturnLongDescription", &USIK_UGCLibrary::execSetReturnLongDescription },
		{ "SetReturnMetadata", &USIK_UGCLibrary::execSetReturnMetadata },
		{ "SetReturnOnlyIDs", &USIK_UGCLibrary::execSetReturnOnlyIDs },
		{ "SetReturnPlaytimeStats", &USIK_UGCLibrary::execSetReturnPlaytimeStats },
		{ "SetReturnTotalOnly", &USIK_UGCLibrary::execSetReturnTotalOnly },
		{ "SetSearchText", &USIK_UGCLibrary::execSetSearchText },
		{ "SetUserItemVote", &USIK_UGCLibrary::execSetUserItemVote },
		{ "ShowWorkshopEULA", &USIK_UGCLibrary::execShowWorkshopEULA },
		{ "StartItemUpdate", &USIK_UGCLibrary::execStartItemUpdate },
		{ "SuspendDownloads", &USIK_UGCLibrary::execSuspendDownloads },
		{ "UpdateItemPreviewFile", &USIK_UGCLibrary::execUpdateItemPreviewFile },
		{ "UpdateItemPreviewVideo", &USIK_UGCLibrary::execUpdateItemPreviewVideo },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UGCLibrary);
UClass* Z_Construct_UClass_USIK_UGCLibrary_NoRegister()
{
	return USIK_UGCLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_UGCLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/UGC/SIK_UGCLibrary.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_UGCLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddContentDescriptor, "AddContentDescriptor" }, // 3614866428
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddExcludedTag, "AddExcludedTag" }, // 3213172856
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddItemKeyValueTag, "AddItemKeyValueTag" }, // 5490510
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewFile, "AddItemPreviewFile" }, // 415415959
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddItemPreviewVideo, "AddItemPreviewVideo" }, // 1778563753
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredKeyValueTag, "AddRequiredKeyValueTag" }, // 737503380
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTag, "AddRequiredTag" }, // 95219514
		{ &Z_Construct_UFunction_USIK_UGCLibrary_AddRequiredTagGroup, "AddRequiredTagGroup" }, // 3966177178
		{ &Z_Construct_UFunction_USIK_UGCLibrary_BInitWorkshopForGameServer, "BInitWorkshopForGameServer" }, // 1098079228
		{ &Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryAllUGCRequest, "CreateQueryAllUGCRequest" }, // 647331249
		{ &Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUGCDetailsRequest, "CreateQueryUGCDetailsRequest" }, // 1401031050
		{ &Z_Construct_UFunction_USIK_UGCLibrary_CreateQueryUserUGCRequest, "CreateQueryUserUGCRequest" }, // 2730237145
		{ &Z_Construct_UFunction_USIK_UGCLibrary_DownloadItem, "DownloadItem" }, // 3423025592
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetAppDependencies, "GetAppDependencies" }, // 1701295766
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetItemDownloadInfo, "GetItemDownloadInfo" }, // 473730743
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetItemInstallInfo, "GetItemInstallInfo" }, // 39856381
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetItemState, "GetItemState" }, // 1548700237
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetItemUpdateProgress, "GetItemUpdateProgress" }, // 3987325716
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetNumSubscribedItems, "GetNumSubscribedItems" }, // 2947227447
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCAdditionalPreview, "GetQueryUGCAdditionalPreview" }, // 1063693180
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCChildren, "GetQueryUGCChildren" }, // 2759769398
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCContentDescriptors, "GetQueryUGCContentDescriptors" }, // 987434796
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCKeyValueTag, "GetQueryUGCKeyValueTag" }, // 1081760448
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCMetadata, "GetQueryUGCMetadata" }, // 2985418335
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumAdditionalPreviews, "GetQueryUGCNumAdditionalPreviews" }, // 1653212344
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumKeyValueTags, "GetQueryUGCNumKeyValueTags" }, // 3260080297
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCNumTags, "GetQueryUGCNumTags" }, // 3417752636
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCPreviewURL, "GetQueryUGCPreviewURL" }, // 1421369625
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCResult, "GetQueryUGCResult" }, // 1687573136
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCStatistic, "GetQueryUGCStatistic" }, // 2178484395
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTag, "GetQueryUGCTag" }, // 2089558329
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetQueryUGCTagDisplayName, "GetQueryUGCTagDisplayName" }, // 1417027816
		{ &Z_Construct_UFunction_USIK_UGCLibrary_GetSubscribedItems, "GetSubscribedItems" }, // 485685660
		{ &Z_Construct_UFunction_USIK_UGCLibrary_ReleaseQueryUGCRequest, "ReleaseQueryUGCRequest" }, // 3153933464
		{ &Z_Construct_UFunction_USIK_UGCLibrary_RemoveContentDescriptor, "RemoveContentDescriptor" }, // 1540600728
		{ &Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemKeyValueTags, "RemoveItemKeyValueTags" }, // 4026836784
		{ &Z_Construct_UFunction_USIK_UGCLibrary_RemoveItemPreview, "RemoveItemPreview" }, // 3401005047
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetAllowCachedResponse, "SetAllowCachedResponse" }, // 2624961481
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetCloudFileNameFilter, "SetCloudFileNameFilter" }, // 1702263728
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemContent, "SetItemContent" }, // 445469863
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemDescription, "SetItemDescription" }, // 4277093733
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemMetadata, "SetItemMetadata" }, // 675779657
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemPreview, "SetItemPreview" }, // 3844615694
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemTags, "SetItemTags" }, // 2754707491
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemTitle, "SetItemTitle" }, // 267845113
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemUpdateLanguage, "SetItemUpdateLanguage" }, // 1460591304
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetItemVisibility, "SetItemVisibility" }, // 140450125
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetLanguage, "SetLanguage" }, // 1592490704
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetMatchAnyTag, "SetMatchAnyTag" }, // 2110442953
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetRankedByTrendDays, "SetRankedByTrendDays" }, // 3925602380
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnAdditionalPreviews, "SetReturnAdditionalPreviews" }, // 3182454919
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnChildren, "SetReturnChildren" }, // 4131906836
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnKeyValueTags, "SetReturnKeyValueTags" }, // 1818698944
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnLongDescription, "SetReturnLongDescription" }, // 391673181
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnMetadata, "SetReturnMetadata" }, // 1080262840
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnOnlyIDs, "SetReturnOnlyIDs" }, // 527075042
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnPlaytimeStats, "SetReturnPlaytimeStats" }, // 1765912208
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetReturnTotalOnly, "SetReturnTotalOnly" }, // 3567648639
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetSearchText, "SetSearchText" }, // 3981349104
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SetUserItemVote, "SetUserItemVote" }, // 1836856008
		{ &Z_Construct_UFunction_USIK_UGCLibrary_ShowWorkshopEULA, "ShowWorkshopEULA" }, // 1291913965
		{ &Z_Construct_UFunction_USIK_UGCLibrary_StartItemUpdate, "StartItemUpdate" }, // 2264641429
		{ &Z_Construct_UFunction_USIK_UGCLibrary_SuspendDownloads, "SuspendDownloads" }, // 2019152854
		{ &Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewFile, "UpdateItemPreviewFile" }, // 4027026049
		{ &Z_Construct_UFunction_USIK_UGCLibrary_UpdateItemPreviewVideo, "UpdateItemPreviewVideo" }, // 1479324309
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UGCLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_UGCLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UGCLibrary_Statics::ClassParams = {
	&USIK_UGCLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UGCLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UGCLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UGCLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_UGCLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UGCLibrary.OuterSingleton, Z_Construct_UClass_USIK_UGCLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UGCLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UGCLibrary>()
{
	return USIK_UGCLibrary::StaticClass();
}
USIK_UGCLibrary::USIK_UGCLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UGCLibrary);
USIK_UGCLibrary::~USIK_UGCLibrary() {}
// End Class USIK_UGCLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UGCLibrary, USIK_UGCLibrary::StaticClass, TEXT("USIK_UGCLibrary"), &Z_Registration_Info_UClass_USIK_UGCLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UGCLibrary), 773830783U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_3374587988(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_UGCLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
