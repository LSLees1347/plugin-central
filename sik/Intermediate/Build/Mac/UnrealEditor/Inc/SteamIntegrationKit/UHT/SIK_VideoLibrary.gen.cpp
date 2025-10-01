// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Video/SIK_VideoLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_VideoLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_VideoLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_VideoLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_VideoLibrary Function GetOPFSettings
struct Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics
{
	struct SIK_VideoLibrary_eventGetOPFSettings_Parms
	{
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Video" },
		{ "DisplayName", "Get OPF Settings" },
		{ "Keywords", "GetOPFSettings" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_VideoLibrary_eventGetOPFSettings_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_VideoLibrary, nullptr, "GetOPFSettings", nullptr, nullptr, Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::SIK_VideoLibrary_eventGetOPFSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::SIK_VideoLibrary_eventGetOPFSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_VideoLibrary::execGetOPFSettings)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_VideoLibrary::GetOPFSettings(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_VideoLibrary Function GetOPFSettings

// Begin Class USIK_VideoLibrary Function GetOPFStringForApp
struct Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics
{
	struct SIK_VideoLibrary_eventGetOPFStringForApp_Parms
	{
		FSIK_AppId AppID;
		FString OutString;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Video" },
		{ "DisplayName", "Get OPF String For App" },
		{ "Keywords", "GetOPFStringForApp" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FStrPropertyParams NewProp_OutString;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_VideoLibrary_eventGetOPFStringForApp_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_OutString = { "OutString", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_VideoLibrary_eventGetOPFStringForApp_Parms, OutString), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_VideoLibrary_eventGetOPFStringForApp_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_VideoLibrary_eventGetOPFStringForApp_Parms), &Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_AppID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_OutString,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_VideoLibrary, nullptr, "GetOPFStringForApp", nullptr, nullptr, Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::SIK_VideoLibrary_eventGetOPFStringForApp_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::SIK_VideoLibrary_eventGetOPFStringForApp_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_VideoLibrary::execGetOPFStringForApp)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_OutString);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_VideoLibrary::GetOPFStringForApp(Z_Param_AppID,Z_Param_Out_OutString);
	P_NATIVE_END;
}
// End Class USIK_VideoLibrary Function GetOPFStringForApp

// Begin Class USIK_VideoLibrary Function GetVideoURL
struct Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics
{
	struct SIK_VideoLibrary_eventGetVideoURL_Parms
	{
		FSIK_AppId AppID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Video" },
		{ "DisplayName", "Get Video URL" },
		{ "Keywords", "GetVideoURL" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::NewProp_AppID = { "AppID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_VideoLibrary_eventGetVideoURL_Parms, AppID), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::NewProp_AppID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_VideoLibrary, nullptr, "GetVideoURL", nullptr, nullptr, Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::SIK_VideoLibrary_eventGetVideoURL_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::SIK_VideoLibrary_eventGetVideoURL_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_VideoLibrary::execGetVideoURL)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppID);
	P_FINISH;
	P_NATIVE_BEGIN;
	USIK_VideoLibrary::GetVideoURL(Z_Param_AppID);
	P_NATIVE_END;
}
// End Class USIK_VideoLibrary Function GetVideoURL

// Begin Class USIK_VideoLibrary Function IsBroadcasting
struct Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics
{
	struct SIK_VideoLibrary_eventIsBroadcasting_Parms
	{
		int32 OutNumViewers;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Video" },
		{ "DisplayName", "Is Broadcasting" },
		{ "Keywords", "IsBroadcasting" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_OutNumViewers;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_OutNumViewers = { "OutNumViewers", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_VideoLibrary_eventIsBroadcasting_Parms, OutNumViewers), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_VideoLibrary_eventIsBroadcasting_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_VideoLibrary_eventIsBroadcasting_Parms), &Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_OutNumViewers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_VideoLibrary, nullptr, "IsBroadcasting", nullptr, nullptr, Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::SIK_VideoLibrary_eventIsBroadcasting_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04442401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::SIK_VideoLibrary_eventIsBroadcasting_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_VideoLibrary::execIsBroadcasting)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_OutNumViewers);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_VideoLibrary::IsBroadcasting(Z_Param_Out_OutNumViewers);
	P_NATIVE_END;
}
// End Class USIK_VideoLibrary Function IsBroadcasting

// Begin Class USIK_VideoLibrary
void USIK_VideoLibrary::StaticRegisterNativesUSIK_VideoLibrary()
{
	UClass* Class = USIK_VideoLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetOPFSettings", &USIK_VideoLibrary::execGetOPFSettings },
		{ "GetOPFStringForApp", &USIK_VideoLibrary::execGetOPFStringForApp },
		{ "GetVideoURL", &USIK_VideoLibrary::execGetVideoURL },
		{ "IsBroadcasting", &USIK_VideoLibrary::execIsBroadcasting },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_VideoLibrary);
UClass* Z_Construct_UClass_USIK_VideoLibrary_NoRegister()
{
	return USIK_VideoLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_VideoLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Video/SIK_VideoLibrary.h" },
		{ "ModuleRelativePath", "Functions/Video/SIK_VideoLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_VideoLibrary_GetOPFSettings, "GetOPFSettings" }, // 3569636158
		{ &Z_Construct_UFunction_USIK_VideoLibrary_GetOPFStringForApp, "GetOPFStringForApp" }, // 4242801631
		{ &Z_Construct_UFunction_USIK_VideoLibrary_GetVideoURL, "GetVideoURL" }, // 1544691274
		{ &Z_Construct_UFunction_USIK_VideoLibrary_IsBroadcasting, "IsBroadcasting" }, // 4078403346
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_VideoLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_VideoLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_VideoLibrary_Statics::ClassParams = {
	&USIK_VideoLibrary::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_VideoLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_VideoLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_VideoLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_VideoLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_VideoLibrary.OuterSingleton, Z_Construct_UClass_USIK_VideoLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_VideoLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_VideoLibrary>()
{
	return USIK_VideoLibrary::StaticClass();
}
USIK_VideoLibrary::USIK_VideoLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_VideoLibrary);
USIK_VideoLibrary::~USIK_VideoLibrary() {}
// End Class USIK_VideoLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_VideoLibrary, USIK_VideoLibrary::StaticClass, TEXT("USIK_VideoLibrary"), &Z_Registration_Info_UClass_USIK_VideoLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_VideoLibrary), 2968716338U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoLibrary_h_2893953947(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Video_SIK_VideoLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
