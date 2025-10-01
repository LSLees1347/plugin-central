// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamWeb/Functions/Inventory/SIK_AddItem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_AddItem() {}

// Begin Cross Module References
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AddItem();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_AddItem_NoRegister();
STEAMWEB_API UClass* Z_Construct_UClass_USIK_BaseWebApi();
UPackage* Z_Construct_UPackage__Script_SteamWeb();
// End Cross Module References

// Begin Class USIK_AddItem Function AddItem
struct Z_Construct_UFunction_USIK_AddItem_AddItem_Statics
{
	struct SIK_AddItem_eventAddItem_Parms
	{
		FString Key;
		int32 AppId;
		TArray<int64> ItemDefIds;
		FString ItemPropsJson;
		int64 SteamId;
		bool Notify;
		int64 RequestId;
		bool TradeRestriction;
		USIK_AddItem* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "BlueprintInternalUseOnly", "true" },
		{ "Category", "Steam Integration Kit|Web|Inventory" },
		{ "Comment", "//AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account.\n" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddItem.h" },
		{ "ToolTip", "AddItem is used to add new items directly in a user's inventory. For each itemdef, an instance of that type is created and added to the target account." },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AppId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemDefIds_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ItemPropsJson_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SteamId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Notify_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RequestId_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TradeRestriction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Key;
	static const UECodeGen_Private::FIntPropertyParams NewProp_AppId;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_ItemDefIds_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ItemDefIds;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ItemPropsJson;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_SteamId;
	static void NewProp_Notify_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Notify;
	static const UECodeGen_Private::FInt64PropertyParams NewProp_RequestId;
	static void NewProp_TradeRestriction_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_TradeRestriction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, Key), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Key_MetaData), NewProp_Key_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_AppId = { "AppId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, AppId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AppId_MetaData), NewProp_AppId_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemDefIds_Inner = { "ItemDefIds", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemDefIds = { "ItemDefIds", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, ItemDefIds), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemDefIds_MetaData), NewProp_ItemDefIds_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemPropsJson = { "ItemPropsJson", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, ItemPropsJson), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ItemPropsJson_MetaData), NewProp_ItemPropsJson_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_SteamId = { "SteamId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, SteamId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SteamId_MetaData), NewProp_SteamId_MetaData) };
void Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Notify_SetBit(void* Obj)
{
	((SIK_AddItem_eventAddItem_Parms*)Obj)->Notify = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Notify = { "Notify", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AddItem_eventAddItem_Parms), &Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Notify_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Notify_MetaData), NewProp_Notify_MetaData) };
const UECodeGen_Private::FInt64PropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_RequestId = { "RequestId", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Int64, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, RequestId), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RequestId_MetaData), NewProp_RequestId_MetaData) };
void Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_TradeRestriction_SetBit(void* Obj)
{
	((SIK_AddItem_eventAddItem_Parms*)Obj)->TradeRestriction = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_TradeRestriction = { "TradeRestriction", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_AddItem_eventAddItem_Parms), &Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_TradeRestriction_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TradeRestriction_MetaData), NewProp_TradeRestriction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_AddItem_eventAddItem_Parms, ReturnValue), Z_Construct_UClass_USIK_AddItem_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Key,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_AppId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemDefIds_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemDefIds,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ItemPropsJson,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_SteamId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_Notify,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_RequestId,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_TradeRestriction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_AddItem, nullptr, "AddItem", nullptr, nullptr, Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::SIK_AddItem_eventAddItem_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::SIK_AddItem_eventAddItem_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_AddItem_AddItem()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_AddItem_AddItem_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_AddItem::execAddItem)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Key);
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_AppId);
	P_GET_TARRAY_REF(int64,Z_Param_Out_ItemDefIds);
	P_GET_PROPERTY(FStrProperty,Z_Param_ItemPropsJson);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_SteamId);
	P_GET_UBOOL_REF(Z_Param_Out_Notify);
	P_GET_PROPERTY_REF(FInt64Property,Z_Param_Out_RequestId);
	P_GET_UBOOL_REF(Z_Param_Out_TradeRestriction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(USIK_AddItem**)Z_Param__Result=USIK_AddItem::AddItem(Z_Param_Key,Z_Param_Out_AppId,Z_Param_Out_ItemDefIds,Z_Param_ItemPropsJson,Z_Param_Out_SteamId,Z_Param_Out_Notify,Z_Param_Out_RequestId,Z_Param_Out_TradeRestriction);
	P_NATIVE_END;
}
// End Class USIK_AddItem Function AddItem

// Begin Class USIK_AddItem
void USIK_AddItem::StaticRegisterNativesUSIK_AddItem()
{
	UClass* Class = USIK_AddItem::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddItem", &USIK_AddItem::execAddItem },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_AddItem);
UClass* Z_Construct_UClass_USIK_AddItem_NoRegister()
{
	return USIK_AddItem::StaticClass();
}
struct Z_Construct_UClass_USIK_AddItem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Inventory/SIK_AddItem.h" },
		{ "ModuleRelativePath", "Functions/Inventory/SIK_AddItem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_AddItem_AddItem, "AddItem" }, // 316257012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_AddItem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_AddItem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_USIK_BaseWebApi,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamWeb,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_AddItem_Statics::ClassParams = {
	&USIK_AddItem::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_AddItem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_AddItem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_AddItem()
{
	if (!Z_Registration_Info_UClass_USIK_AddItem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_AddItem.OuterSingleton, Z_Construct_UClass_USIK_AddItem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_AddItem.OuterSingleton;
}
template<> STEAMWEB_API UClass* StaticClass<USIK_AddItem>()
{
	return USIK_AddItem::StaticClass();
}
USIK_AddItem::USIK_AddItem(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_AddItem);
USIK_AddItem::~USIK_AddItem() {}
// End Class USIK_AddItem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddItem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_AddItem, USIK_AddItem::StaticClass, TEXT("USIK_AddItem"), &Z_Registration_Info_UClass_USIK_AddItem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_AddItem), 2493822488U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddItem_h_3979395548(TEXT("/Script/SteamWeb"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddItem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamWeb_Functions_Inventory_SIK_AddItem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
