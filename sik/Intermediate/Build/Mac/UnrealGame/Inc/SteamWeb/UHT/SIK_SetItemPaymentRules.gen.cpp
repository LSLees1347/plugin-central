// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Workshop/SIK_SetItemPaymentRules.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SetItemPaymentRules() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetItemPaymentRules();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetItemPaymentRules_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_SetItemPaymentRules Function SetItemPaymentRules
struct Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics
{
	struct SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms
	{
		FString Key;
		int32 AppId;
		int32 GameItemId;
		FString AssociatedWorkshopFiles;
		FString PartnerAccounts;
		bool ValidateOnly;
		bool MakeWorkshopFilesSubscribable;
		USIK_SetItemPaymentRules* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Workshop" },
		{ "Comment", "//Sets the payment rules for a specific item.\n" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_SetItemPaymentRules.h" },
		{ "ToolTip", "Sets the payment rules for a specific item." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameItemId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AssociatedWorkshopFiles_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PartnerAccounts_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ValidateOnly_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MakeWorkshopFilesSubscribable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_GameItemId;
	static const UECodeGen_Private::FStrPropertyParams NewProp_AssociatedWorkshopFiles;
	static const UECodeGen_Private::FStrPropertyParams NewProp_PartnerAccounts;
	static void NewProp_ValidateOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ValidateOnly;
	static void NewProp_MakeWorkshopFilesSubscribable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_MakeWorkshopFilesSubscribable;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_GameItemId = { "GameItemId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, GameItemId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameItemId_MetaData), NewProp_GameItemId_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_AssociatedWorkshopFiles = { "AssociatedWorkshopFiles", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, AssociatedWorkshopFiles), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AssociatedWorkshopFiles_MetaData), NewProp_AssociatedWorkshopFiles_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_PartnerAccounts = { "PartnerAccounts", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, PartnerAccounts), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PartnerAccounts_MetaData), NewProp_PartnerAccounts_MetaData) };
void Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ValidateOnly_SetBit(void* Obj)
{
	((SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms*)Obj)->ValidateOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ValidateOnly = { "ValidateOnly", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms), &Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ValidateOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ValidateOnly_MetaData), NewProp_ValidateOnly_MetaData) };
void Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_MakeWorkshopFilesSubscribable_SetBit(void* Obj)
{
	((SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms*)Obj)->MakeWorkshopFilesSubscribable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_MakeWorkshopFilesSubscribable = { "MakeWorkshopFilesSubscribable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms), &Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_MakeWorkshopFilesSubscribable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MakeWorkshopFilesSubscribable_MetaData), NewProp_MakeWorkshopFilesSubscribable_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms, ReturnValue), Z_Construct_UClass_USIK_SetItemPaymentRules_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_GameItemId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_AssociatedWorkshopFiles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_PartnerAccounts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ValidateOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_MakeWorkshopFilesSubscribable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SetItemPaymentRules, nullptr, "SetItemPaymentRules", nullptr, nullptr, Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::SIK_SetItemPaymentRules_eventSetItemPaymentRules_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetItemPaymentRules::execSetItemPaymentRules)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_GameItemId);
	P_GET_PROPERTY(FStrProperty,Z_Param_AssociatedWorkshopFiles);
	P_GET_PROPERTY(FStrProperty,Z_Param_PartnerAccounts);
	P_GET_UBOOL_REF(Z_Param_Out_ValidateOnly);
	P_GET_UBOOL_REF(Z_Param_Out_MakeWorkshopFilesSubscribable);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetItemPaymentRules**)Z_Param__Result=USIK_SetItemPaymentRules::SetItemPaymentRules(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_GameItemId,Z_Param_AssociatedWorkshopFiles,Z_Param_PartnerAccounts,Z_Param_Out_ValidateOnly,Z_Param_Out_MakeWorkshopFilesSubscribable);
	P_NATIVE_END;
}
// End Class USIK_SetItemPaymentRules Function SetItemPaymentRules

// Begin Class USIK_SetItemPaymentRules
void USIK_SetItemPaymentRules::StaticRegisterNativesUSIK_SetItemPaymentRules()
{
	UClass* Class = USIK_SetItemPaymentRules::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetItemPaymentRules", &USIK_SetItemPaymentRules::execSetItemPaymentRules },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SetItemPaymentRules);
UClass* Z_Construct_UClass_USIK_SetItemPaymentRules_NoRegister()
{
	return USIK_SetItemPaymentRules::StaticClass();
}
struct Z_Construct_UClass_USIK_SetItemPaymentRules_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Workshop/SIK_SetItemPaymentRules.h" },
		{ "ModuleRelativePath", "Functions/Workshop/SIK_SetItemPaymentRules.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetItemPaymentRules_SetItemPaymentRules, "SetItemPaymentRules" }, // 4028952708
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetItemPaymentRules>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::ClassParams = {
	&USIK_SetItemPaymentRules::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SetItemPaymentRules()
{
	if (!Z_Registration_Info_UClass_USIK_SetItemPaymentRules.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetItemPaymentRules.OuterSingleton, Z_Construct_UClass_USIK_SetItemPaymentRules_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetItemPaymentRules.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_SetItemPaymentRules>()
{
	return USIK_SetItemPaymentRules::StaticClass();
}
USIK_SetItemPaymentRules::USIK_SetItemPaymentRules(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SetItemPaymentRules);
USIK_SetItemPaymentRules::~USIK_SetItemPaymentRules() {}
// End Class USIK_SetItemPaymentRules

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_SetItemPaymentRules_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetItemPaymentRules, USIK_SetItemPaymentRules::StaticClass, TEXT("USIK_SetItemPaymentRules"), &Z_Registration_Info_UClass_USIK_SetItemPaymentRules, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetItemPaymentRules), 754235032U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_SetItemPaymentRules_h_3074239744(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_SetItemPaymentRules_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Workshop_SIK_SetItemPaymentRules_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
