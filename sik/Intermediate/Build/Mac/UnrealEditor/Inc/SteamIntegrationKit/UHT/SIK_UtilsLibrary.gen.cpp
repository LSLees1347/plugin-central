// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Utils/SIK_UtilsLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_UtilsLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_UtilsLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_UtilsLibrary Function GetAppID
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics
{
	struct SIK_UtilsLibrary_eventGetAppID_Parms
	{
		FSIK_AppId ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get App ID" },
		{ "Keywords", "GetAppID" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetAppID_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetAppID", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::SIK_UtilsLibrary_eventGetAppID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::SIK_UtilsLibrary_eventGetAppID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetAppID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_AppId*)Z_Param__Result=USIK_UtilsLibrary::GetAppID();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetAppID

// Begin Class USIK_UtilsLibrary Function GetCurrentBatteryPower
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics
{
	struct SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Current Battery Power" },
		{ "Keywords", "GetCurrentBatteryPower" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetCurrentBatteryPower", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::SIK_UtilsLibrary_eventGetCurrentBatteryPower_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetCurrentBatteryPower)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetCurrentBatteryPower();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetCurrentBatteryPower

// Begin Class USIK_UtilsLibrary Function GetEnteredGamepadTextInput
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Entered Gamepad Text Input" },
		{ "Keywords", "GetEnteredGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetEnteredGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetEnteredGamepadTextInput)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetEnteredGamepadTextInput();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetEnteredGamepadTextInput

// Begin Class USIK_UtilsLibrary Function GetEnteredGamepadTextLength
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics
{
	struct SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Entered Gamepad Text Length" },
		{ "Keywords", "GetEnteredGamepadTextLength" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetEnteredGamepadTextLength", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::SIK_UtilsLibrary_eventGetEnteredGamepadTextLength_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetEnteredGamepadTextLength)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetEnteredGamepadTextLength();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetEnteredGamepadTextLength

// Begin Class USIK_UtilsLibrary Function GetImageRGBA
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics
{
	struct SIK_UtilsLibrary_eventGetImageRGBA_Parms
	{
		int32 Image;
		TArray<FColor> OutData;
		int32 OutWidth;
		int32 OutHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "Comment", "//Thanks to @marown for fixing this function\n" },
		{ "DisplayName", "Get Image RGBA" },
		{ "Keywords", "GetImageRGBA" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ToolTip", "Thanks to @marown for fixing this function" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Image;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutData;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_Image = { "Image", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, Image), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData_Inner = { "OutData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData = { "OutData", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutData), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutWidth = { "OutWidth", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutHeight = { "OutHeight", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetImageRGBA_Parms, OutHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventGetImageRGBA_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventGetImageRGBA_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_Image,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_OutHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetImageRGBA", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::SIK_UtilsLibrary_eventGetImageRGBA_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::SIK_UtilsLibrary_eventGetImageRGBA_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetImageRGBA)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Image);
	P_GET_TARRAY_REF(FColor,Z_Param_Out_OutData);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutWidth);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::GetImageRGBA(Z_Param_Image,Z_Param_Out_OutData,Z_Param_Out_OutWidth,Z_Param_Out_OutHeight);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetImageRGBA

// Begin Class USIK_UtilsLibrary Function GetIPCountry
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics
{
	struct SIK_UtilsLibrary_eventGetIPCountry_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get IP Country" },
		{ "Keywords", "GetIPCountry" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetIPCountry_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetIPCountry", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::SIK_UtilsLibrary_eventGetIPCountry_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::SIK_UtilsLibrary_eventGetIPCountry_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetIPCountry)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetIPCountry();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetIPCountry

// Begin Class USIK_UtilsLibrary Function GetSecondsSinceAppActive
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics
{
	struct SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Seconds Since App Active" },
		{ "Keywords", "GetSecondsSinceAppActive" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSecondsSinceAppActive", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceAppActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSecondsSinceAppActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetSecondsSinceAppActive();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetSecondsSinceAppActive

// Begin Class USIK_UtilsLibrary Function GetSecondsSinceComputerActive
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics
{
	struct SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Seconds Since Computer Active" },
		{ "Keywords", "GetSecondsSinceComputerActive" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSecondsSinceComputerActive", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::SIK_UtilsLibrary_eventGetSecondsSinceComputerActive_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSecondsSinceComputerActive)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetSecondsSinceComputerActive();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetSecondsSinceComputerActive

// Begin Class USIK_UtilsLibrary Function GetServerRealTime
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics
{
	struct SIK_UtilsLibrary_eventGetServerRealTime_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Server Real Time" },
		{ "Keywords", "GetServerRealTime" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetServerRealTime_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetServerRealTime", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::SIK_UtilsLibrary_eventGetServerRealTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::SIK_UtilsLibrary_eventGetServerRealTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetServerRealTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=USIK_UtilsLibrary::GetServerRealTime();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetServerRealTime

// Begin Class USIK_UtilsLibrary Function GetSteamUILanguage
struct Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics
{
	struct SIK_UtilsLibrary_eventGetSteamUILanguage_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Get Steam UI Language" },
		{ "Keywords", "GetSteamUILanguage" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventGetSteamUILanguage_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "GetSteamUILanguage", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::SIK_UtilsLibrary_eventGetSteamUILanguage_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::SIK_UtilsLibrary_eventGetSteamUILanguage_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execGetSteamUILanguage)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_UtilsLibrary::GetSteamUILanguage();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function GetSteamUILanguage

// Begin Class USIK_UtilsLibrary Function InitFilterText
struct Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics
{
	struct SIK_UtilsLibrary_eventInitFilterText_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Init Filter Text" },
		{ "Keywords", "InitFilterText" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventInitFilterText_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventInitFilterText_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "InitFilterText", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::SIK_UtilsLibrary_eventInitFilterText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::SIK_UtilsLibrary_eventInitFilterText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execInitFilterText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::InitFilterText();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function InitFilterText

// Begin Class USIK_UtilsLibrary Function IsControllerConnected
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics
{
	struct SIK_UtilsLibrary_eventIsControllerConnected_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Inputs" },
		{ "DisplayName", "Is Controller Connected" },
		{ "Keywords", "IsControllerConnected" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsControllerConnected_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsControllerConnected_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsControllerConnected", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::SIK_UtilsLibrary_eventIsControllerConnected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::SIK_UtilsLibrary_eventIsControllerConnected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsControllerConnected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsControllerConnected();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsControllerConnected

// Begin Class USIK_UtilsLibrary Function IsOverlayEnabled
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics
{
	struct SIK_UtilsLibrary_eventIsOverlayEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Overlay Enabled" },
		{ "Keywords", "IsOverlayEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsOverlayEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsOverlayEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsOverlayEnabled", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::SIK_UtilsLibrary_eventIsOverlayEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::SIK_UtilsLibrary_eventIsOverlayEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsOverlayEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsOverlayEnabled();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsOverlayEnabled

// Begin Class USIK_UtilsLibrary Function IsSteamChinaLauncher
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam China Launcher" },
		{ "Keywords", "IsSteamChinaLauncher" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamChinaLauncher", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::SIK_UtilsLibrary_eventIsSteamChinaLauncher_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamChinaLauncher)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamChinaLauncher();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsSteamChinaLauncher

// Begin Class USIK_UtilsLibrary Function IsSteamInBigPictureMode
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam In Big Picture Mode" },
		{ "Keywords", "IsSteamInBigPictureMode" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamInBigPictureMode", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::SIK_UtilsLibrary_eventIsSteamInBigPictureMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamInBigPictureMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamInBigPictureMode();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsSteamInBigPictureMode

// Begin Class USIK_UtilsLibrary Function IsSteamRunningInVR
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam Running In VR" },
		{ "Keywords", "IsSteamRunningInVR" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamRunningInVR", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::SIK_UtilsLibrary_eventIsSteamRunningInVR_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamRunningInVR)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamRunningInVR();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsSteamRunningInVR

// Begin Class USIK_UtilsLibrary Function IsSteamRunningOnSteamDeck
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics
{
	struct SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is Steam Running On Steam Deck" },
		{ "Keywords", "IsSteamRunningOnSteamDeck" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsSteamRunningOnSteamDeck", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::SIK_UtilsLibrary_eventIsSteamRunningOnSteamDeck_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsSteamRunningOnSteamDeck)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsSteamRunningOnSteamDeck();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsSteamRunningOnSteamDeck

// Begin Class USIK_UtilsLibrary Function IsVRHeadsetStreamingEnabled
struct Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics
{
	struct SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Is VR Headset Streaming Enabled" },
		{ "Keywords", "IsVRHeadsetStreamingEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "IsVRHeadsetStreamingEnabled", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventIsVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execIsVRHeadsetStreamingEnabled)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::IsVRHeadsetStreamingEnabled();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function IsVRHeadsetStreamingEnabled

// Begin Class USIK_UtilsLibrary Function OpenSteamKeyboard
struct Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics
{
	struct SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms
	{
		int32 KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Open Steam Keyboard" },
		{ "Keywords", "OpenSteamKeyboard" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, KeyboardMode), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "OpenSteamKeyboard", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::SIK_UtilsLibrary_eventOpenSteamKeyboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execOpenSteamKeyboard)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::OpenSteamKeyboard(Z_Param_KeyboardMode,Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function OpenSteamKeyboard

// Begin Class USIK_UtilsLibrary Function OverlayNeedsPresent
struct Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics
{
	struct SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Overlay Needs Present" },
		{ "Keywords", "BOverlayNeedsPresent" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "OverlayNeedsPresent", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::SIK_UtilsLibrary_eventOverlayNeedsPresent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execOverlayNeedsPresent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::OverlayNeedsPresent();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function OverlayNeedsPresent

// Begin Class USIK_UtilsLibrary Function SetGameLauncherMode
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics
{
	struct SIK_UtilsLibrary_eventSetGameLauncherMode_Parms
	{
		bool bLauncherMode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Game Launcher Mode" },
		{ "Keywords", "SetGameLauncherMode" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bLauncherMode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLauncherMode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSetGameLauncherMode_Parms*)Obj)->bLauncherMode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode = { "bLauncherMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSetGameLauncherMode_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::NewProp_bLauncherMode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetGameLauncherMode", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::SIK_UtilsLibrary_eventSetGameLauncherMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::SIK_UtilsLibrary_eventSetGameLauncherMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetGameLauncherMode)
{
	P_GET_UBOOL(Z_Param_bLauncherMode);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetGameLauncherMode(Z_Param_bLauncherMode);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function SetGameLauncherMode

// Begin Class USIK_UtilsLibrary Function SetOverlayNotificationInset
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics
{
	struct SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms
	{
		int32 HorizontalInset;
		int32 VerticalInset;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Overlay Notification Inset" },
		{ "Keywords", "SetOverlayNotificationInset" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HorizontalInset;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VerticalInset;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset = { "HorizontalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms, HorizontalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_VerticalInset = { "VerticalInset", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms, VerticalInset), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_HorizontalInset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::NewProp_VerticalInset,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetOverlayNotificationInset", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationInset_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetOverlayNotificationInset)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HorizontalInset);
	P_GET_PROPERTY(FIntProperty,Z_Param_VerticalInset);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetOverlayNotificationInset(Z_Param_HorizontalInset,Z_Param_VerticalInset);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function SetOverlayNotificationInset

// Begin Class USIK_UtilsLibrary Function SetOverlayNotificationPosition
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics
{
	struct SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms
	{
		TEnumAsByte<ESIK_NotificationPosition> NotificationPosition;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set Overlay Notification Position" },
		{ "Keywords", "SetOverlayNotificationPosition" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NotificationPosition;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition = { "NotificationPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms, NotificationPosition), Z_Construct_UEnum_SteamIntegrationKit_ESIK_NotificationPosition, METADATA_PARAMS(0, nullptr) }; // 424093589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::NewProp_NotificationPosition,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetOverlayNotificationPosition", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::SIK_UtilsLibrary_eventSetOverlayNotificationPosition_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetOverlayNotificationPosition)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_NotificationPosition);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetOverlayNotificationPosition(ESIK_NotificationPosition(Z_Param_NotificationPosition));
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function SetOverlayNotificationPosition

// Begin Class USIK_UtilsLibrary Function SetVRHeadsetStreamingEnabled
struct Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics
{
	struct SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Set VR Headset Streaming Enabled" },
		{ "Keywords", "SetVRHeadsetStreamingEnabled" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "SetVRHeadsetStreamingEnabled", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::SIK_UtilsLibrary_eventSetVRHeadsetStreamingEnabled_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execSetVRHeadsetStreamingEnabled)
{
	P_GET_UBOOL(Z_Param_bEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::SetVRHeadsetStreamingEnabled(Z_Param_bEnabled);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function SetVRHeadsetStreamingEnabled

// Begin Class USIK_UtilsLibrary Function ShowFloatingGamepadTextInput
struct Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms
	{
		TEnumAsByte<ESIK_EFloatingGamepadTextInputMode> KeyboardMode;
		int32 TextFieldXPosition;
		int32 TextFieldYPosition;
		int32 TextFieldWidth;
		int32 TextFieldHeight;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Show Floating Gamepad Text Input" },
		{ "Keywords", "ShowFloatingGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_KeyboardMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldXPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldYPosition;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldWidth;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextFieldHeight;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode = { "KeyboardMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, KeyboardMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EFloatingGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 2852502990
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition = { "TextFieldXPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldXPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition = { "TextFieldYPosition", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldYPosition), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth = { "TextFieldWidth", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldWidth), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight = { "TextFieldHeight", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms, TextFieldHeight), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_KeyboardMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldXPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldYPosition,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_TextFieldHeight,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ShowFloatingGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowFloatingGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execShowFloatingGamepadTextInput)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_KeyboardMode);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldXPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldYPosition);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldWidth);
	P_GET_PROPERTY(FIntProperty,Z_Param_TextFieldHeight);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::ShowFloatingGamepadTextInput(ESIK_EFloatingGamepadTextInputMode(Z_Param_KeyboardMode),Z_Param_TextFieldXPosition,Z_Param_TextFieldYPosition,Z_Param_TextFieldWidth,Z_Param_TextFieldHeight);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function ShowFloatingGamepadTextInput

// Begin Class USIK_UtilsLibrary Function ShowGamepadTextInput
struct Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics
{
	struct SIK_UtilsLibrary_eventShowGamepadTextInput_Parms
	{
		TEnumAsByte<ESIK_EGamepadTextInputMode> InputMode;
		TEnumAsByte<ESIK_EGamepadTextInputLineMode> LineInputMode;
		FString Description;
		int32 CharMax;
		FString ExistingText;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Show Gamepad Text Input" },
		{ "Keywords", "ShowGamepadTextInput" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Description_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExistingText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LineInputMode;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Description;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CharMax;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ExistingText;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, InputMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputMode, METADATA_PARAMS(0, nullptr) }; // 2252031103
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_LineInputMode = { "LineInputMode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, LineInputMode), Z_Construct_UEnum_SteamIntegrationKit_ESIK_EGamepadTextInputLineMode, METADATA_PARAMS(0, nullptr) }; // 869328042
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_Description = { "Description", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, Description), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Description_MetaData), NewProp_Description_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_CharMax = { "CharMax", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, CharMax), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ExistingText = { "ExistingText", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms, ExistingText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExistingText_MetaData), NewProp_ExistingText_MetaData) };
void Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_UtilsLibrary_eventShowGamepadTextInput_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_UtilsLibrary_eventShowGamepadTextInput_Parms), &Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_LineInputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_Description,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_CharMax,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ExistingText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "ShowGamepadTextInput", nullptr, nullptr, Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowGamepadTextInput_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::SIK_UtilsLibrary_eventShowGamepadTextInput_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execShowGamepadTextInput)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_InputMode);
	P_GET_PROPERTY(FByteProperty,Z_Param_LineInputMode);
	P_GET_PROPERTY(FStrProperty,Z_Param_Description);
	P_GET_PROPERTY(FIntProperty,Z_Param_CharMax);
	P_GET_PROPERTY(FStrProperty,Z_Param_ExistingText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_UtilsLibrary::ShowGamepadTextInput(ESIK_EGamepadTextInputMode(Z_Param_InputMode),ESIK_EGamepadTextInputLineMode(Z_Param_LineInputMode),Z_Param_Description,Z_Param_CharMax,Z_Param_ExistingText);
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function ShowGamepadTextInput

// Begin Class USIK_UtilsLibrary Function StartVrDashboard
struct Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Utils" },
		{ "DisplayName", "Start Vr Dashboard" },
		{ "Keywords", "StartVrDashboard" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_UtilsLibrary, nullptr, "StartVrDashboard", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_UtilsLibrary::execStartVrDashboard)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_UtilsLibrary::StartVrDashboard();
	P_NATIVE_END;
}
// End Class USIK_UtilsLibrary Function StartVrDashboard

// Begin Class USIK_UtilsLibrary
void USIK_UtilsLibrary::StaticRegisterNativesUSIK_UtilsLibrary()
{
	UClass* Class = USIK_UtilsLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppID", &USIK_UtilsLibrary::execGetAppID },
		{ "GetCurrentBatteryPower", &USIK_UtilsLibrary::execGetCurrentBatteryPower },
		{ "GetEnteredGamepadTextInput", &USIK_UtilsLibrary::execGetEnteredGamepadTextInput },
		{ "GetEnteredGamepadTextLength", &USIK_UtilsLibrary::execGetEnteredGamepadTextLength },
		{ "GetImageRGBA", &USIK_UtilsLibrary::execGetImageRGBA },
		{ "GetIPCountry", &USIK_UtilsLibrary::execGetIPCountry },
		{ "GetSecondsSinceAppActive", &USIK_UtilsLibrary::execGetSecondsSinceAppActive },
		{ "GetSecondsSinceComputerActive", &USIK_UtilsLibrary::execGetSecondsSinceComputerActive },
		{ "GetServerRealTime", &USIK_UtilsLibrary::execGetServerRealTime },
		{ "GetSteamUILanguage", &USIK_UtilsLibrary::execGetSteamUILanguage },
		{ "InitFilterText", &USIK_UtilsLibrary::execInitFilterText },
		{ "IsControllerConnected", &USIK_UtilsLibrary::execIsControllerConnected },
		{ "IsOverlayEnabled", &USIK_UtilsLibrary::execIsOverlayEnabled },
		{ "IsSteamChinaLauncher", &USIK_UtilsLibrary::execIsSteamChinaLauncher },
		{ "IsSteamInBigPictureMode", &USIK_UtilsLibrary::execIsSteamInBigPictureMode },
		{ "IsSteamRunningInVR", &USIK_UtilsLibrary::execIsSteamRunningInVR },
		{ "IsSteamRunningOnSteamDeck", &USIK_UtilsLibrary::execIsSteamRunningOnSteamDeck },
		{ "IsVRHeadsetStreamingEnabled", &USIK_UtilsLibrary::execIsVRHeadsetStreamingEnabled },
		{ "OpenSteamKeyboard", &USIK_UtilsLibrary::execOpenSteamKeyboard },
		{ "OverlayNeedsPresent", &USIK_UtilsLibrary::execOverlayNeedsPresent },
		{ "SetGameLauncherMode", &USIK_UtilsLibrary::execSetGameLauncherMode },
		{ "SetOverlayNotificationInset", &USIK_UtilsLibrary::execSetOverlayNotificationInset },
		{ "SetOverlayNotificationPosition", &USIK_UtilsLibrary::execSetOverlayNotificationPosition },
		{ "SetVRHeadsetStreamingEnabled", &USIK_UtilsLibrary::execSetVRHeadsetStreamingEnabled },
		{ "ShowFloatingGamepadTextInput", &USIK_UtilsLibrary::execShowFloatingGamepadTextInput },
		{ "ShowGamepadTextInput", &USIK_UtilsLibrary::execShowGamepadTextInput },
		{ "StartVrDashboard", &USIK_UtilsLibrary::execStartVrDashboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_UtilsLibrary);
UClass* Z_Construct_UClass_USIK_UtilsLibrary_NoRegister()
{
	return USIK_UtilsLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_UtilsLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Utils/SIK_UtilsLibrary.h" },
		{ "ModuleRelativePath", "Functions/Utils/SIK_UtilsLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetAppID, "GetAppID" }, // 2503172639
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetCurrentBatteryPower, "GetCurrentBatteryPower" }, // 2737270641
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextInput, "GetEnteredGamepadTextInput" }, // 291604241
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetEnteredGamepadTextLength, "GetEnteredGamepadTextLength" }, // 3062280275
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetImageRGBA, "GetImageRGBA" }, // 560937292
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetIPCountry, "GetIPCountry" }, // 3783606921
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceAppActive, "GetSecondsSinceAppActive" }, // 2258016604
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSecondsSinceComputerActive, "GetSecondsSinceComputerActive" }, // 2557057992
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetServerRealTime, "GetServerRealTime" }, // 301753217
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_GetSteamUILanguage, "GetSteamUILanguage" }, // 2865086311
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_InitFilterText, "InitFilterText" }, // 3375969980
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsControllerConnected, "IsControllerConnected" }, // 1848789926
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsOverlayEnabled, "IsOverlayEnabled" }, // 992798193
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamChinaLauncher, "IsSteamChinaLauncher" }, // 3716197109
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamInBigPictureMode, "IsSteamInBigPictureMode" }, // 3225267838
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningInVR, "IsSteamRunningInVR" }, // 1461218761
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsSteamRunningOnSteamDeck, "IsSteamRunningOnSteamDeck" }, // 2028818157
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_IsVRHeadsetStreamingEnabled, "IsVRHeadsetStreamingEnabled" }, // 835156514
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_OpenSteamKeyboard, "OpenSteamKeyboard" }, // 1042008355
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_OverlayNeedsPresent, "OverlayNeedsPresent" }, // 4196851982
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetGameLauncherMode, "SetGameLauncherMode" }, // 2237270491
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationInset, "SetOverlayNotificationInset" }, // 1509790427
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetOverlayNotificationPosition, "SetOverlayNotificationPosition" }, // 402086412
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_SetVRHeadsetStreamingEnabled, "SetVRHeadsetStreamingEnabled" }, // 709089418
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ShowFloatingGamepadTextInput, "ShowFloatingGamepadTextInput" }, // 1573998846
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_ShowGamepadTextInput, "ShowGamepadTextInput" }, // 3465162179
		{ &Z_Construct_UFunction_USIK_UtilsLibrary_StartVrDashboard, "StartVrDashboard" }, // 545216901
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_UtilsLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_UtilsLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_UtilsLibrary_Statics::ClassParams = {
	&USIK_UtilsLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_UtilsLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_UtilsLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_UtilsLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton, Z_Construct_UClass_USIK_UtilsLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_UtilsLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_UtilsLibrary>()
{
	return USIK_UtilsLibrary::StaticClass();
}
USIK_UtilsLibrary::USIK_UtilsLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_UtilsLibrary);
USIK_UtilsLibrary::~USIK_UtilsLibrary() {}
// End Class USIK_UtilsLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_UtilsLibrary, USIK_UtilsLibrary::StaticClass, TEXT("USIK_UtilsLibrary"), &Z_Registration_Info_UClass_USIK_UtilsLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_UtilsLibrary), 364882391U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_1663370742(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Utils_SIK_UtilsLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
