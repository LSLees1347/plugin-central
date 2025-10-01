// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_ComputeNewPlayerCompatibility_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FComputeNewPlayerCompatibilityDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 PlayersThatDontLikeCandidate;
		int32 PlayersThatCandidateDoesntLike;
		int32 ClanPlayersThatDontLikeCandidate;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_Result;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FIntPropertyParams NewProp_PlayersThatCandidateDoesntLike;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ClanPlayersThatDontLikeCandidate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms, Result), Z_Construct_UEnum_SteamIntegrationKit_ESIK_Result, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) }; // 2697087679
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate = { "PlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms, PlayersThatDontLikeCandidate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_PlayersThatCandidateDoesntLike = { "PlayersThatCandidateDoesntLike", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms, PlayersThatCandidateDoesntLike), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate = { "ClanPlayersThatDontLikeCandidate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms, ClanPlayersThatDontLikeCandidate), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_PlayersThatDontLikeCandidate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_PlayersThatCandidateDoesntLike,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::NewProp_ClanPlayersThatDontLikeCandidate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "ComputeNewPlayerCompatibilityDelegate__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FComputeNewPlayerCompatibilityDelegate_DelegateWrapper(const FMulticastScriptDelegate& ComputeNewPlayerCompatibilityDelegate, TEnumAsByte<ESIK_Result> const& Result, int32 PlayersThatDontLikeCandidate, int32 PlayersThatCandidateDoesntLike, int32 ClanPlayersThatDontLikeCandidate)
{
	struct _Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms
	{
		TEnumAsByte<ESIK_Result> Result;
		int32 PlayersThatDontLikeCandidate;
		int32 PlayersThatCandidateDoesntLike;
		int32 ClanPlayersThatDontLikeCandidate;
	};
	_Script_SteamIntegrationKit_eventComputeNewPlayerCompatibilityDelegate_Parms Parms;
	Parms.Result=Result;
	Parms.PlayersThatDontLikeCandidate=PlayersThatDontLikeCandidate;
	Parms.PlayersThatCandidateDoesntLike=PlayersThatCandidateDoesntLike;
	Parms.ClanPlayersThatDontLikeCandidate=ClanPlayersThatDontLikeCandidate;
	ComputeNewPlayerCompatibilityDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FComputeNewPlayerCompatibilityDelegate

// Begin Class USIK_ComputeNewPlayerCompatibility_AsyncFunction Function ComputeNewPlayerCompatibility
struct Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics
{
	struct SIK_ComputeNewPlayerCompatibility_AsyncFunction_eventComputeNewPlayerCompatibility_Parms
	{
		FSIK_SteamId PlayerSteamId;
		USIK_ComputeNewPlayerCompatibility_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Game Server" },
		{ "DisplayName", "Compute New Player Compatibility" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerSteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_PlayerSteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::NewProp_PlayerSteamId = { "PlayerSteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ComputeNewPlayerCompatibility_AsyncFunction_eventComputeNewPlayerCompatibility_Parms, PlayerSteamId), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerSteamId_MetaData), NewProp_PlayerSteamId_MetaData) }; // 432135848
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_ComputeNewPlayerCompatibility_AsyncFunction_eventComputeNewPlayerCompatibility_Parms, ReturnValue), Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::NewProp_PlayerSteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction, nullptr, "ComputeNewPlayerCompatibility", nullptr, nullptr, Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::SIK_ComputeNewPlayerCompatibility_AsyncFunction_eventComputeNewPlayerCompatibility_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::SIK_ComputeNewPlayerCompatibility_AsyncFunction_eventComputeNewPlayerCompatibility_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_ComputeNewPlayerCompatibility_AsyncFunction::execComputeNewPlayerCompatibility)
{
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_PlayerSteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_ComputeNewPlayerCompatibility_AsyncFunction**)Z_Param__Result=USIK_ComputeNewPlayerCompatibility_AsyncFunction::ComputeNewPlayerCompatibility(Z_Param_Out_PlayerSteamId);
	P_NATIVE_END;
}
// End Class USIK_ComputeNewPlayerCompatibility_AsyncFunction Function ComputeNewPlayerCompatibility

// Begin Class USIK_ComputeNewPlayerCompatibility_AsyncFunction
void USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticRegisterNativesUSIK_ComputeNewPlayerCompatibility_AsyncFunction()
{
	UClass* Class = USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ComputeNewPlayerCompatibility", &USIK_ComputeNewPlayerCompatibility_AsyncFunction::execComputeNewPlayerCompatibility },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_ComputeNewPlayerCompatibility_AsyncFunction);
UClass* Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_NoRegister()
{
	return USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/GameServer/SIK_ComputeNewPlayerCompatibility_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_ComputeNewPlayerCompatibility_AsyncFunction_ComputeNewPlayerCompatibility, "ComputeNewPlayerCompatibility" }, // 1838672880
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_ComputeNewPlayerCompatibility_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_ComputeNewPlayerCompatibility_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 3962147505
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_ComputeNewPlayerCompatibility_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_ComputeNewPlayerCompatibilityDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 3962147505
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::ClassParams = {
	&USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_ComputeNewPlayerCompatibility_AsyncFunction>()
{
	return USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticClass();
}
USIK_ComputeNewPlayerCompatibility_AsyncFunction::USIK_ComputeNewPlayerCompatibility_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_ComputeNewPlayerCompatibility_AsyncFunction);
USIK_ComputeNewPlayerCompatibility_AsyncFunction::~USIK_ComputeNewPlayerCompatibility_AsyncFunction() {}
// End Class USIK_ComputeNewPlayerCompatibility_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction, USIK_ComputeNewPlayerCompatibility_AsyncFunction::StaticClass, TEXT("USIK_ComputeNewPlayerCompatibility_AsyncFunction"), &Z_Registration_Info_UClass_USIK_ComputeNewPlayerCompatibility_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_ComputeNewPlayerCompatibility_AsyncFunction), 2799555766U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_3925345497(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_GameServer_SIK_ComputeNewPlayerCompatibility_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
