// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/LobbyMatchmaking/SIK_CreateLobby.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_CreateLobby() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateLobby();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateLobby_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin ScriptStruct FSIK_CreateLobbyOptional
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional;
class UScriptStruct* FSIK_CreateLobbyOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_CreateLobbyOptional"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.OuterSingleton;
}
template<> STEAMWEB_API UScriptStruct* StaticStruct<FSIK_CreateLobbyOptional>()
{
	return FSIK_CreateLobbyOptional::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyName_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputJson_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyMetadata_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyName;
	static const UECodeGen_Private::FStrPropertyParams NewProp_InputJson;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LobbyMetadata;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_CreateLobbyOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_LobbyName = { "LobbyName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CreateLobbyOptional, LobbyName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyName_MetaData), NewProp_LobbyName_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_InputJson = { "InputJson", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CreateLobbyOptional, InputJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputJson_MetaData), NewProp_InputJson_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_LobbyMetadata = { "LobbyMetadata", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CreateLobbyOptional, LobbyMetadata), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyMetadata_MetaData), NewProp_LobbyMetadata_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_LobbyName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_InputJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewProp_LobbyMetadata,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_CreateLobbyOptional",
	Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::PropPointers),
	sizeof(FSIK_CreateLobbyOptional),
	alignof(FSIK_CreateLobbyOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional.InnerSingleton;
}
// End ScriptStruct FSIK_CreateLobbyOptional

// Begin Class USIK_CreateLobby Function CreateLobby
struct Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics
{
	struct SIK_CreateLobby_eventCreateLobby_Parms
	{
		FString Key;
		int32 AppId;
		int32 MaxMembers;
		int32 LobbyType;
		FSIK_CreateLobbyOptional OptionalSettings;
		USIK_CreateLobby* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|LobbyMatchmaking" },
		{ "Comment", "//When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique). This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name. A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used.\n" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
		{ "ToolTip", "When using the CreateLobby WebAPI, you'll probably want to set lobby_type to 4 (k_ELobbyTypePrivateUnique). This lobby type is a private, unique lobby that does not get deleted when emptied, and only one will exist per unique appid/lobby_name. A private unique lobby can only be created by this WebAPI call. But you can also use CreateLobby to generate the more traditional and ephemeral lobbies when no lobby_name is used." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxMembers_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LobbyType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalSettings;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxMembers_MetaData), NewProp_MaxMembers_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, LobbyType), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LobbyType_MetaData), NewProp_LobbyType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_OptionalSettings = { "OptionalSettings", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, OptionalSettings), Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional, METADATA_PARAMS(0, nullptr) }; // 3647649867
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateLobby_eventCreateLobby_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateLobby_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_OptionalSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_CreateLobby, nullptr, "CreateLobby", nullptr, nullptr, Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::SIK_CreateLobby_eventCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::SIK_CreateLobby_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateLobby_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateLobby_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateLobby::execCreateLobby)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MaxMembers);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_LobbyType);
	P_GET_STRUCT(FSIK_CreateLobbyOptional,Z_Param_OptionalSettings);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateLobby**)Z_Param__Result=USIK_CreateLobby::CreateLobby(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_MaxMembers,Z_Param_Out_LobbyType,Z_Param_OptionalSettings);
	P_NATIVE_END;
}
// End Class USIK_CreateLobby Function CreateLobby

// Begin Class USIK_CreateLobby
void USIK_CreateLobby::StaticRegisterNativesUSIK_CreateLobby()
{
	UClass* Class = USIK_CreateLobby::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLobby", &USIK_CreateLobby::execCreateLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_CreateLobby);
UClass* Z_Construct_UClass_USIK_CreateLobby_NoRegister()
{
	return USIK_CreateLobby::StaticClass();
}
struct Z_Construct_UClass_USIK_CreateLobby_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
		{ "ModuleRelativePath", "Functions/LobbyMatchmaking/SIK_CreateLobby.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateLobby_CreateLobby, "CreateLobby" }, // 69264366
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateLobby>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_CreateLobby_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateLobby_Statics::ClassParams = {
	&USIK_CreateLobby::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateLobby_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateLobby_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_CreateLobby()
{
	if (!Z_Registration_Info_UClass_USIK_CreateLobby.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateLobby.OuterSingleton, Z_Construct_UClass_USIK_CreateLobby_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateLobby.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_CreateLobby>()
{
	return USIK_CreateLobby::StaticClass();
}
USIK_CreateLobby::USIK_CreateLobby(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_CreateLobby);
USIK_CreateLobby::~USIK_CreateLobby() {}
// End Class USIK_CreateLobby

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_CreateLobbyOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_CreateLobbyOptional_Statics::NewStructOps, TEXT("SIK_CreateLobbyOptional"), &Z_Registration_Info_UScriptStruct_SIK_CreateLobbyOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_CreateLobbyOptional), 3647649867U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateLobby, USIK_CreateLobby::StaticClass, TEXT("USIK_CreateLobby"), &Z_Registration_Info_UClass_USIK_CreateLobby, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateLobby), 735070158U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_1332154991(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_LobbyMatchmaking_SIK_CreateLobby_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
