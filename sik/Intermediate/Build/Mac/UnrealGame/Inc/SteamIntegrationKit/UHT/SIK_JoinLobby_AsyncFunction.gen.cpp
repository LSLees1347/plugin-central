// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_JoinLobby_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinLobby_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnJoinLobby
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnJoinLobby_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bLocked;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> ChatRoomEnterResponse;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static void NewProp_bLocked_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLocked;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ChatRoomEnterResponse;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnJoinLobby_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_bLocked_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnJoinLobby_Parms*)Obj)->bLocked = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_bLocked = { "bLocked", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnJoinLobby_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_bLocked_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse = { "ChatRoomEnterResponse", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnJoinLobby_Parms, ChatRoomEnterResponse), Z_Construct_UEnum_SteamIntegrationKit_ESIK_ChatRoomEnterResponse, METADATA_PARAMS(0, nullptr) }; // 3973949582
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_bLocked,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::NewProp_ChatRoomEnterResponse,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnJoinLobby__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnJoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnJoinLobby_DelegateWrapper(const FMulticastScriptDelegate& OnJoinLobby, ESIK_Result Result, bool bLocked, ESIK_ChatRoomEnterResponse ChatRoomEnterResponse)
{
	struct _Script_SteamIntegrationKit_eventOnJoinLobby_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		bool bLocked;
		TEnumAsByte<ESIK_ChatRoomEnterResponse> ChatRoomEnterResponse;
	};
	_Script_SteamIntegrationKit_eventOnJoinLobby_Parms Parms;
	Parms.Result=Result;
	Parms.bLocked=bLocked ? true : false;
	Parms.ChatRoomEnterResponse=ChatRoomEnterResponse;
	OnJoinLobby.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnJoinLobby

// Begin Class USIK_JoinLobby_AsyncFunction Function JoinLobby
struct Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics
{
	struct SIK_JoinLobby_AsyncFunction_eventJoinLobby_Parms
	{
		FSIK_SteamId LobbyId;
		USIK_JoinLobby_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Matchmaking" },
		{ "DisplayName", "Join Lobby" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_LobbyId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::NewProp_LobbyId = { "LobbyId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinLobby_AsyncFunction_eventJoinLobby_Parms, LobbyId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinLobby_AsyncFunction_eventJoinLobby_Parms, ReturnValue), Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::NewProp_LobbyId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_JoinLobby_AsyncFunction, nullptr, "JoinLobby", nullptr, nullptr, Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::SIK_JoinLobby_AsyncFunction_eventJoinLobby_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::SIK_JoinLobby_AsyncFunction_eventJoinLobby_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_JoinLobby_AsyncFunction::execJoinLobby)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_LobbyId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_JoinLobby_AsyncFunction**)Z_Param__Result=USIK_JoinLobby_AsyncFunction::JoinLobby(Z_Param_LobbyId);
	P_NATIVE_END;
}
// End Class USIK_JoinLobby_AsyncFunction Function JoinLobby

// Begin Class USIK_JoinLobby_AsyncFunction
void USIK_JoinLobby_AsyncFunction::StaticRegisterNativesUSIK_JoinLobby_AsyncFunction()
{
	UClass* Class = USIK_JoinLobby_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinLobby", &USIK_JoinLobby_AsyncFunction::execJoinLobby },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_JoinLobby_AsyncFunction);
UClass* Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_NoRegister()
{
	return USIK_JoinLobby_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Matchmaking/SIK_JoinLobby_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_JoinLobby_AsyncFunction_JoinLobby, "JoinLobby" }, // 935171720
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_JoinLobby_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinLobby_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 179462654
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinLobby_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnJoinLobby__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 179462654
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::ClassParams = {
	&USIK_JoinLobby_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_JoinLobby_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_JoinLobby_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_JoinLobby_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_JoinLobby_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_JoinLobby_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_JoinLobby_AsyncFunction>()
{
	return USIK_JoinLobby_AsyncFunction::StaticClass();
}
USIK_JoinLobby_AsyncFunction::USIK_JoinLobby_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_JoinLobby_AsyncFunction);
USIK_JoinLobby_AsyncFunction::~USIK_JoinLobby_AsyncFunction() {}
// End Class USIK_JoinLobby_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_JoinLobby_AsyncFunction, USIK_JoinLobby_AsyncFunction::StaticClass, TEXT("USIK_JoinLobby_AsyncFunction"), &Z_Registration_Info_UClass_USIK_JoinLobby_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_JoinLobby_AsyncFunction), 2895458232U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_2765876918(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Matchmaking_SIK_JoinLobby_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
