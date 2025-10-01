// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetNumberOfCurrentPlayers_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnNumberOfCurrentPlayersReceived
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms
	{
		int32 NumberOfCurrentPlayers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfCurrentPlayers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::NewProp_NumberOfCurrentPlayers = { "NumberOfCurrentPlayers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms, NumberOfCurrentPlayers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::NewProp_NumberOfCurrentPlayers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnNumberOfCurrentPlayersReceived__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNumberOfCurrentPlayersReceived_DelegateWrapper(const FMulticastScriptDelegate& OnNumberOfCurrentPlayersReceived, int32 NumberOfCurrentPlayers)
{
	struct _Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms
	{
		int32 NumberOfCurrentPlayers;
	};
	_Script_SteamIntegrationKit_eventOnNumberOfCurrentPlayersReceived_Parms Parms;
	Parms.NumberOfCurrentPlayers=NumberOfCurrentPlayers;
	OnNumberOfCurrentPlayersReceived.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNumberOfCurrentPlayersReceived

// Begin Class USIK_GetNumberOfCurrentPlayers_AsyncFunction Function GetNumberOfCurrentPlayers
struct Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics
{
	struct SIK_GetNumberOfCurrentPlayers_AsyncFunction_eventGetNumberOfCurrentPlayers_Parms
	{
		USIK_GetNumberOfCurrentPlayers_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Get Number Of Current Players" },
		{ "Keywords", "GetNumberOfCurrentPlayers" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetNumberOfCurrentPlayers_AsyncFunction_eventGetNumberOfCurrentPlayers_Parms, ReturnValue), Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction, nullptr, "GetNumberOfCurrentPlayers", nullptr, nullptr, Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::SIK_GetNumberOfCurrentPlayers_AsyncFunction_eventGetNumberOfCurrentPlayers_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::SIK_GetNumberOfCurrentPlayers_AsyncFunction_eventGetNumberOfCurrentPlayers_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetNumberOfCurrentPlayers_AsyncFunction::execGetNumberOfCurrentPlayers)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetNumberOfCurrentPlayers_AsyncFunction**)Z_Param__Result=USIK_GetNumberOfCurrentPlayers_AsyncFunction::GetNumberOfCurrentPlayers();
	P_NATIVE_END;
}
// End Class USIK_GetNumberOfCurrentPlayers_AsyncFunction Function GetNumberOfCurrentPlayers

// Begin Class USIK_GetNumberOfCurrentPlayers_AsyncFunction
void USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticRegisterNativesUSIK_GetNumberOfCurrentPlayers_AsyncFunction()
{
	UClass* Class = USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetNumberOfCurrentPlayers", &USIK_GetNumberOfCurrentPlayers_AsyncFunction::execGetNumberOfCurrentPlayers },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetNumberOfCurrentPlayers_AsyncFunction);
UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_NoRegister()
{
	return USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_GetNumberOfCurrentPlayers_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetNumberOfCurrentPlayers_AsyncFunction_GetNumberOfCurrentPlayers, "GetNumberOfCurrentPlayers" }, // 4244875332
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetNumberOfCurrentPlayers_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetNumberOfCurrentPlayers_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2375437195
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetNumberOfCurrentPlayers_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnNumberOfCurrentPlayersReceived__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 2375437195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::ClassParams = {
	&USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_GetNumberOfCurrentPlayers_AsyncFunction>()
{
	return USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticClass();
}
USIK_GetNumberOfCurrentPlayers_AsyncFunction::USIK_GetNumberOfCurrentPlayers_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetNumberOfCurrentPlayers_AsyncFunction);
USIK_GetNumberOfCurrentPlayers_AsyncFunction::~USIK_GetNumberOfCurrentPlayers_AsyncFunction() {}
// End Class USIK_GetNumberOfCurrentPlayers_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction, USIK_GetNumberOfCurrentPlayers_AsyncFunction::StaticClass, TEXT("USIK_GetNumberOfCurrentPlayers_AsyncFunction"), &Z_Registration_Info_UClass_USIK_GetNumberOfCurrentPlayers_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetNumberOfCurrentPlayers_AsyncFunction), 2667167542U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_3763215756(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_GetNumberOfCurrentPlayers_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
