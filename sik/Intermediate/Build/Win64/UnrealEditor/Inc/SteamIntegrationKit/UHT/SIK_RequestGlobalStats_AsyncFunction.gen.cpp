// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestGlobalStats_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FSIK_RequestGlobalStatsDel
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_RequestGlobalStatsDel__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_RequestGlobalStatsDel_DelegateWrapper(const FMulticastScriptDelegate& SIK_RequestGlobalStatsDel, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventSIK_RequestGlobalStatsDel_Parms Parms;
	Parms.Result=Result;
	SIK_RequestGlobalStatsDel.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FSIK_RequestGlobalStatsDel

// Begin Class USIK_RequestGlobalStats_AsyncFunction Function RequestGlobalStats
struct Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics
{
	struct SIK_RequestGlobalStats_AsyncFunction_eventRequestGlobalStats_Parms
	{
		int32 HistoryDays;
		USIK_RequestGlobalStats_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User Stats" },
		{ "DisplayName", "Request Steam Global Stats" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_HistoryDays;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::NewProp_HistoryDays = { "HistoryDays", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestGlobalStats_AsyncFunction_eventRequestGlobalStats_Parms, HistoryDays), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestGlobalStats_AsyncFunction_eventRequestGlobalStats_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::NewProp_HistoryDays,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction, nullptr, "RequestGlobalStats", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::SIK_RequestGlobalStats_AsyncFunction_eventRequestGlobalStats_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::SIK_RequestGlobalStats_AsyncFunction_eventRequestGlobalStats_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestGlobalStats_AsyncFunction::execRequestGlobalStats)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_HistoryDays);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestGlobalStats_AsyncFunction**)Z_Param__Result=USIK_RequestGlobalStats_AsyncFunction::RequestGlobalStats(Z_Param_HistoryDays);
	P_NATIVE_END;
}
// End Class USIK_RequestGlobalStats_AsyncFunction Function RequestGlobalStats

// Begin Class USIK_RequestGlobalStats_AsyncFunction
void USIK_RequestGlobalStats_AsyncFunction::StaticRegisterNativesUSIK_RequestGlobalStats_AsyncFunction()
{
	UClass* Class = USIK_RequestGlobalStats_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestGlobalStats", &USIK_RequestGlobalStats_AsyncFunction::execRequestGlobalStats },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestGlobalStats_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_NoRegister()
{
	return USIK_RequestGlobalStats_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UserStats/SIK_RequestGlobalStats_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestGlobalStats_AsyncFunction_RequestGlobalStats, "RequestGlobalStats" }, // 1282625613
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestGlobalStats_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestGlobalStats_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1945955185
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestGlobalStats_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_RequestGlobalStatsDel__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1945955185
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestGlobalStats_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestGlobalStats_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestGlobalStats_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestGlobalStats_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestGlobalStats_AsyncFunction>()
{
	return USIK_RequestGlobalStats_AsyncFunction::StaticClass();
}
USIK_RequestGlobalStats_AsyncFunction::USIK_RequestGlobalStats_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestGlobalStats_AsyncFunction);
USIK_RequestGlobalStats_AsyncFunction::~USIK_RequestGlobalStats_AsyncFunction() {}
// End Class USIK_RequestGlobalStats_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestGlobalStats_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestGlobalStats_AsyncFunction, USIK_RequestGlobalStats_AsyncFunction::StaticClass, TEXT("USIK_RequestGlobalStats_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestGlobalStats_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestGlobalStats_AsyncFunction), 1639439617U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestGlobalStats_AsyncFunction_h_1945699056(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestGlobalStats_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UserStats_SIK_RequestGlobalStats_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
