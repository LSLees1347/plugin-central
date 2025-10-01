// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_StartPlaytimeTracking_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnStartPlaytimeTrackingComplete
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnStartPlaytimeTrackingComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnStartPlaytimeTrackingComplete_DelegateWrapper(const FMulticastScriptDelegate& OnStartPlaytimeTrackingComplete, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnStartPlaytimeTrackingComplete_Parms Parms;
	Parms.Result=Result;
	OnStartPlaytimeTrackingComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnStartPlaytimeTrackingComplete

// Begin Class USIK_StartPlaytimeTracking_AsyncFunction Function StartPlaytimeTracking
struct Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics
{
	struct SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms
	{
		TArray<FSIK_PublishedFileId> PublishedFileID;
		int32 NumPublishedFileIDs;
		USIK_StartPlaytimeTracking_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileID_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_PublishedFileID;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumPublishedFileIDs;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner = { "PublishedFileID", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_PublishedFileID = { "PublishedFileID", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms, PublishedFileID), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_NumPublishedFileIDs = { "NumPublishedFileIDs", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms, NumPublishedFileIDs), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms, ReturnValue), Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_PublishedFileID_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_PublishedFileID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_NumPublishedFileIDs,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction, nullptr, "StartPlaytimeTracking", nullptr, nullptr, Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::SIK_StartPlaytimeTracking_AsyncFunction_eventStartPlaytimeTracking_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_StartPlaytimeTracking_AsyncFunction::execStartPlaytimeTracking)
{
	P_GET_TARRAY(FSIK_PublishedFileId,Z_Param_PublishedFileID);
	P_GET_PROPERTY(FIntProperty,Z_Param_NumPublishedFileIDs);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_StartPlaytimeTracking_AsyncFunction**)Z_Param__Result=USIK_StartPlaytimeTracking_AsyncFunction::StartPlaytimeTracking(Z_Param_PublishedFileID,Z_Param_NumPublishedFileIDs);
	P_NATIVE_END;
}
// End Class USIK_StartPlaytimeTracking_AsyncFunction Function StartPlaytimeTracking

// Begin Class USIK_StartPlaytimeTracking_AsyncFunction
void USIK_StartPlaytimeTracking_AsyncFunction::StaticRegisterNativesUSIK_StartPlaytimeTracking_AsyncFunction()
{
	UClass* Class = USIK_StartPlaytimeTracking_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "StartPlaytimeTracking", &USIK_StartPlaytimeTracking_AsyncFunction::execStartPlaytimeTracking },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_StartPlaytimeTracking_AsyncFunction);
UClass* Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_NoRegister()
{
	return USIK_StartPlaytimeTracking_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_StartPlaytimeTracking_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_StartPlaytimeTracking_AsyncFunction_StartPlaytimeTracking, "StartPlaytimeTracking" }, // 314395914
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_StartPlaytimeTracking_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StartPlaytimeTracking_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1215509065
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_StartPlaytimeTracking_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnStartPlaytimeTrackingComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1215509065
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::ClassParams = {
	&USIK_StartPlaytimeTracking_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_StartPlaytimeTracking_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_StartPlaytimeTracking_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_StartPlaytimeTracking_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_StartPlaytimeTracking_AsyncFunction>()
{
	return USIK_StartPlaytimeTracking_AsyncFunction::StaticClass();
}
USIK_StartPlaytimeTracking_AsyncFunction::USIK_StartPlaytimeTracking_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_StartPlaytimeTracking_AsyncFunction);
USIK_StartPlaytimeTracking_AsyncFunction::~USIK_StartPlaytimeTracking_AsyncFunction() {}
// End Class USIK_StartPlaytimeTracking_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StartPlaytimeTracking_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_StartPlaytimeTracking_AsyncFunction, USIK_StartPlaytimeTracking_AsyncFunction::StaticClass, TEXT("USIK_StartPlaytimeTracking_AsyncFunction"), &Z_Registration_Info_UClass_USIK_StartPlaytimeTracking_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_StartPlaytimeTracking_AsyncFunction), 4220832722U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StartPlaytimeTracking_AsyncFunction_h_681454314(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StartPlaytimeTracking_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_StartPlaytimeTracking_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
