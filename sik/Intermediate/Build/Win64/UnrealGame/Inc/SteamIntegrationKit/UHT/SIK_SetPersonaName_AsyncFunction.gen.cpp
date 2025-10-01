// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Friends/SIK_SetPersonaName_AsyncFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SetPersonaName_AsyncFunction() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintAsyncActionBase();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FSetPersonaNameDelegate
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "SetPersonaNameDelegate__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FSetPersonaNameDelegate_DelegateWrapper(const FMulticastScriptDelegate& SetPersonaNameDelegate)
{
	SetPersonaNameDelegate.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FSetPersonaNameDelegate

// Begin Class USIK_SetPersonaName_AsyncFunction Function SetPersonaName
struct Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics
{
	struct SIK_SetPersonaName_AsyncFunction_eventSetPersonaName_Parms
	{
		FString PersonaName;
		USIK_SetPersonaName_AsyncFunction* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit || SDK Functions || Friends" },
		{ "DisplayName", "Set Steam Persona Name" },
		{ "Keywords", "SetPersonaName" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PersonaName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PersonaName;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::NewProp_PersonaName = { "PersonaName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetPersonaName_AsyncFunction_eventSetPersonaName_Parms, PersonaName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PersonaName_MetaData), NewProp_PersonaName_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetPersonaName_AsyncFunction_eventSetPersonaName_Parms, ReturnValue), Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::NewProp_PersonaName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction, nullptr, "SetPersonaName", nullptr, nullptr, Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::SIK_SetPersonaName_AsyncFunction_eventSetPersonaName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::SIK_SetPersonaName_AsyncFunction_eventSetPersonaName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetPersonaName_AsyncFunction::execSetPersonaName)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_PersonaName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetPersonaName_AsyncFunction**)Z_Param__Result=USIK_SetPersonaName_AsyncFunction::SetPersonaName(Z_Param_PersonaName);
	P_NATIVE_END;
}
// End Class USIK_SetPersonaName_AsyncFunction Function SetPersonaName

// Begin Class USIK_SetPersonaName_AsyncFunction
void USIK_SetPersonaName_AsyncFunction::StaticRegisterNativesUSIK_SetPersonaName_AsyncFunction()
{
	UClass* Class = USIK_SetPersonaName_AsyncFunction::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetPersonaName", &USIK_SetPersonaName_AsyncFunction::execSetPersonaName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SetPersonaName_AsyncFunction);
UClass* Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_NoRegister()
{
	return USIK_SetPersonaName_AsyncFunction::StaticClass();
}
struct Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
		{ "ModuleRelativePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[] = {
		{ "ModuleRelativePath", "Functions/Friends/SIK_SetPersonaName_AsyncFunction.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetPersonaName_AsyncFunction_SetPersonaName, "SetPersonaName" }, // 872440867
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetPersonaName_AsyncFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::NewProp_OnSuccess = { "OnSuccess", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SetPersonaName_AsyncFunction, OnSuccess), Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnSuccess_MetaData), NewProp_OnSuccess_MetaData) }; // 52414273
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::NewProp_OnFailure = { "OnFailure", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_SetPersonaName_AsyncFunction, OnFailure), Z_Construct_UDelegateFunction_SteamIntegrationKit_SetPersonaNameDelegate__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnFailure_MetaData), NewProp_OnFailure_MetaData) }; // 52414273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::NewProp_OnSuccess,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::NewProp_OnFailure,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintAsyncActionBase,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::ClassParams = {
	&USIK_SetPersonaName_AsyncFunction::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction()
{
	if (!Z_Registration_Info_UClass_USIK_SetPersonaName_AsyncFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetPersonaName_AsyncFunction.OuterSingleton, Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetPersonaName_AsyncFunction.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_SetPersonaName_AsyncFunction>()
{
	return USIK_SetPersonaName_AsyncFunction::StaticClass();
}
USIK_SetPersonaName_AsyncFunction::USIK_SetPersonaName_AsyncFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SetPersonaName_AsyncFunction);
USIK_SetPersonaName_AsyncFunction::~USIK_SetPersonaName_AsyncFunction() {}
// End Class USIK_SetPersonaName_AsyncFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_SetPersonaName_AsyncFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetPersonaName_AsyncFunction, USIK_SetPersonaName_AsyncFunction::StaticClass, TEXT("USIK_SetPersonaName_AsyncFunction"), &Z_Registration_Info_UClass_USIK_SetPersonaName_AsyncFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetPersonaName_AsyncFunction), 968731184U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_SetPersonaName_AsyncFunction_h_635724266(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_SetPersonaName_AsyncFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Friends_SIK_SetPersonaName_AsyncFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
