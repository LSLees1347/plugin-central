// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Apps/SIK_GetAppList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetAppList() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppList();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetAppList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetAppList Function GetAppList
struct Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics
{
	struct SIK_GetAppList_eventGetAppList_Parms
	{
		USIK_GetAppList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Apps" },
		{ "Comment", "//Gets the complete list of public apps.\n" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppList.h" },
		{ "ToolTip", "Gets the complete list of public apps." },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetAppList_eventGetAppList_Parms, ReturnValue), Z_Construct_UClass_USIK_GetAppList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetAppList, nullptr, "GetAppList", nullptr, nullptr, Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::SIK_GetAppList_eventGetAppList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::SIK_GetAppList_eventGetAppList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetAppList_GetAppList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetAppList_GetAppList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetAppList::execGetAppList)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetAppList**)Z_Param__Result=USIK_GetAppList::GetAppList();
	P_NATIVE_END;
}
// End Class USIK_GetAppList Function GetAppList

// Begin Class USIK_GetAppList
void USIK_GetAppList::StaticRegisterNativesUSIK_GetAppList()
{
	UClass* Class = USIK_GetAppList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetAppList", &USIK_GetAppList::execGetAppList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetAppList);
UClass* Z_Construct_UClass_USIK_GetAppList_NoRegister()
{
	return USIK_GetAppList::StaticClass();
}
struct Z_Construct_UClass_USIK_GetAppList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Apps/SIK_GetAppList.h" },
		{ "ModuleRelativePath", "Functions/Apps/SIK_GetAppList.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetAppList_GetAppList, "GetAppList" }, // 627489124
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetAppList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetAppList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetAppList_Statics::ClassParams = {
	&USIK_GetAppList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetAppList_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetAppList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetAppList()
{
	if (!Z_Registration_Info_UClass_USIK_GetAppList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetAppList.OuterSingleton, Z_Construct_UClass_USIK_GetAppList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetAppList.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetAppList>()
{
	return USIK_GetAppList::StaticClass();
}
USIK_GetAppList::USIK_GetAppList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetAppList);
USIK_GetAppList::~USIK_GetAppList() {}
// End Class USIK_GetAppList

// Begin Registration
struct Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetAppList, USIK_GetAppList::StaticClass, TEXT("USIK_GetAppList"), &Z_Registration_Info_UClass_USIK_GetAppList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetAppList), 1584818381U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppList_h_2198898767(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_build_U5M_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Apps_SIK_GetAppList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
