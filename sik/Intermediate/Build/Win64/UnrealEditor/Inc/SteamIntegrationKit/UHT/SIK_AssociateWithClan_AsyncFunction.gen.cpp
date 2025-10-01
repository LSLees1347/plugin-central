// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_AssociateWithClan_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FAssociateWithClanDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2697087679
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::NewProp_Result,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "AssociateWithClanDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FAssociateWithClanDelegate_DelegateWrapper(const FMulticastScriptDelegate& AssociateWithClanDelegate, TEnumAsByte<ESIK_Result> const& Result)
{
	struct _Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
	};
	_Script_SteamIntegrationKit_eventAssociateWithClanDelegate_Parms Parms;
	Parms.Result=Result;
	AssociateWithClanDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FAssociateWithClanDelegate

// Begin Class USIK_AssociateWithClan_AsyncFunction Function AssociateWithClan
struct Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics
{
	struct SIK_AssociateWithClan_AsyncFunction_eventAssociateWithClan_Parms
	{
		FSIK_SteamId SteamIdClan;
		USIK_AssociateWithClan_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "DisplayName", "Associate With Clan" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamIdClan_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIdClan;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::NewProp_SteamIdClan = { "SteamIdClan", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AssociateWithClan_AsyncFunction_eventAssociateWithClan_Parms, SteamIdClan), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamIdClan_MetaData), NewProp_SteamIdClan_MetaData) }; // 432135848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AssociateWithClan_AsyncFunction_eventAssociateWithClan_Parms, ReturnValue), Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::NewProp_SteamIdClan,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction, nullptr, "AssociateWithClan", nullptr, nullptr, Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::SIK_AssociateWithClan_AsyncFunction_eventAssociateWithClan_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::SIK_AssociateWithClan_AsyncFunction_eventAssociateWithClan_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AssociateWithClan_AsyncFunction::execAssociateWithClan)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_SteamIdClan);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AssociateWithClan_AsyncFunction**)Z_Param__Result=USIK_AssociateWithClan_AsyncFunction::AssociateWithClan(Z_Param_Out_SteamIdClan);
	P_NATIVE_END;
}
// End Class USIK_AssociateWithClan_AsyncFunction Function AssociateWithClan

// Begin Class USIK_AssociateWithClan_AsyncFunction
void USIK_AssociateWithClan_AsyncFunction::StaticRegisterNativesUSIK_AssociateWithClan_AsyncFunction()
{
	UClass* Class = USIK_AssociateWithClan_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AssociateWithClan", &USIK_AssociateWithClan_AsyncFunction::execAssociateWithClan },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_AssociateWithClan_AsyncFunction);
UClass* Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_NoRegister()
{
	return USIK_AssociateWithClan_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_AssociateWithClan_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AssociateWithClan_AsyncFunction_AssociateWithClan, "AssociateWithClan" }, // 4040108197
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AssociateWithClan_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AssociateWithClan_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3099140424
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_AssociateWithClan_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_AssociateWithClanDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3099140424
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::ClassParams = {
	&USIK_AssociateWithClan_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_AssociateWithClan_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AssociateWithClan_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AssociateWithClan_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_AssociateWithClan_AsyncFunction>()
{
	return USIK_AssociateWithClan_AsyncFunction::StaticClass();
}
USIK_AssociateWithClan_AsyncFunction::USIK_AssociateWithClan_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_AssociateWithClan_AsyncFunction);
USIK_AssociateWithClan_AsyncFunction::~USIK_AssociateWithClan_AsyncFunction() {}
// End Class USIK_AssociateWithClan_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_AssociateWithClan_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AssociateWithClan_AsyncFunction, USIK_AssociateWithClan_AsyncFunction::StaticClass, TEXT("USIK_AssociateWithClan_AsyncFunction"), &Z_Registration_Info_UClass_USIK_AssociateWithClan_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AssociateWithClan_AsyncFunction), 3335412909U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_AssociateWithClan_AsyncFunction_h_151835090(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_AssociateWithClan_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_AssociateWithClan_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
