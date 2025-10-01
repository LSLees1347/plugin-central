// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RemoveItemFromFavorites_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_AppId();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_PublishedFileId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnRemoveItemFromFavoritesComplete
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
		bool bWasAddRequest;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static void NewProp_bWasAddRequest_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bWasAddRequest;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
void Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit(void* Obj)
{
	((_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms*)Obj)->bWasAddRequest = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest = { "bWasAddRequest", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms), &Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::NewProp_bWasAddRequest,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRemoveItemFromFavoritesComplete__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRemoveItemFromFavoritesComplete_DelegateWrapper(const FMulticastScriptDelegate& OnRemoveItemFromFavoritesComplete, FSIK_PublishedFileId PublishedFileId, ESIK_Result Result, bool bWasAddRequest)
{
	struct _Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms
	{
		FSIK_PublishedFileId PublishedFileId;
		TEnumAsByte<ESIK_Result> Result;
		bool bWasAddRequest;
	};
	_Script_SteamIntegrationKit_eventOnRemoveItemFromFavoritesComplete_Parms Parms;
	Parms.PublishedFileId=PublishedFileId;
	Parms.Result=Result;
	Parms.bWasAddRequest=bWasAddRequest ? true : false;
	OnRemoveItemFromFavoritesComplete.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRemoveItemFromFavoritesComplete

// Begin Class USIK_RemoveItemFromFavorites_AsyncFunction Function RemoveItemFromFavorites
struct Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics
{
	struct SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms
	{
		FSIK_AppId AppId;
		FSIK_PublishedFileId PublishedFileId;
		USIK_RemoveItemFromFavorites_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || UGC" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PublishedFileId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms, AppId), Z_Construct_UScriptStruct_FSIK_AppId, METADATA_PARAMS(0, nullptr) }; // 3137591890
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_PublishedFileId = { "PublishedFileId", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms, PublishedFileId), Z_Construct_UScriptStruct_FSIK_PublishedFileId, METADATA_PARAMS(0, nullptr) }; // 2012256586
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms, ReturnValue), Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_PublishedFileId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction, nullptr, "RemoveItemFromFavorites", nullptr, nullptr, Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::SIK_RemoveItemFromFavorites_AsyncFunction_eventRemoveItemFromFavorites_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RemoveItemFromFavorites_AsyncFunction::execRemoveItemFromFavorites)
{
	P_GET_STRUCT(FSIK_AppId,Z_Param_AppId);
	P_GET_STRUCT(FSIK_PublishedFileId,Z_Param_PublishedFileId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RemoveItemFromFavorites_AsyncFunction**)Z_Param__Result=USIK_RemoveItemFromFavorites_AsyncFunction::RemoveItemFromFavorites(Z_Param_AppId,Z_Param_PublishedFileId);
	P_NATIVE_END;
}
// End Class USIK_RemoveItemFromFavorites_AsyncFunction Function RemoveItemFromFavorites

// Begin Class USIK_RemoveItemFromFavorites_AsyncFunction
void USIK_RemoveItemFromFavorites_AsyncFunction::StaticRegisterNativesUSIK_RemoveItemFromFavorites_AsyncFunction()
{
	UClass* Class = USIK_RemoveItemFromFavorites_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RemoveItemFromFavorites", &USIK_RemoveItemFromFavorites_AsyncFunction::execRemoveItemFromFavorites },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RemoveItemFromFavorites_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_NoRegister()
{
	return USIK_RemoveItemFromFavorites_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/UGC/SIK_RemoveItemFromFavorites_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RemoveItemFromFavorites_AsyncFunction_RemoveItemFromFavorites, "RemoveItemFromFavorites" }, // 4070073816
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RemoveItemFromFavorites_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveItemFromFavorites_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 1597132856
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RemoveItemFromFavorites_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRemoveItemFromFavoritesComplete__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 1597132856
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::ClassParams = {
	&USIK_RemoveItemFromFavorites_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RemoveItemFromFavorites_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RemoveItemFromFavorites_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RemoveItemFromFavorites_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RemoveItemFromFavorites_AsyncFunction>()
{
	return USIK_RemoveItemFromFavorites_AsyncFunction::StaticClass();
}
USIK_RemoveItemFromFavorites_AsyncFunction::USIK_RemoveItemFromFavorites_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RemoveItemFromFavorites_AsyncFunction);
USIK_RemoveItemFromFavorites_AsyncFunction::~USIK_RemoveItemFromFavorites_AsyncFunction() {}
// End Class USIK_RemoveItemFromFavorites_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveItemFromFavorites_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RemoveItemFromFavorites_AsyncFunction, USIK_RemoveItemFromFavorites_AsyncFunction::StaticClass, TEXT("USIK_RemoveItemFromFavorites_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RemoveItemFromFavorites_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RemoveItemFromFavorites_AsyncFunction), 4129636276U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveItemFromFavorites_AsyncFunction_h_3136236926(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveItemFromFavorites_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_UGC_SIK_RemoveItemFromFavorites_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
