// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_RequestEncryptedAppTicket_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FOnRequestEncryptedAppTicket
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(0, nullptr) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "OnRequestEncryptedAppTicket__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnRequestEncryptedAppTicket_DelegateWrapper(const FMulticastScriptDelegate& OnRequestEncryptedAppTicket, ESIK_Result Result)
{
	struct _Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventOnRequestEncryptedAppTicket_Parms Parms;
	Parms.Result=Result;
	OnRequestEncryptedAppTicket.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnRequestEncryptedAppTicket

// Begin Class USIK_RequestEncryptedAppTicket_AsyncFunction Function RequestEncryptedAppTicket
struct Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics
{
	struct SIK_RequestEncryptedAppTicket_AsyncFunction_eventRequestEncryptedAppTicket_Parms
	{
		TArray<uint8> EncryptedAppTicket;
		USIK_RequestEncryptedAppTicket_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || User" },
		{ "DisplayName", "Request Encrypted App Ticket" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EncryptedAppTicket_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_EncryptedAppTicket_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_EncryptedAppTicket;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_EncryptedAppTicket_Inner = { "EncryptedAppTicket", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_EncryptedAppTicket = { "EncryptedAppTicket", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEncryptedAppTicket_AsyncFunction_eventRequestEncryptedAppTicket_Parms, EncryptedAppTicket), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EncryptedAppTicket_MetaData), NewProp_EncryptedAppTicket_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_RequestEncryptedAppTicket_AsyncFunction_eventRequestEncryptedAppTicket_Parms, ReturnValue), Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_EncryptedAppTicket_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_EncryptedAppTicket,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction, nullptr, "RequestEncryptedAppTicket", nullptr, nullptr, Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::SIK_RequestEncryptedAppTicket_AsyncFunction_eventRequestEncryptedAppTicket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::SIK_RequestEncryptedAppTicket_AsyncFunction_eventRequestEncryptedAppTicket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_RequestEncryptedAppTicket_AsyncFunction::execRequestEncryptedAppTicket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_EncryptedAppTicket);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_RequestEncryptedAppTicket_AsyncFunction**)Z_Param__Result=USIK_RequestEncryptedAppTicket_AsyncFunction::RequestEncryptedAppTicket(Z_Param_Out_EncryptedAppTicket);
	P_NATIVE_END;
}
// End Class USIK_RequestEncryptedAppTicket_AsyncFunction Function RequestEncryptedAppTicket

// Begin Class USIK_RequestEncryptedAppTicket_AsyncFunction
void USIK_RequestEncryptedAppTicket_AsyncFunction::StaticRegisterNativesUSIK_RequestEncryptedAppTicket_AsyncFunction()
{
	UClass* Class = USIK_RequestEncryptedAppTicket_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RequestEncryptedAppTicket", &USIK_RequestEncryptedAppTicket_AsyncFunction::execRequestEncryptedAppTicket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_RequestEncryptedAppTicket_AsyncFunction);
UClass* Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_NoRegister()
{
	return USIK_RequestEncryptedAppTicket_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "Category", "Steam Integration Kit | User" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "Category", "Steam Integration Kit | User" },
		{ "ModuleRelativePath", "Functions/User/SIK_RequestEncryptedAppTicket_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_RequestEncryptedAppTicket_AsyncFunction_RequestEncryptedAppTicket, "RequestEncryptedAppTicket" }, // 814489884
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_RequestEncryptedAppTicket_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEncryptedAppTicket_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 914492504
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_RequestEncryptedAppTicket_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_OnRequestEncryptedAppTicket__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 914492504
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::ClassParams = {
	&USIK_RequestEncryptedAppTicket_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_RequestEncryptedAppTicket_AsyncFunction>()
{
	return USIK_RequestEncryptedAppTicket_AsyncFunction::StaticClass();
}
USIK_RequestEncryptedAppTicket_AsyncFunction::USIK_RequestEncryptedAppTicket_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_RequestEncryptedAppTicket_AsyncFunction);
USIK_RequestEncryptedAppTicket_AsyncFunction::~USIK_RequestEncryptedAppTicket_AsyncFunction() {}
// End Class USIK_RequestEncryptedAppTicket_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestEncryptedAppTicket_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction, USIK_RequestEncryptedAppTicket_AsyncFunction::StaticClass, TEXT("USIK_RequestEncryptedAppTicket_AsyncFunction"), &Z_Registration_Info_UClass_USIK_RequestEncryptedAppTicket_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_RequestEncryptedAppTicket_AsyncFunction), 1468326029U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestEncryptedAppTicket_AsyncFunction_h_676223337(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestEncryptedAppTicket_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_User_SIK_RequestEncryptedAppTicket_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
