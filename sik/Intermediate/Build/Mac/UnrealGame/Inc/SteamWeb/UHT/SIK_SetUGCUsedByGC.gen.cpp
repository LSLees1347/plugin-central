// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/RemoteStorage/SIK_SetUGCUsedByGC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_SetUGCUsedByGC() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetUGCUsedByGC();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_SetUGCUsedByGC_NoRegister();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_SetUGCUsedByGC Function SetUGCUsedByGC
struct Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics
{
	struct SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms
	{
		FString Key;
		int64 SteamId;
		int64 UgcId;
		int32 AppId;
		bool Used;
		USIK_SetUGCUsedByGC* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|RemoteStorage" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_SetUGCUsedByGC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UgcId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Used_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_UgcId;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static void NewProp_Used_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Used;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_UgcId = { "UgcId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms, UgcId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UgcId_MetaData), NewProp_UgcId_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
void Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Used_SetBit(void* Obj)
{
	((SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms*)Obj)->Used = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Used = { "Used", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms), &Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Used_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Used_MetaData), NewProp_Used_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms, ReturnValue), Z_Construct_UClass_USIK_SetUGCUsedByGC_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_UgcId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_Used,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_SetUGCUsedByGC, nullptr, "SetUGCUsedByGC", nullptr, nullptr, Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::SIK_SetUGCUsedByGC_eventSetUGCUsedByGC_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_SetUGCUsedByGC::execSetUGCUsedByGC)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_UgcId);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_UBOOL_REF(Z_Param_Out_Used);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_SetUGCUsedByGC**)Z_Param__Result=USIK_SetUGCUsedByGC::SetUGCUsedByGC(Z_Param_Key,Z_Param_Out_SteamId,Z_Param_Out_UgcId,Z_Param_Out_AppId,Z_Param_Out_Used);
	P_NATIVE_END;
}
// End Class USIK_SetUGCUsedByGC Function SetUGCUsedByGC

// Begin Class USIK_SetUGCUsedByGC
void USIK_SetUGCUsedByGC::StaticRegisterNativesUSIK_SetUGCUsedByGC()
{
	UClass* Class = USIK_SetUGCUsedByGC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "SetUGCUsedByGC", &USIK_SetUGCUsedByGC::execSetUGCUsedByGC },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_SetUGCUsedByGC);
UClass* Z_Construct_UClass_USIK_SetUGCUsedByGC_NoRegister()
{
	return USIK_SetUGCUsedByGC::StaticClass();
}
struct Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/RemoteStorage/SIK_SetUGCUsedByGC.h" },
		{ "ModuleRelativePath", "Functions/RemoteStorage/SIK_SetUGCUsedByGC.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_SetUGCUsedByGC_SetUGCUsedByGC, "SetUGCUsedByGC" }, // 3270731886
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_SetUGCUsedByGC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::ClassParams = {
	&USIK_SetUGCUsedByGC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_SetUGCUsedByGC()
{
	if (!Z_Registration_Info_UClass_USIK_SetUGCUsedByGC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_SetUGCUsedByGC.OuterSingleton, Z_Construct_UClass_USIK_SetUGCUsedByGC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_SetUGCUsedByGC.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_SetUGCUsedByGC>()
{
	return USIK_SetUGCUsedByGC::StaticClass();
}
USIK_SetUGCUsedByGC::USIK_SetUGCUsedByGC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_SetUGCUsedByGC);
USIK_SetUGCUsedByGC::~USIK_SetUGCUsedByGC() {}
// End Class USIK_SetUGCUsedByGC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SetUGCUsedByGC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_SetUGCUsedByGC, USIK_SetUGCUsedByGC::StaticClass, TEXT("USIK_SetUGCUsedByGC"), &Z_Registration_Info_UClass_USIK_SetUGCUsedByGC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_SetUGCUsedByGC), 3200583930U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SetUGCUsedByGC_h_2807656976(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SetUGCUsedByGC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_RemoteStorage_SIK_SetUGCUsedByGC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
