// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAppDependencies_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnGetAppDependenciesComplete
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileID;
		TArray<FSIK_AppId> AppIDs;
		int32 NumAppIDs;
		int32 TotalNumAppIDs;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppIDs_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AppIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumAppIDs;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TotalNumAppIDs;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_AppIDs_Inner = { "AppIDs", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_AppIDs = { "AppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms, AppIDs), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_NumAppIDs = { "NumAppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms, NumAppIDs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_TotalNumAppIDs = { "TotalNumAppIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms, TotalNumAppIDs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_AppIDs_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_AppIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_NumAppIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::NewProp_TotalNumAppIDs,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnGetAppDependenciesComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnGetAppDependenciesComplete_DelegateWrapper(const FMulticastScriptDelegate& OnGetAppDependenciesComplete, ESIK_Result Result, FSIK_PublishedFileId PublishedFileID, const TArray<FSIK_AppId>& AppIDs, int32 NumAppIDs, int32 TotalNumAppIDs)
{
	struct _Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		FSIK_PublishedFileId PublishedFileID;
		TArray<FSIK_AppId> AppIDs;
		int32 NumAppIDs;
		int32 TotalNumAppIDs;
	};
	_Script_SteamIntegrationKit_eventOnGetAppDependenciesComplete_Parms Parms;
	Parms.Result=Result;
	Parms.PublishedFileID=PublishedFileID;
	Parms.AppIDs=AppIDs;
	Parms.NumAppIDs=NumAppIDs;
	Parms.TotalNumAppIDs=TotalNumAppIDs;
	OnGetAppDependenciesComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnGetAppDependenciesComplete

// Begin Class USIK_GetAppDependencies_AsyncFunction Function GetAppDependencies
struct Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics
{
	struct SIK_GetAppDependencies_AsyncFunction_eventGetAppDependencies_Parms
	{
		FSIK_PublishedFileId PublishedFileID;
		USIK_GetAppDependencies_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppDependencies_AsyncFunction_eventGetAppDependencies_Parms, PublishedFileID), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppDependencies_AsyncFunction_eventGetAppDependencies_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction, nullptr, "GetAppDependencies", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::SIK_GetAppDependencies_AsyncFunction_eventGetAppDependencies_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::SIK_GetAppDependencies_AsyncFunction_eventGetAppDependencies_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAppDependencies_AsyncFunction::execGetAppDependencies)
{
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAppDependencies_AsyncFunction**)Z_Param__Result=USIK_GetAppDependencies_AsyncFunction::GetAppDependencies(Z_Param_PublishedFileID);
	P_NATIVE_END;
}
// End Class USIK_GetAppDependencies_AsyncFunction Function GetAppDependencies

// Begin Class USIK_GetAppDependencies_AsyncFunction
void USIK_GetAppDependencies_AsyncFunction::StaticRegisterNativesUSIK_GetAppDependencies_AsyncFunction()
{
	UClass* Class = USIK_GetAppDependencies_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppDependencies", &USIK_GetAppDependencies_AsyncFunction::execGetAppDependencies },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAppDependencies_AsyncFunction);
UClass* Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_NoRegister()
{
	return USIK_GetAppDependencies_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_GetAppDependencies_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAppDependencies_AsyncFunction_GetAppDependencies, "GetAppDependencies" }, // 235648078
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAppDependencies_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetAppDependencies_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4263571547
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_GetAppDependencies_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnGetAppDependenciesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 4263571547
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::ClassParams = {
	&USIK_GetAppDependencies_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_GetAppDependencies_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAppDependencies_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAppDependencies_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_GetAppDependencies_AsyncFunction>()
{
	return USIK_GetAppDependencies_AsyncFunction::StaticClass();
}
USIK_GetAppDependencies_AsyncFunction::USIK_GetAppDependencies_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAppDependencies_AsyncFunction);
USIK_GetAppDependencies_AsyncFunction::~USIK_GetAppDependencies_AsyncFunction() {}
// End Class USIK_GetAppDependencies_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetAppDependencies_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAppDependencies_AsyncFunction, USIK_GetAppDependencies_AsyncFunction::StaticClass, TEXT("USIK_GetAppDependencies_AsyncFunction"), &Z_Registration_Info_UClass_USIK_GetAppDependencies_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAppDependencies_AsyncFunction), 2247809960U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetAppDependencies_AsyncFunction_h_3343545334(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetAppDependencies_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_GetAppDependencies_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
