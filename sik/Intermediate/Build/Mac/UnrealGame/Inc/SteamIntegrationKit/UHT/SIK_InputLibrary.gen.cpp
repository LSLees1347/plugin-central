// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Input/SIK_InputLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_InputLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InputLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_InputLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputActionSetHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputHandle();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_InputMotionData();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_InputLibrary Function ActivateActionSet
struct Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics
{
	struct SIK_InputLibrary_eventActivateActionSet_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ActionSetHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "/*\n\x09*Reconfigure the controller to use the specified action set (i.e. \"Menu\", \"Walk\", or \"Drive\").\n\n\x09This is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions.\n\x09*/" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "*Reconfigure the controller to use the specified action set (i.e. \"Menu\", \"Walk\", or \"Drive\").\n\nThis is cheap, and can be safely called repeatedly. It's often easier to repeatedly call it in your state loops, instead of trying to place it in all of your state transitions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventActivateActionSet_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventActivateActionSet_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::NewProp_ActionSetHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "ActivateActionSet", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::SIK_InputLibrary_eventActivateActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::SIK_InputLibrary_eventActivateActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execActivateActionSet)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputActionSetHandle,Z_Param_ActionSetHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::ActivateActionSet(Z_Param_InputHandle,Z_Param_ActionSetHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function ActivateActionSet

// Begin Class USIK_InputLibrary Function ActivateActionSetLayer
struct Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics
{
	struct SIK_InputLibrary_eventActivateActionSetLayer_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Reconfigure the controller to use the specified action set layer.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Reconfigure the controller to use the specified action set layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventActivateActionSetLayer_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventActivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "ActivateActionSetLayer", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::SIK_InputLibrary_eventActivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::SIK_InputLibrary_eventActivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execActivateActionSetLayer)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::ActivateActionSetLayer(Z_Param_InputHandle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function ActivateActionSetLayer

// Begin Class USIK_InputLibrary Function DeactivateActionSetLayer
struct Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics
{
	struct SIK_InputLibrary_eventDeactivateActionSetLayer_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ActionSetLayerHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Reconfigure the controller to stop using the specified action set layer.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Reconfigure the controller to stop using the specified action set layer." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetLayerHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventDeactivateActionSetLayer_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle = { "ActionSetLayerHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventDeactivateActionSetLayer_Parms, ActionSetLayerHandle), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::NewProp_ActionSetLayerHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "DeactivateActionSetLayer", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::SIK_InputLibrary_eventDeactivateActionSetLayer_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::SIK_InputLibrary_eventDeactivateActionSetLayer_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execDeactivateActionSetLayer)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputActionSetHandle,Z_Param_ActionSetLayerHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::DeactivateActionSetLayer(Z_Param_InputHandle,Z_Param_ActionSetLayerHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function DeactivateActionSetLayer

// Begin Class USIK_InputLibrary Function DeactivateAllActionSetLayers
struct Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics
{
	struct SIK_InputLibrary_eventDeactivateAllActionSetLayers_Parms
	{
		FSIK_InputHandle InputHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Reconfigure the controller to stop using all action set layers.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Reconfigure the controller to stop using all action set layers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventDeactivateAllActionSetLayers_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::NewProp_InputHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "DeactivateAllActionSetLayers", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::SIK_InputLibrary_eventDeactivateAllActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::SIK_InputLibrary_eventDeactivateAllActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execDeactivateAllActionSetLayers)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::DeactivateAllActionSetLayers(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function DeactivateAllActionSetLayers

// Begin Class USIK_InputLibrary Function GetActionOriginFromXboxOrigin
struct Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics
{
	struct SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms
	{
		FSIK_InputHandle InputHandle;
		TEnumAsByte<ESIK_XboxOrigin> XboxOrigin;
		TEnumAsByte<ESIK_InputActionOrigin> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get an action origin that you can use in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_XboxOrigin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_XboxOrigin = { "XboxOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms, XboxOrigin), Z_Construct_UEnum_SteamIntegrationKit_ESIK_XboxOrigin, METADATA_PARAMS(0, nullptr) }; // 3205203327
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_XboxOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetActionOriginFromXboxOrigin", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::SIK_InputLibrary_eventGetActionOriginFromXboxOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetActionOriginFromXboxOrigin)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_XboxOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_InputActionOrigin>*)Z_Param__Result=USIK_InputLibrary::GetActionOriginFromXboxOrigin(Z_Param_InputHandle,ESIK_XboxOrigin(Z_Param_XboxOrigin));
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetActionOriginFromXboxOrigin

// Begin Class USIK_InputLibrary Function GetActionSetHandle
struct Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics
{
	struct SIK_InputLibrary_eventGetActionSetHandle_Parms
	{
		FString ActionSetName;
		FSIK_InputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Lookup the handle for an Action Set. Best to do this once on startup, and store the handles for all future API calls" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ActionSetName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::NewProp_ActionSetName = { "ActionSetName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActionSetHandle_Parms, ActionSetName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActionSetHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::NewProp_ActionSetName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetActionSetHandle", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::SIK_InputLibrary_eventGetActionSetHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::SIK_InputLibrary_eventGetActionSetHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetActionSetHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ActionSetName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputActionSetHandle*)Z_Param__Result=USIK_InputLibrary::GetActionSetHandle(Z_Param_ActionSetName);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetActionSetHandle

// Begin Class USIK_InputLibrary Function GetActiveActionSetLayers
struct Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics
{
	struct SIK_InputLibrary_eventGetActiveActionSetLayers_Parms
	{
		FSIK_InputHandle InputHandle;
		TArray<FSIK_InputActionSetHandle> ActionSetHandles;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Fill an array with all of the currently active action set layers for a specified controller handle.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Fill an array with all of the currently active action set layers for a specified controller handle." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandles_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ActionSetHandles;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActiveActionSetLayers_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ActionSetHandles_Inner = { "ActionSetHandles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ActionSetHandles = { "ActionSetHandles", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActiveActionSetLayers_Parms, ActionSetHandles), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetActiveActionSetLayers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ActionSetHandles_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ActionSetHandles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetActiveActionSetLayers", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::SIK_InputLibrary_eventGetActiveActionSetLayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::SIK_InputLibrary_eventGetActiveActionSetLayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetActiveActionSetLayers)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_TARRAY_REF(FSIK_InputActionSetHandle,Z_Param_Out_ActionSetHandles);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetActiveActionSetLayers(Z_Param_InputHandle,Z_Param_Out_ActionSetHandles);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetActiveActionSetLayers

// Begin Class USIK_InputLibrary Function GetAnalogActionData
struct Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics
{
	struct SIK_InputLibrary_eventGetAnalogActionData_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputAnalogActionHandle AnalogActionHandle;
		FSIK_InputAnalogActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns the current state of the supplied analog game action.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns the current state of the supplied analog game action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionData_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionData_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 2505109589
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputAnalogActionData, METADATA_PARAMS(0, nullptr) }; // 4029476183
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetAnalogActionData", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::SIK_InputLibrary_eventGetAnalogActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::SIK_InputLibrary_eventGetAnalogActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetAnalogActionData)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputAnalogActionData*)Z_Param__Result=USIK_InputLibrary::GetAnalogActionData(Z_Param_InputHandle,Z_Param_AnalogActionHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetAnalogActionData

// Begin Class USIK_InputLibrary Function GetAnalogActionHandle
struct Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics
{
	struct SIK_InputLibrary_eventGetAnalogActionHandle_Parms
	{
		FString AnalogActionName;
		FSIK_InputAnalogActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the handle of the specified Analog action.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the handle of the specified Analog action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_AnalogActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::NewProp_AnalogActionName = { "AnalogActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionHandle_Parms, AnalogActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 2505109589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::NewProp_AnalogActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetAnalogActionHandle", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::SIK_InputLibrary_eventGetAnalogActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::SIK_InputLibrary_eventGetAnalogActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetAnalogActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_AnalogActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputAnalogActionHandle*)Z_Param__Result=USIK_InputLibrary::GetAnalogActionHandle(Z_Param_AnalogActionName);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetAnalogActionHandle

// Begin Class USIK_InputLibrary Function GetAnalogActionOrigins
struct Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics
{
	struct SIK_InputLibrary_eventGetAnalogActionOrigins_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ActionSetHandle;
		FSIK_InputAnalogActionHandle AnalogActionHandle;
		TArray<TEnumAsByte<ESIK_InputActionOrigin> > OriginsOut;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the origin(s) for an analog action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionOrigins_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionOrigins_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 2505109589
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetAnalogActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_AnalogActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetAnalogActionOrigins", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::SIK_InputLibrary_eventGetAnalogActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::SIK_InputLibrary_eventGetAnalogActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetAnalogActionOrigins)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FSIK_InputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_GET_TARRAY_REF(TEnumAsByte<ESIK_InputActionOrigin>,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetAnalogActionOrigins(Z_Param_InputHandle,Z_Param_ActionSetHandle,Z_Param_AnalogActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetAnalogActionOrigins

// Begin Class USIK_InputLibrary Function GetConnectedControllers
struct Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics
{
	struct SIK_InputLibrary_eventGetConnectedControllers_Parms
	{
		TArray<FSIK_InputHandle> HandlesOut;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Enumerates currently connected controllers by filling handlesOut with controller handles.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Enumerates currently connected controllers by filling handlesOut with controller handles." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_HandlesOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_HandlesOut;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_HandlesOut_Inner = { "HandlesOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_HandlesOut = { "HandlesOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetConnectedControllers_Parms, HandlesOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetConnectedControllers_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_HandlesOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_HandlesOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetConnectedControllers", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::SIK_InputLibrary_eventGetConnectedControllers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::SIK_InputLibrary_eventGetConnectedControllers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetConnectedControllers)
{
	P_GET_TARRAY_REF(FSIK_InputHandle,Z_Param_Out_HandlesOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetConnectedControllers(Z_Param_Out_HandlesOut);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetConnectedControllers

// Begin Class USIK_InputLibrary Function GetControllerForGamepadIndex
struct Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics
{
	struct SIK_InputLibrary_eventGetControllerForGamepadIndex_Parms
	{
		int32 Index;
		FSIK_InputHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the type of controller using Steam Input Gamepad Emulation.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns the associated controller handle for the specified emulated gamepad. Can be used with GetInputTypeForHandle to determine the type of controller using Steam Input Gamepad Emulation." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetControllerForGamepadIndex_Parms, Index), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetControllerForGamepadIndex_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetControllerForGamepadIndex", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::SIK_InputLibrary_eventGetControllerForGamepadIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::SIK_InputLibrary_eventGetControllerForGamepadIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetControllerForGamepadIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputHandle*)Z_Param__Result=USIK_InputLibrary::GetControllerForGamepadIndex(Z_Param_Index);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetControllerForGamepadIndex

// Begin Class USIK_InputLibrary Function GetCurrentActionSet
struct Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics
{
	struct SIK_InputLibrary_eventGetCurrentActionSet_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the currently active action set for the specified controller.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the currently active action set for the specified controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetCurrentActionSet_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetCurrentActionSet_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetCurrentActionSet", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::SIK_InputLibrary_eventGetCurrentActionSet_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::SIK_InputLibrary_eventGetCurrentActionSet_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetCurrentActionSet)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputActionSetHandle*)Z_Param__Result=USIK_InputLibrary::GetCurrentActionSet(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetCurrentActionSet

// Begin Class USIK_InputLibrary Function GetDeviceBindingRevision
struct Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics
{
	struct SIK_InputLibrary_eventGetDeviceBindingRevision_Parms
	{
		FSIK_InputHandle InputHandle;
		int32 Major;
		int32 Minor;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Gets the major and minor device binding revisions for Steam Input API configurations. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagrees with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the major revision. Minor revisions are for small changes such as adding a new optional action or updating localization in the configuration. When updating the minor revision you generally can update a single configuration and check the \"Use Action Block\" to apply the action block changes to the other configurations.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Gets the major and minor device binding revisions for Steam Input API configurations. Major revisions are to be used when changing the number of action sets or otherwise reworking configurations to the degree that older configurations are no longer usable. When a user's binding disagrees with the major revision of the current official configuration Steam will forcibly update the user to the new configuration. New configurations will need to be made for every controller when updating the major revision. Minor revisions are for small changes such as adding a new optional action or updating localization in the configuration. When updating the minor revision you generally can update a single configuration and check the \"Use Action Block\" to apply the action block changes to the other configurations." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Major;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Minor;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDeviceBindingRevision_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_Major = { "Major", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDeviceBindingRevision_Parms, Major), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_Minor = { "Minor", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDeviceBindingRevision_Parms, Minor), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InputLibrary_eventGetDeviceBindingRevision_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InputLibrary_eventGetDeviceBindingRevision_Parms), &Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_Major,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_Minor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetDeviceBindingRevision", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::SIK_InputLibrary_eventGetDeviceBindingRevision_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::SIK_InputLibrary_eventGetDeviceBindingRevision_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetDeviceBindingRevision)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Major);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_Minor);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InputLibrary::GetDeviceBindingRevision(Z_Param_InputHandle,Z_Param_Out_Major,Z_Param_Out_Minor);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetDeviceBindingRevision

// Begin Class USIK_InputLibrary Function GetDigitalActionData
struct Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics
{
	struct SIK_InputLibrary_eventGetDigitalActionData_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputDigitalActionHandle DigitalActionHandle;
		FSIK_InputDigitalActionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns the current state of the supplied digital game action.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns the current state of the supplied digital game action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionData_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionData_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3261444853
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputDigitalActionData, METADATA_PARAMS(0, nullptr) }; // 1764906234
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetDigitalActionData", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::SIK_InputLibrary_eventGetDigitalActionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::SIK_InputLibrary_eventGetDigitalActionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetDigitalActionData)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputDigitalActionData*)Z_Param__Result=USIK_InputLibrary::GetDigitalActionData(Z_Param_InputHandle,Z_Param_DigitalActionHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetDigitalActionData

// Begin Class USIK_InputLibrary Function GetDigitalActionHandle
struct Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics
{
	struct SIK_InputLibrary_eventGetDigitalActionHandle_Parms
	{
		FString DigitalActionName;
		FSIK_InputDigitalActionHandle ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the handle of the specified digital action.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the handle of the specified digital action." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DigitalActionName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::NewProp_DigitalActionName = { "DigitalActionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionHandle_Parms, DigitalActionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionHandle_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3261444853
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::NewProp_DigitalActionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetDigitalActionHandle", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::SIK_InputLibrary_eventGetDigitalActionHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::SIK_InputLibrary_eventGetDigitalActionHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetDigitalActionHandle)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_DigitalActionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputDigitalActionHandle*)Z_Param__Result=USIK_InputLibrary::GetDigitalActionHandle(Z_Param_DigitalActionName);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetDigitalActionHandle

// Begin Class USIK_InputLibrary Function GetDigitalActionOrigins
struct Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics
{
	struct SIK_InputLibrary_eventGetDigitalActionOrigins_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputActionSetHandle ActionSetHandle;
		FSIK_InputDigitalActionHandle DigitalActionHandle;
		TArray<TEnumAsByte<ESIK_InputActionOrigin> > OriginsOut;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the origin(s) for a digital action within an action set by filling originsOut with EInputActionOrigin handles. Use this to display the appropriate on-screen prompt for the action" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActionSetHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DigitalActionHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OriginsOut_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OriginsOut;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionOrigins_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle = { "ActionSetHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionOrigins_Parms, ActionSetHandle), Z_Construct_UScriptStruct_FSIK_InputActionSetHandle, METADATA_PARAMS(0, nullptr) }; // 2229766044
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle = { "DigitalActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionOrigins_Parms, DigitalActionHandle), Z_Construct_UScriptStruct_FSIK_InputDigitalActionHandle, METADATA_PARAMS(0, nullptr) }; // 3261444853
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner = { "OriginsOut", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_OriginsOut = { "OriginsOut", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionOrigins_Parms, OriginsOut), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetDigitalActionOrigins_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_ActionSetHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_DigitalActionHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_OriginsOut_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_OriginsOut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetDigitalActionOrigins", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::SIK_InputLibrary_eventGetDigitalActionOrigins_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::SIK_InputLibrary_eventGetDigitalActionOrigins_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetDigitalActionOrigins)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputActionSetHandle,Z_Param_ActionSetHandle);
	P_GET_STRUCT(FSIK_InputDigitalActionHandle,Z_Param_DigitalActionHandle);
	P_GET_TARRAY_REF(TEnumAsByte<ESIK_InputActionOrigin>,Z_Param_Out_OriginsOut);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetDigitalActionOrigins(Z_Param_InputHandle,Z_Param_ActionSetHandle,Z_Param_DigitalActionHandle,Z_Param_Out_OriginsOut);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetDigitalActionOrigins

// Begin Class USIK_InputLibrary Function GetGamepadIndexForController
struct Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics
{
	struct SIK_InputLibrary_eventGetGamepadIndexForController_Parms
	{
		FSIK_InputHandle InputHandle;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns the associated gamepad index for the specified controller, if emulating a gamepad.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns the associated gamepad index for the specified controller, if emulating a gamepad." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetGamepadIndexForController_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetGamepadIndexForController_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetGamepadIndexForController", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::SIK_InputLibrary_eventGetGamepadIndexForController_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::SIK_InputLibrary_eventGetGamepadIndexForController_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetGamepadIndexForController)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetGamepadIndexForController(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetGamepadIndexForController

// Begin Class USIK_InputLibrary Function GetGlyphForActionOrigin
struct Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics
{
	struct SIK_InputLibrary_eventGetGlyphForActionOrigin_Parms
	{
		TEnumAsByte<ESIK_InputActionOrigin> Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get a local path to art for on-screen glyph for a particular origin.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get a local path to art for on-screen glyph for a particular origin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetGlyphForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetGlyphForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetGlyphForActionOrigin", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::SIK_InputLibrary_eventGetGlyphForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::SIK_InputLibrary_eventGetGlyphForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetGlyphForActionOrigin)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_InputLibrary::GetGlyphForActionOrigin(ESIK_InputActionOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetGlyphForActionOrigin

// Begin Class USIK_InputLibrary Function GetInputTypeForHandle
struct Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics
{
	struct SIK_InputLibrary_eventGetInputTypeForHandle_Parms
	{
		FSIK_InputHandle InputHandle;
		TEnumAsByte<ESIK_SteamInputType> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, Xbox 360 controller, PS4 controller, etc.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns the input type (device model) for the specified controller. This tells you if a given controller is a Steam controller, Xbox 360 controller, PS4 controller, etc." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetInputTypeForHandle_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetInputTypeForHandle_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType, METADATA_PARAMS(0, nullptr) }; // 1223027516
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetInputTypeForHandle", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::SIK_InputLibrary_eventGetInputTypeForHandle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::SIK_InputLibrary_eventGetInputTypeForHandle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetInputTypeForHandle)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_SteamInputType>*)Z_Param__Result=USIK_InputLibrary::GetInputTypeForHandle(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetInputTypeForHandle

// Begin Class USIK_InputLibrary Function GetMotionData
struct Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics
{
	struct SIK_InputLibrary_eventGetMotionData_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputMotionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns raw motion data for the specified controller.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns raw motion data for the specified controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetMotionData_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetMotionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FSIK_InputMotionData, METADATA_PARAMS(0, nullptr) }; // 3711252546
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetMotionData", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::SIK_InputLibrary_eventGetMotionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::SIK_InputLibrary_eventGetMotionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetMotionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetMotionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetMotionData)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSIK_InputMotionData*)Z_Param__Result=USIK_InputLibrary::GetMotionData(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetMotionData

// Begin Class USIK_InputLibrary Function GetRemotePlaySessionID
struct Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics
{
	struct SIK_InputLibrary_eventGetRemotePlaySessionID_Parms
	{
		FSIK_InputHandle InputHandle;
		int64 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the Steam Remote Play session ID associated with a device, or 0 if there is no session associated with it. See isteamremoteplay.h for more information on Steam Remote Play sessions." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetRemotePlaySessionID_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetRemotePlaySessionID_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetRemotePlaySessionID", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::SIK_InputLibrary_eventGetRemotePlaySessionID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::SIK_InputLibrary_eventGetRemotePlaySessionID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetRemotePlaySessionID)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int64*)Z_Param__Result=USIK_InputLibrary::GetRemotePlaySessionID(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetRemotePlaySessionID

// Begin Class USIK_InputLibrary Function GetStringForActionOrigin
struct Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics
{
	struct SIK_InputLibrary_eventGetStringForActionOrigin_Parms
	{
		TEnumAsByte<ESIK_InputActionOrigin> Origin;
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Returns a localized string (from Steam's language setting) for the specified origin.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Returns a localized string (from Steam's language setting) for the specified origin." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Origin;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::NewProp_Origin = { "Origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetStringForActionOrigin_Parms, Origin), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventGetStringForActionOrigin_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::NewProp_Origin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "GetStringForActionOrigin", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::SIK_InputLibrary_eventGetStringForActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::SIK_InputLibrary_eventGetStringForActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execGetStringForActionOrigin)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_Origin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=USIK_InputLibrary::GetStringForActionOrigin(ESIK_InputActionOrigin(Z_Param_Origin));
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function GetStringForActionOrigin

// Begin Class USIK_InputLibrary Function Init
struct Z_Construct_UFunction_USIK_InputLibrary_Init_Statics
{
	struct SIK_InputLibrary_eventInit_Parms
	{
		bool bExplicitlyCallRunFrame;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Must be called when starting use of the ISteamInput interface.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Must be called when starting use of the ISteamInput interface." },
	};
#endif // WITH_METADATA
	static void NewProp_bExplicitlyCallRunFrame_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bExplicitlyCallRunFrame;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_bExplicitlyCallRunFrame_SetBit(void* Obj)
{
	((SIK_InputLibrary_eventInit_Parms*)Obj)->bExplicitlyCallRunFrame = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_bExplicitlyCallRunFrame = { "bExplicitlyCallRunFrame", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InputLibrary_eventInit_Parms), &Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_bExplicitlyCallRunFrame_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InputLibrary_eventInit_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InputLibrary_eventInit_Parms), &Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_bExplicitlyCallRunFrame,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "Init", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::SIK_InputLibrary_eventInit_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::SIK_InputLibrary_eventInit_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_Init()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_Init_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execInit)
{
	P_GET_UBOOL(Z_Param_bExplicitlyCallRunFrame);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InputLibrary::Init(Z_Param_bExplicitlyCallRunFrame);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function Init

// Begin Class USIK_InputLibrary Function RunFrame
struct Z_Construct_UFunction_USIK_InputLibrary_RunFrame_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Synchronize API state with the latest Steam Controller inputs available. This is performed automatically by SteamAPI_RunCallbacks, but for the absolute lowest possible latency, you can call this directly before reading controller state.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Synchronize API state with the latest Steam Controller inputs available. This is performed automatically by SteamAPI_RunCallbacks, but for the absolute lowest possible latency, you can call this directly before reading controller state." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_RunFrame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "RunFrame", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_RunFrame_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_RunFrame_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_USIK_InputLibrary_RunFrame()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_RunFrame_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execRunFrame)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::RunFrame();
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function RunFrame

// Begin Class USIK_InputLibrary Function SetDualSenseTriggerEffect
struct Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics
{
	struct SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_ScePadTriggerEffectCommand L2;
		FSIK_ScePadTriggerEffectCommand R2;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Set the trigger effect for a DualSense controller.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Set the trigger effect for a DualSense controller." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_L2;
	static const UECodeGen_Private::FStructPropertyParams NewProp_R2;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_L2 = { "L2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms, L2), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 4008842300
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_R2 = { "R2", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms, R2), Z_Construct_UScriptStruct_FSIK_ScePadTriggerEffectCommand, METADATA_PARAMS(0, nullptr) }; // 4008842300
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_L2,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::NewProp_R2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "SetDualSenseTriggerEffect", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::SIK_InputLibrary_eventSetDualSenseTriggerEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execSetDualSenseTriggerEffect)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_ScePadTriggerEffectCommand,Z_Param_L2);
	P_GET_STRUCT(FSIK_ScePadTriggerEffectCommand,Z_Param_R2);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::SetDualSenseTriggerEffect(Z_Param_InputHandle,Z_Param_L2,Z_Param_R2);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function SetDualSenseTriggerEffect

// Begin Class USIK_InputLibrary Function SetLEDColor
struct Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics
{
	struct SIK_InputLibrary_eventSetLEDColor_Parms
	{
		FSIK_InputHandle InputHandle;
		FLinearColor Color;
		TEnumAsByte<ESIK_SteamControllerLEDFlag> LEDFlag;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Set the controller LED color on supported controllers.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Set the controller LED color on supported controllers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LEDFlag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetLEDColor_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetLEDColor_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_LEDFlag = { "LEDFlag", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventSetLEDColor_Parms, LEDFlag), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerLEDFlag, METADATA_PARAMS(0, nullptr) }; // 484426383
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_Color,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::NewProp_LEDFlag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "SetLEDColor", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::SIK_InputLibrary_eventSetLEDColor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::SIK_InputLibrary_eventSetLEDColor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execSetLEDColor)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FLinearColor,Z_Param_Color);
	P_GET_PROPERTY(FByteProperty,Z_Param_LEDFlag);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::SetLEDColor(Z_Param_InputHandle,Z_Param_Color,ESIK_SteamControllerLEDFlag(Z_Param_LEDFlag));
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function SetLEDColor

// Begin Class USIK_InputLibrary Function ShowBindingPanel
struct Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics
{
	struct SIK_InputLibrary_eventShowBindingPanel_Parms
	{
		FSIK_InputHandle InputHandle;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Invokes the Steam overlay and brings up the binding screen.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Invokes the Steam overlay and brings up the binding screen." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventShowBindingPanel_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
void Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InputLibrary_eventShowBindingPanel_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InputLibrary_eventShowBindingPanel_Parms), &Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "ShowBindingPanel", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::SIK_InputLibrary_eventShowBindingPanel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::SIK_InputLibrary_eventShowBindingPanel_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execShowBindingPanel)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InputLibrary::ShowBindingPanel(Z_Param_InputHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function ShowBindingPanel

// Begin Class USIK_InputLibrary Function Shutdown
struct Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics
{
	struct SIK_InputLibrary_eventShutdown_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Must be called when ending use of the ISteamInput interface.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Must be called when ending use of the ISteamInput interface." },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_InputLibrary_eventShutdown_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_InputLibrary_eventShutdown_Parms), &Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "Shutdown", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::SIK_InputLibrary_eventShutdown_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::SIK_InputLibrary_eventShutdown_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_Shutdown()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_Shutdown_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execShutdown)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_InputLibrary::Shutdown();
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function Shutdown

// Begin Class USIK_InputLibrary Function StopAnalogActionMomentum
struct Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics
{
	struct SIK_InputLibrary_eventStopAnalogActionMomentum_Parms
	{
		FSIK_InputHandle InputHandle;
		FSIK_InputAnalogActionHandle AnalogActionHandle;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Stops the momentum of an analog action (where applicable, i.e. a touchpad w/ virtual trackball settings).\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Stops the momentum of an analog action (where applicable, i.e. a touchpad w/ virtual trackball settings)." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AnalogActionHandle;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventStopAnalogActionMomentum_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::NewProp_AnalogActionHandle = { "AnalogActionHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventStopAnalogActionMomentum_Parms, AnalogActionHandle), Z_Construct_UScriptStruct_FSIK_InputAnalogActionHandle, METADATA_PARAMS(0, nullptr) }; // 2505109589
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::NewProp_AnalogActionHandle,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "StopAnalogActionMomentum", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::SIK_InputLibrary_eventStopAnalogActionMomentum_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::SIK_InputLibrary_eventStopAnalogActionMomentum_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execStopAnalogActionMomentum)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_STRUCT(FSIK_InputAnalogActionHandle,Z_Param_AnalogActionHandle);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::StopAnalogActionMomentum(Z_Param_InputHandle,Z_Param_AnalogActionHandle);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function StopAnalogActionMomentum

// Begin Class USIK_InputLibrary Function TranslateActionOrigin
struct Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics
{
	struct SIK_InputLibrary_eventTranslateActionOrigin_Parms
	{
		TEnumAsByte<ESIK_SteamInputType> eDestinationInputType;
		TEnumAsByte<ESIK_InputActionOrigin> eSourceActionOrigin;
		TEnumAsByte<ESIK_InputActionOrigin> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Get the equivalent origin for a given controller type or the closest controller type that existed in the SDK you built into your game if eDestinationInputType is k_ESteamInputType_Unknown. This action origin can be used in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Get the equivalent origin for a given controller type or the closest controller type that existed in the SDK you built into your game if eDestinationInputType is k_ESteamInputType_Unknown. This action origin can be used in your glyph look up table or passed into GetGlyphForActionOrigin or GetStringForActionOrigin" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_eDestinationInputType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_eSourceActionOrigin;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_eDestinationInputType = { "eDestinationInputType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTranslateActionOrigin_Parms, eDestinationInputType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamInputType, METADATA_PARAMS(0, nullptr) }; // 1223027516
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_eSourceActionOrigin = { "eSourceActionOrigin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTranslateActionOrigin_Parms, eSourceActionOrigin), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTranslateActionOrigin_Parms, ReturnValue), Z_Construct_UEnum_SteamIntegrationKit_ESIK_InputActionOrigin, METADATA_PARAMS(0, nullptr) }; // 4221617097
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_eDestinationInputType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_eSourceActionOrigin,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "TranslateActionOrigin", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::SIK_InputLibrary_eventTranslateActionOrigin_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::SIK_InputLibrary_eventTranslateActionOrigin_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execTranslateActionOrigin)
{
	P_GET_PROPERTY(FByteProperty,Z_Param_eDestinationInputType);
	P_GET_PROPERTY(FByteProperty,Z_Param_eSourceActionOrigin);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TEnumAsByte<ESIK_InputActionOrigin>*)Z_Param__Result=USIK_InputLibrary::TranslateActionOrigin(ESIK_SteamInputType(Z_Param_eDestinationInputType),ESIK_InputActionOrigin(Z_Param_eSourceActionOrigin));
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function TranslateActionOrigin

// Begin Class USIK_InputLibrary Function TriggerHapticPulse
struct Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics
{
	struct SIK_InputLibrary_eventTriggerHapticPulse_Parms
	{
		FSIK_InputHandle InputHandle;
		TEnumAsByte<ESIK_SteamControllerPad> TargetPad;
		uint8 DurationMicroSec;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Triggers a (low-level) haptic pulse on supported controllers.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Triggers a (low-level) haptic pulse on supported controllers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerHapticPulse_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad, METADATA_PARAMS(0, nullptr) }; // 2624816522
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::NewProp_DurationMicroSec,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "TriggerHapticPulse", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::SIK_InputLibrary_eventTriggerHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::SIK_InputLibrary_eventTriggerHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execTriggerHapticPulse)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_TargetPad);
	P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::TriggerHapticPulse(Z_Param_InputHandle,ESIK_SteamControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function TriggerHapticPulse

// Begin Class USIK_InputLibrary Function TriggerRepeatedHapticPulse
struct Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics
{
	struct SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms
	{
		FSIK_InputHandle InputHandle;
		TEnumAsByte<ESIK_SteamControllerPad> TargetPad;
		uint8 DurationMicroSec;
		uint8 OffMicroSec;
		uint8 Repeat;
		uint8 Flags;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Triggers a repeated haptic pulse on supported controllers.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Triggers a repeated haptic pulse on supported controllers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_TargetPad;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DurationMicroSec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_OffMicroSec;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Repeat;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Flags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad = { "TargetPad", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, TargetPad), Z_Construct_UEnum_SteamIntegrationKit_ESIK_SteamControllerPad, METADATA_PARAMS(0, nullptr) }; // 2624816522
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec = { "DurationMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, DurationMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec = { "OffMicroSec", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, OffMicroSec), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat = { "Repeat", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, Repeat), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_Flags = { "Flags", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms, Flags), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_TargetPad,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_DurationMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_OffMicroSec,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_Repeat,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::NewProp_Flags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "TriggerRepeatedHapticPulse", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::SIK_InputLibrary_eventTriggerRepeatedHapticPulse_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execTriggerRepeatedHapticPulse)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_TargetPad);
	P_GET_PROPERTY(FByteProperty,Z_Param_DurationMicroSec);
	P_GET_PROPERTY(FByteProperty,Z_Param_OffMicroSec);
	P_GET_PROPERTY(FByteProperty,Z_Param_Repeat);
	P_GET_PROPERTY(FByteProperty,Z_Param_Flags);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::TriggerRepeatedHapticPulse(Z_Param_InputHandle,ESIK_SteamControllerPad(Z_Param_TargetPad),Z_Param_DurationMicroSec,Z_Param_OffMicroSec,Z_Param_Repeat,Z_Param_Flags);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function TriggerRepeatedHapticPulse

// Begin Class USIK_InputLibrary Function TriggerVibration
struct Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics
{
	struct SIK_InputLibrary_eventTriggerVibration_Parms
	{
		FSIK_InputHandle InputHandle;
		uint8 LeftSpeed;
		uint8 RightSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Trigger a vibration event on supported controllers.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibration_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibration_Parms, LeftSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibration_Parms, RightSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_LeftSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::NewProp_RightSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "TriggerVibration", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::SIK_InputLibrary_eventTriggerVibration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::SIK_InputLibrary_eventTriggerVibration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execTriggerVibration)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_LeftSpeed);
	P_GET_PROPERTY(FByteProperty,Z_Param_RightSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::TriggerVibration(Z_Param_InputHandle,Z_Param_LeftSpeed,Z_Param_RightSpeed);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function TriggerVibration

// Begin Class USIK_InputLibrary Function TriggerVibrationExtended
struct Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics
{
	struct SIK_InputLibrary_eventTriggerVibrationExtended_Parms
	{
		FSIK_InputHandle InputHandle;
		uint8 LeftSpeed;
		uint8 RightSpeed;
		uint8 LeftTriggerSpeed;
		uint8 RightTriggerSpeed;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Input" },
		{ "Comment", "//Trigger a vibration event on supported controllers, including Xbox Impulse Trigger motor values.\n" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ToolTip", "Trigger a vibration event on supported controllers, including Xbox Impulse Trigger motor values." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InputHandle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LeftTriggerSpeed;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RightTriggerSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_InputHandle = { "InputHandle", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibrationExtended_Parms, InputHandle), Z_Construct_UScriptStruct_FSIK_InputHandle, METADATA_PARAMS(0, nullptr) }; // 392983846
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_LeftSpeed = { "LeftSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibrationExtended_Parms, LeftSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibrationExtended_Parms, RightSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_LeftTriggerSpeed = { "LeftTriggerSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibrationExtended_Parms, LeftTriggerSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_RightTriggerSpeed = { "RightTriggerSpeed", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_InputLibrary_eventTriggerVibrationExtended_Parms, RightTriggerSpeed), nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_InputHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_LeftSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_RightSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_LeftTriggerSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::NewProp_RightTriggerSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_InputLibrary, nullptr, "TriggerVibrationExtended", nullptr, nullptr, Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::SIK_InputLibrary_eventTriggerVibrationExtended_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::SIK_InputLibrary_eventTriggerVibrationExtended_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_InputLibrary::execTriggerVibrationExtended)
{
	P_GET_STRUCT(FSIK_InputHandle,Z_Param_InputHandle);
	P_GET_PROPERTY(FByteProperty,Z_Param_LeftSpeed);
	P_GET_PROPERTY(FByteProperty,Z_Param_RightSpeed);
	P_GET_PROPERTY(FByteProperty,Z_Param_LeftTriggerSpeed);
	P_GET_PROPERTY(FByteProperty,Z_Param_RightTriggerSpeed);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_InputLibrary::TriggerVibrationExtended(Z_Param_InputHandle,Z_Param_LeftSpeed,Z_Param_RightSpeed,Z_Param_LeftTriggerSpeed,Z_Param_RightTriggerSpeed);
	P_NATIVE_END;
}
// End Class USIK_InputLibrary Function TriggerVibrationExtended

// Begin Class USIK_InputLibrary
void USIK_InputLibrary::StaticRegisterNativesUSIK_InputLibrary()
{
	UClass* Class = USIK_InputLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ActivateActionSet", &USIK_InputLibrary::execActivateActionSet },
		{ "ActivateActionSetLayer", &USIK_InputLibrary::execActivateActionSetLayer },
		{ "DeactivateActionSetLayer", &USIK_InputLibrary::execDeactivateActionSetLayer },
		{ "DeactivateAllActionSetLayers", &USIK_InputLibrary::execDeactivateAllActionSetLayers },
		{ "GetActionOriginFromXboxOrigin", &USIK_InputLibrary::execGetActionOriginFromXboxOrigin },
		{ "GetActionSetHandle", &USIK_InputLibrary::execGetActionSetHandle },
		{ "GetActiveActionSetLayers", &USIK_InputLibrary::execGetActiveActionSetLayers },
		{ "GetAnalogActionData", &USIK_InputLibrary::execGetAnalogActionData },
		{ "GetAnalogActionHandle", &USIK_InputLibrary::execGetAnalogActionHandle },
		{ "GetAnalogActionOrigins", &USIK_InputLibrary::execGetAnalogActionOrigins },
		{ "GetConnectedControllers", &USIK_InputLibrary::execGetConnectedControllers },
		{ "GetControllerForGamepadIndex", &USIK_InputLibrary::execGetControllerForGamepadIndex },
		{ "GetCurrentActionSet", &USIK_InputLibrary::execGetCurrentActionSet },
		{ "GetDeviceBindingRevision", &USIK_InputLibrary::execGetDeviceBindingRevision },
		{ "GetDigitalActionData", &USIK_InputLibrary::execGetDigitalActionData },
		{ "GetDigitalActionHandle", &USIK_InputLibrary::execGetDigitalActionHandle },
		{ "GetDigitalActionOrigins", &USIK_InputLibrary::execGetDigitalActionOrigins },
		{ "GetGamepadIndexForController", &USIK_InputLibrary::execGetGamepadIndexForController },
		{ "GetGlyphForActionOrigin", &USIK_InputLibrary::execGetGlyphForActionOrigin },
		{ "GetInputTypeForHandle", &USIK_InputLibrary::execGetInputTypeForHandle },
		{ "GetMotionData", &USIK_InputLibrary::execGetMotionData },
		{ "GetRemotePlaySessionID", &USIK_InputLibrary::execGetRemotePlaySessionID },
		{ "GetStringForActionOrigin", &USIK_InputLibrary::execGetStringForActionOrigin },
		{ "Init", &USIK_InputLibrary::execInit },
		{ "RunFrame", &USIK_InputLibrary::execRunFrame },
		{ "SetDualSenseTriggerEffect", &USIK_InputLibrary::execSetDualSenseTriggerEffect },
		{ "SetLEDColor", &USIK_InputLibrary::execSetLEDColor },
		{ "ShowBindingPanel", &USIK_InputLibrary::execShowBindingPanel },
		{ "Shutdown", &USIK_InputLibrary::execShutdown },
		{ "StopAnalogActionMomentum", &USIK_InputLibrary::execStopAnalogActionMomentum },
		{ "TranslateActionOrigin", &USIK_InputLibrary::execTranslateActionOrigin },
		{ "TriggerHapticPulse", &USIK_InputLibrary::execTriggerHapticPulse },
		{ "TriggerRepeatedHapticPulse", &USIK_InputLibrary::execTriggerRepeatedHapticPulse },
		{ "TriggerVibration", &USIK_InputLibrary::execTriggerVibration },
		{ "TriggerVibrationExtended", &USIK_InputLibrary::execTriggerVibrationExtended },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_InputLibrary);
UClass* Z_Construct_UClass_USIK_InputLibrary_NoRegister()
{
	return USIK_InputLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_InputLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Input/SIK_InputLibrary.h" },
		{ "ModuleRelativePath", "Functions/Input/SIK_InputLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSet, "ActivateActionSet" }, // 4072336053
		{ &Z_Construct_UFunction_USIK_InputLibrary_ActivateActionSetLayer, "ActivateActionSetLayer" }, // 2184611378
		{ &Z_Construct_UFunction_USIK_InputLibrary_DeactivateActionSetLayer, "DeactivateActionSetLayer" }, // 118753739
		{ &Z_Construct_UFunction_USIK_InputLibrary_DeactivateAllActionSetLayers, "DeactivateAllActionSetLayers" }, // 2375882683
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetActionOriginFromXboxOrigin, "GetActionOriginFromXboxOrigin" }, // 309429502
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetActionSetHandle, "GetActionSetHandle" }, // 1836240879
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetActiveActionSetLayers, "GetActiveActionSetLayers" }, // 3142522917
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionData, "GetAnalogActionData" }, // 2834530629
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionHandle, "GetAnalogActionHandle" }, // 971462258
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetAnalogActionOrigins, "GetAnalogActionOrigins" }, // 780671576
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetConnectedControllers, "GetConnectedControllers" }, // 4144250729
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetControllerForGamepadIndex, "GetControllerForGamepadIndex" }, // 1377390063
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetCurrentActionSet, "GetCurrentActionSet" }, // 1123784236
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetDeviceBindingRevision, "GetDeviceBindingRevision" }, // 1393251903
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionData, "GetDigitalActionData" }, // 1322881953
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionHandle, "GetDigitalActionHandle" }, // 2186551352
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetDigitalActionOrigins, "GetDigitalActionOrigins" }, // 100329064
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetGamepadIndexForController, "GetGamepadIndexForController" }, // 2185291552
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetGlyphForActionOrigin, "GetGlyphForActionOrigin" }, // 2353993298
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetInputTypeForHandle, "GetInputTypeForHandle" }, // 2343225542
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetMotionData, "GetMotionData" }, // 2595090240
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetRemotePlaySessionID, "GetRemotePlaySessionID" }, // 3856470254
		{ &Z_Construct_UFunction_USIK_InputLibrary_GetStringForActionOrigin, "GetStringForActionOrigin" }, // 2286486067
		{ &Z_Construct_UFunction_USIK_InputLibrary_Init, "Init" }, // 2353947062
		{ &Z_Construct_UFunction_USIK_InputLibrary_RunFrame, "RunFrame" }, // 501350142
		{ &Z_Construct_UFunction_USIK_InputLibrary_SetDualSenseTriggerEffect, "SetDualSenseTriggerEffect" }, // 1812824731
		{ &Z_Construct_UFunction_USIK_InputLibrary_SetLEDColor, "SetLEDColor" }, // 2528397588
		{ &Z_Construct_UFunction_USIK_InputLibrary_ShowBindingPanel, "ShowBindingPanel" }, // 1115612673
		{ &Z_Construct_UFunction_USIK_InputLibrary_Shutdown, "Shutdown" }, // 243119249
		{ &Z_Construct_UFunction_USIK_InputLibrary_StopAnalogActionMomentum, "StopAnalogActionMomentum" }, // 2681618424
		{ &Z_Construct_UFunction_USIK_InputLibrary_TranslateActionOrigin, "TranslateActionOrigin" }, // 1437845601
		{ &Z_Construct_UFunction_USIK_InputLibrary_TriggerHapticPulse, "TriggerHapticPulse" }, // 2688482489
		{ &Z_Construct_UFunction_USIK_InputLibrary_TriggerRepeatedHapticPulse, "TriggerRepeatedHapticPulse" }, // 3918483439
		{ &Z_Construct_UFunction_USIK_InputLibrary_TriggerVibration, "TriggerVibration" }, // 89299941
		{ &Z_Construct_UFunction_USIK_InputLibrary_TriggerVibrationExtended, "TriggerVibrationExtended" }, // 1899619141
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_InputLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_InputLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InputLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_InputLibrary_Statics::ClassParams = {
	&USIK_InputLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_InputLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_InputLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_InputLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_InputLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_InputLibrary.OuterSingleton, Z_Construct_UClass_USIK_InputLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_InputLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_InputLibrary>()
{
	return USIK_InputLibrary::StaticClass();
}
USIK_InputLibrary::USIK_InputLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_InputLibrary);
USIK_InputLibrary::~USIK_InputLibrary() {}
// End Class USIK_InputLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_InputLibrary, USIK_InputLibrary::StaticClass, TEXT("USIK_InputLibrary"), &Z_Registration_Info_UClass_USIK_InputLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_InputLibrary), 4131480589U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_3722929802(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Input_SIK_InputLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
