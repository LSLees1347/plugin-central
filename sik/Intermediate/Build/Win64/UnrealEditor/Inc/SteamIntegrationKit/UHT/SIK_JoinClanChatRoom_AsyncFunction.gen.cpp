// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_JoinClanChatRoom_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FJoinClanChatRoomDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "JoinClanChatRoomDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FJoinClanChatRoomDelegate_DelegateWrapper(const FMulticastScriptDelegate& JoinClanChatRoomDelegate)
{
	JoinClanChatRoomDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FJoinClanChatRoomDelegate

// Begin Class USIK_JoinClanChatRoom_AsyncFunction Function JoinClanChatRoom
struct Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics
{
	struct SIK_JoinClanChatRoom_AsyncFunction_eventJoinClanChatRoom_Parms
	{
		FSIK_SteamId ClanId;
		USIK_JoinClanChatRoom_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Join Steam Clan Chat Room" },
		{ "Keywords", "JoinClanChatRoom" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::NewProp_ClanId = { "ClanId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinClanChatRoom_AsyncFunction_eventJoinClanChatRoom_Parms, ClanId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_JoinClanChatRoom_AsyncFunction_eventJoinClanChatRoom_Parms, ReturnValue), Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::NewProp_ClanId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction, nullptr, "JoinClanChatRoom", nullptr, nullptr, Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::SIK_JoinClanChatRoom_AsyncFunction_eventJoinClanChatRoom_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::SIK_JoinClanChatRoom_AsyncFunction_eventJoinClanChatRoom_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_JoinClanChatRoom_AsyncFunction::execJoinClanChatRoom)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_ClanId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_JoinClanChatRoom_AsyncFunction**)Z_Param__Result=USIK_JoinClanChatRoom_AsyncFunction::JoinClanChatRoom(Z_Param_ClanId);
	P_NATIVE_END;
}
// End Class USIK_JoinClanChatRoom_AsyncFunction Function JoinClanChatRoom

// Begin Class USIK_JoinClanChatRoom_AsyncFunction
void USIK_JoinClanChatRoom_AsyncFunction::StaticRegisterNativesUSIK_JoinClanChatRoom_AsyncFunction()
{
	UClass* Class = USIK_JoinClanChatRoom_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "JoinClanChatRoom", &USIK_JoinClanChatRoom_AsyncFunction::execJoinClanChatRoom },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_JoinClanChatRoom_AsyncFunction);
UClass* Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_NoRegister()
{
	return USIK_JoinClanChatRoom_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_JoinClanChatRoom_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_JoinClanChatRoom_AsyncFunction_JoinClanChatRoom, "JoinClanChatRoom" }, // 1793738954
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_JoinClanChatRoom_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinClanChatRoom_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3956356504
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_JoinClanChatRoom_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_JoinClanChatRoomDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3956356504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::ClassParams = {
	&USIK_JoinClanChatRoom_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_JoinClanChatRoom_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_JoinClanChatRoom_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_JoinClanChatRoom_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_JoinClanChatRoom_AsyncFunction>()
{
	return USIK_JoinClanChatRoom_AsyncFunction::StaticClass();
}
USIK_JoinClanChatRoom_AsyncFunction::USIK_JoinClanChatRoom_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_JoinClanChatRoom_AsyncFunction);
USIK_JoinClanChatRoom_AsyncFunction::~USIK_JoinClanChatRoom_AsyncFunction() {}
// End Class USIK_JoinClanChatRoom_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_JoinClanChatRoom_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_JoinClanChatRoom_AsyncFunction, USIK_JoinClanChatRoom_AsyncFunction::StaticClass, TEXT("USIK_JoinClanChatRoom_AsyncFunction"), &Z_Registration_Info_UClass_USIK_JoinClanChatRoom_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_JoinClanChatRoom_AsyncFunction), 663000888U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_JoinClanChatRoom_AsyncFunction_h_4217131423(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_JoinClanChatRoom_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_JoinClanChatRoom_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
