// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Sessions/SIK_DestroySession_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_DestroySession_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DestroySession_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_DestroySession_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FSIK_DestroySession_Delegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SIK_DestroySession_Delegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSIK_DestroySession_Delegate_DelegateWrapper(const FMulticastScriptDelegate& SIK_DestroySession_Delegate)
{
	SIK_DestroySession_Delegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FSIK_DestroySession_Delegate

// Begin Class USIK_DestroySession_AsyncFunction Function DestroySIKSessions
struct Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics
{
	struct SIK_DestroySession_AsyncFunction_eventDestroySIKSessions_Parms
	{
		FName SessionName;
		USIK_DestroySession_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || Game Functions || Sessions" },
		{ "CPP_Default_SessionName", "GameSession" },
		{ "DisplayName", "Destroy SIK Session" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_SessionName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::NewProp_SessionName = { "SessionName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DestroySession_AsyncFunction_eventDestroySIKSessions_Parms, SessionName), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_DestroySession_AsyncFunction_eventDestroySIKSessions_Parms, ReturnValue), Z_Construct_UClass_USIK_DestroySession_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::NewProp_SessionName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_DestroySession_AsyncFunction, nullptr, "DestroySIKSessions", nullptr, nullptr, Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::SIK_DestroySession_AsyncFunction_eventDestroySIKSessions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::SIK_DestroySession_AsyncFunction_eventDestroySIKSessions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_DestroySession_AsyncFunction::execDestroySIKSessions)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_SessionName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_DestroySession_AsyncFunction**)Z_Param__Result=USIK_DestroySession_AsyncFunction::DestroySIKSessions(Z_Param_SessionName);
	P_NATIVE_END;
}
// End Class USIK_DestroySession_AsyncFunction Function DestroySIKSessions

// Begin Class USIK_DestroySession_AsyncFunction
void USIK_DestroySession_AsyncFunction::StaticRegisterNativesUSIK_DestroySession_AsyncFunction()
{
	UClass* Class = USIK_DestroySession_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "DestroySIKSessions", &USIK_DestroySession_AsyncFunction::execDestroySIKSessions },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_DestroySession_AsyncFunction);
UClass* Z_Construct_UClass_USIK_DestroySession_AsyncFunction_NoRegister()
{
	return USIK_DestroySession_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "DisplayName", "Success" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFail_MetaData[] = {
		{ "DisplayName", "Failure" },
		{ "ModuleRelativePath", "Functions/Sessions/SIK_DestroySession_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFail;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_DestroySession_AsyncFunction_DestroySIKSessions, "DestroySIKSessions" }, // 899339075
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_DestroySession_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DestroySession_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 2068821069
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail = { "OnFail", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_DestroySession_AsyncFunction, OnFail), Z_Construct_UDelegateFunction_SteamIntegrationKit_SIK_DestroySession_Delegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFail_MetaData), NewProp_OnFail_MetaData) }; // 2068821069
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::NewProp_OnFail,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::ClassParams = {
	&USIK_DestroySession_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_DestroySession_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_DestroySession_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_DestroySession_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_DestroySession_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_DestroySession_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_DestroySession_AsyncFunction>()
{
	return USIK_DestroySession_AsyncFunction::StaticClass();
}
USIK_DestroySession_AsyncFunction::USIK_DestroySession_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_DestroySession_AsyncFunction);
USIK_DestroySession_AsyncFunction::~USIK_DestroySession_AsyncFunction() {}
// End Class USIK_DestroySession_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_DestroySession_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_DestroySession_AsyncFunction, USIK_DestroySession_AsyncFunction::StaticClass, TEXT("USIK_DestroySession_AsyncFunction"), &Z_Registration_Info_UClass_USIK_DestroySession_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_DestroySession_AsyncFunction), 3793570830U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_DestroySession_AsyncFunction_h_3689011162(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_DestroySession_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Sessions_SIK_DestroySession_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
