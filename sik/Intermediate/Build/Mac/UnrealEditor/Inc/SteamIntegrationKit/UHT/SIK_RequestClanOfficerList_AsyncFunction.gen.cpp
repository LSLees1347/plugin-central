// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestClanOfficerList_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnRequestClanOfficerList
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms
	{
		int32 NumberOfOfficers;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumberOfOfficers;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::NewProp_NumberOfOfficers = { "NumberOfOfficers", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms, NumberOfOfficers), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::NewProp_NumberOfOfficers,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRequestClanOfficerList__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestClanOfficerList_DelegateWrapper(const FMulticastScriptDelegate& OnRequestClanOfficerList, int32 NumberOfOfficers)
{
	struct _Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms
	{
		int32 NumberOfOfficers;
	};
	_Script_SteamIntegrationKit_eventOnRequestClanOfficerList_Parms Parms;
	Parms.NumberOfOfficers=NumberOfOfficers;
	OnRequestClanOfficerList.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestClanOfficerList

// Begin Class USIK_RequestClanOfficerList_AsyncFunction Function RequestClanOfficerList
struct Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics
{
	struct SIK_RequestClanOfficerList_AsyncFunction_eventRequestClanOfficerList_Parms
	{
		FSIK_SteamId ClanId;
		USIK_RequestClanOfficerList_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Request Steam Clan Officer List" },
		{ "Keywords", "RequestClanOfficerList" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClanId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ClanId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::NewProp_ClanId = { "ClanId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestClanOfficerList_AsyncFunction_eventRequestClanOfficerList_Parms, ClanId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClanId_MetaData), NewProp_ClanId_MetaData) }; // 432135848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestClanOfficerList_AsyncFunction_eventRequestClanOfficerList_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::NewProp_ClanId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction, nullptr, "RequestClanOfficerList", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::SIK_RequestClanOfficerList_AsyncFunction_eventRequestClanOfficerList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::SIK_RequestClanOfficerList_AsyncFunction_eventRequestClanOfficerList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestClanOfficerList_AsyncFunction::execRequestClanOfficerList)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_ClanId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestClanOfficerList_AsyncFunction**)Z_Param__Result=USIK_RequestClanOfficerList_AsyncFunction::RequestClanOfficerList(Z_Param_Out_ClanId);
	P_NATIVE_END;
}
// End Class USIK_RequestClanOfficerList_AsyncFunction Function RequestClanOfficerList

// Begin Class USIK_RequestClanOfficerList_AsyncFunction
void USIK_RequestClanOfficerList_AsyncFunction::StaticRegisterNativesUSIK_RequestClanOfficerList_AsyncFunction()
{
	UClass* Class = USIK_RequestClanOfficerList_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestClanOfficerList", &USIK_RequestClanOfficerList_AsyncFunction::execRequestClanOfficerList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestClanOfficerList_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_NoRegister()
{
	return USIK_RequestClanOfficerList_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_RequestClanOfficerList_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestClanOfficerList_AsyncFunction_RequestClanOfficerList, "RequestClanOfficerList" }, // 3784512120
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestClanOfficerList_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestClanOfficerList_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 4023123194
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestClanOfficerList_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestClanOfficerList__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 4023123194
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestClanOfficerList_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestClanOfficerList_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestClanOfficerList_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestClanOfficerList_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestClanOfficerList_AsyncFunction>()
{
	return USIK_RequestClanOfficerList_AsyncFunction::StaticClass();
}
USIK_RequestClanOfficerList_AsyncFunction::USIK_RequestClanOfficerList_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestClanOfficerList_AsyncFunction);
USIK_RequestClanOfficerList_AsyncFunction::~USIK_RequestClanOfficerList_AsyncFunction() {}
// End Class USIK_RequestClanOfficerList_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestClanOfficerList_AsyncFunction, USIK_RequestClanOfficerList_AsyncFunction::StaticClass, TEXT("USIK_RequestClanOfficerList_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestClanOfficerList_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestClanOfficerList_AsyncFunction), 3737652588U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_1909914323(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_RequestClanOfficerList_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
