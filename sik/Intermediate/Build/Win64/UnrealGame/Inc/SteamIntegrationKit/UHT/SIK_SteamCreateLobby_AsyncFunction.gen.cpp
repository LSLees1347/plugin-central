// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SteamCreateLobby_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FCreateLobbyDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId LobbyID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::NewProp_LobbyID = { "LobbyID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms, LobbyID), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::NewProp_LobbyID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "CreateLobbyDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FCreateLobbyDelegate_DelegateWrapper(const FMulticastScriptDelegate& CreateLobbyDelegate, ESIK_Result Result, FSIK_SteamId LobbyID)
{
	struct _Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_SteamId LobbyID;
	};
	_Script_SteamIntegrationKit_eventCreateLobbyDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.LobbyID=LobbyID;
	CreateLobbyDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FCreateLobbyDelegate

// Begin Class USIK_SteamCreateLobby_AsyncFunction Function CreateLobby
struct Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics
{
	struct SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms
	{
		int32 MaxMembers;
		TEnumAsByte<ESIK_LobbyType> LobbyType;
		USIK_SteamCreateLobby_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "DisplayName", "Create Lobby" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxMembers;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LobbyType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_MaxMembers = { "MaxMembers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms, MaxMembers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_LobbyType = { "LobbyType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms, LobbyType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_LobbyType, METADATA_PARAMS(0, nullptr) }; // 119690018
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms, ReturnValue), Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_MaxMembers,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_LobbyType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction, nullptr, "CreateLobby", nullptr, nullptr, Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::SIK_SteamCreateLobby_AsyncFunction_eventCreateLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SteamCreateLobby_AsyncFunction::execCreateLobby)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_MaxMembers);
	P_GET_PROPERTY(FByteProperty,Z_Param_LobbyType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SteamCreateLobby_AsyncFunction**)Z_Param__Result=USIK_SteamCreateLobby_AsyncFunction::CreateLobby(Z_Param_MaxMembers,ESIK_LobbyType(Z_Param_LobbyType));
	P_NATIVE_END;
}
// End Class USIK_SteamCreateLobby_AsyncFunction Function CreateLobby

// Begin Class USIK_SteamCreateLobby_AsyncFunction
void USIK_SteamCreateLobby_AsyncFunction::StaticRegisterNativesUSIK_SteamCreateLobby_AsyncFunction()
{
	UClass* Class = USIK_SteamCreateLobby_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CreateLobby", &USIK_SteamCreateLobby_AsyncFunction::execCreateLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SteamCreateLobby_AsyncFunction);
UClass* Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_NoRegister()
{
	return USIK_SteamCreateLobby_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_SteamCreateLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SteamCreateLobby_AsyncFunction_CreateLobby, "CreateLobby" }, // 3773725822
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SteamCreateLobby_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SteamCreateLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1293883856
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SteamCreateLobby_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_CreateLobbyDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1293883856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::ClassParams = {
	&USIK_SteamCreateLobby_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_SteamCreateLobby_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SteamCreateLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SteamCreateLobby_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_SteamCreateLobby_AsyncFunction>()
{
	return USIK_SteamCreateLobby_AsyncFunction::StaticClass();
}
USIK_SteamCreateLobby_AsyncFunction::USIK_SteamCreateLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SteamCreateLobby_AsyncFunction);
USIK_SteamCreateLobby_AsyncFunction::~USIK_SteamCreateLobby_AsyncFunction() {}
// End Class USIK_SteamCreateLobby_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_SteamCreateLobby_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SteamCreateLobby_AsyncFunction, USIK_SteamCreateLobby_AsyncFunction::StaticClass, TEXT("USIK_SteamCreateLobby_AsyncFunction"), &Z_Registration_Info_UClass_USIK_SteamCreateLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SteamCreateLobby_AsyncFunction), 409432159U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_SteamCreateLobby_AsyncFunction_h_2087292244(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_SteamCreateLobby_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_SteamCreateLobby_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
