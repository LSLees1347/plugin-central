// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/GameNotifications/SIK_CreateSession.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_CreateSession() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateSession();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_CreateSession_NoRegister();
STEAMWEB_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateSessionOptional();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin ScriptStruct FSIK_CreateSessionOptional
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional;
class UScriptStruct* FSIK_CreateSessionOptional::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSIK_CreateSessionOptional, (UObject*)Z_Construct_UPackage__Script_SteamWeb(), TEXT("SIK_CreateSessionOptional"));
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.OuterSingleton;
}
template<> STEAMWEB_API UScriptStruct* StaticStruct<FSIK_CreateSessionOptional>()
{
	return FSIK_CreateSessionOptional::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_CreateSession.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "Category", "Steam Integration Kit|Web|GameNotifications" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_CreateSession.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSIK_CreateSessionOptional>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSIK_CreateSessionOptional, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::NewProp_SteamId,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
	nullptr,
	&NewStructOps,
	"SIK_CreateSessionOptional",
	Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::PropPointers),
	sizeof(FSIK_CreateSessionOptional),
	alignof(FSIK_CreateSessionOptional),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSIK_CreateSessionOptional()
{
	if (!Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.InnerSingleton, Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional.InnerSingleton;
}
// End ScriptStruct FSIK_CreateSessionOptional

// Begin Class USIK_CreateSession Function CreateSession
struct Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics
{
	struct SIK_CreateSession_eventCreateSession_Parms
	{
		FString Key;
		int32 AppId;
		int64 Context;
		FString Title;
		FString Users;
		FSIK_CreateSessionOptional Optional;
		USIK_CreateSession* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|GameNotifications" },
		{ "Comment", "//Creates a brand new async session with the players specified in the request.\n" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_CreateSession.h" },
		{ "ToolTip", "Creates a brand new async session with the players specified in the request." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Title_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Users_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_Context;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Title;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Users;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Optional;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, Context), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Title = { "Title", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, Title), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Title_MetaData), NewProp_Title_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Users = { "Users", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, Users), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Users_MetaData), NewProp_Users_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Optional = { "Optional", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, Optional), Z_Construct_UScriptStruct_FSIK_CreateSessionOptional, METADATA_PARAMS(0, nullptr) }; // 3703256884
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_CreateSession_eventCreateSession_Parms, ReturnValue), Z_Construct_UClass_USIK_CreateSession_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Title,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Users,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_Optional,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_CreateSession, nullptr, "CreateSession", nullptr, nullptr, Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::SIK_CreateSession_eventCreateSession_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::SIK_CreateSession_eventCreateSession_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_CreateSession_CreateSession()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_CreateSession_CreateSession_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_CreateSession::execCreateSession)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_Context);
	P_GET_PROPERTY(FStrProperty,Z_Param_Title);
	P_GET_PROPERTY(FStrProperty,Z_Param_Users);
	P_GET_STRUCT(FSIK_CreateSessionOptional,Z_Param_Optional);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_CreateSession**)Z_Param__Result=USIK_CreateSession::CreateSession(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_Context,Z_Param_Title,Z_Param_Users,Z_Param_Optional);
	P_NATIVE_END;
}
// End Class USIK_CreateSession Function CreateSession

// Begin Class USIK_CreateSession
void USIK_CreateSession::StaticRegisterNativesUSIK_CreateSession()
{
	UClass* Class = USIK_CreateSession::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateSession", &USIK_CreateSession::execCreateSession },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_CreateSession);
UClass* Z_Construct_UClass_USIK_CreateSession_NoRegister()
{
	return USIK_CreateSession::StaticClass();
}
struct Z_Construct_UClass_USIK_CreateSession_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameNotifications/SIK_CreateSession.h" },
		{ "ModuleRelativePath", "Functions/GameNotifications/SIK_CreateSession.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_CreateSession_CreateSession, "CreateSession" }, // 4181028371
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_CreateSession>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_CreateSession_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_CreateSession_Statics::ClassParams = {
	&USIK_CreateSession::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_CreateSession_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_CreateSession_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_CreateSession()
{
	if (!Z_Registration_Info_UClass_USIK_CreateSession.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_CreateSession.OuterSingleton, Z_Construct_UClass_USIK_CreateSession_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_CreateSession.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_CreateSession>()
{
	return USIK_CreateSession::StaticClass();
}
USIK_CreateSession::USIK_CreateSession(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_CreateSession);
USIK_CreateSession::~USIK_CreateSession() {}
// End Class USIK_CreateSession

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSIK_CreateSessionOptional::StaticStruct, Z_Construct_UScriptStruct_FSIK_CreateSessionOptional_Statics::NewStructOps, TEXT("SIK_CreateSessionOptional"), &Z_Registration_Info_UScriptStruct_SIK_CreateSessionOptional, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSIK_CreateSessionOptional), 3703256884U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_CreateSession, USIK_CreateSession::StaticClass, TEXT("USIK_CreateSession"), &Z_Registration_Info_UClass_USIK_CreateSession, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_CreateSession), 3480433690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_1690646601(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_GameNotifications_SIK_CreateSession_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
