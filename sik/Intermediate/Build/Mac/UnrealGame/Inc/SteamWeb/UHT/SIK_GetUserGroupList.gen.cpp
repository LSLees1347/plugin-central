// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/User/SIK_GetUserGroupList.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_GetUserGroupList() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserGroupList();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_GetUserGroupList_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_GetUserGroupList Function GetUserGroupList
struct Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics
{
	struct SIK_GetUserGroupList_eventGetUserGroupList_Parms
	{
		FString Key;
		int64 SteamId;
		USIK_GetUserGroupList* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|User" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetUserGroupList.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserGroupList_eventGetUserGroupList_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserGroupList_eventGetUserGroupList_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_GetUserGroupList_eventGetUserGroupList_Parms, ReturnValue), Z_Construct_UClass_USIK_GetUserGroupList_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_GetUserGroupList, nullptr, "GetUserGroupList", nullptr, nullptr, Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::SIK_GetUserGroupList_eventGetUserGroupList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::SIK_GetUserGroupList_eventGetUserGroupList_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_GetUserGroupList::execGetUserGroupList)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_GetUserGroupList**)Z_Param__Result=USIK_GetUserGroupList::GetUserGroupList(Z_Param_Key,Z_Param_Out_SteamId);
	P_NATIVE_END;
}
// End Class USIK_GetUserGroupList Function GetUserGroupList

// Begin Class USIK_GetUserGroupList
void USIK_GetUserGroupList::StaticRegisterNativesUSIK_GetUserGroupList()
{
	UClass* Class = USIK_GetUserGroupList::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetUserGroupList", &USIK_GetUserGroupList::execGetUserGroupList },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_GetUserGroupList);
UClass* Z_Construct_UClass_USIK_GetUserGroupList_NoRegister()
{
	return USIK_GetUserGroupList::StaticClass();
}
struct Z_Construct_UClass_USIK_GetUserGroupList_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/User/SIK_GetUserGroupList.h" },
		{ "ModuleRelativePath", "Functions/User/SIK_GetUserGroupList.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_GetUserGroupList_GetUserGroupList, "GetUserGroupList" }, // 2899280752
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_GetUserGroupList>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_GetUserGroupList_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserGroupList_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_GetUserGroupList_Statics::ClassParams = {
	&USIK_GetUserGroupList::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_GetUserGroupList_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_GetUserGroupList_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_GetUserGroupList()
{
	if (!Z_Registration_Info_UClass_USIK_GetUserGroupList.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_GetUserGroupList.OuterSingleton, Z_Construct_UClass_USIK_GetUserGroupList_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_GetUserGroupList.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_GetUserGroupList>()
{
	return USIK_GetUserGroupList::StaticClass();
}
USIK_GetUserGroupList::USIK_GetUserGroupList(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_GetUserGroupList);
USIK_GetUserGroupList::~USIK_GetUserGroupList() {}
// End Class USIK_GetUserGroupList

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetUserGroupList_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_GetUserGroupList, USIK_GetUserGroupList::StaticClass, TEXT("USIK_GetUserGroupList"), &Z_Registration_Info_UClass_USIK_GetUserGroupList, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_GetUserGroupList), 3434611853U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetUserGroupList_h_3403954211(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetUserGroupList_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_User_SIK_GetUserGroupList_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
