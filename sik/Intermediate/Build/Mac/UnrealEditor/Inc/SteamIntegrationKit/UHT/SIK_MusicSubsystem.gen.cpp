// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Music/SIK_MusicSubsystem.h"
#include "Runtime/Engine/Classes/Engine/GameInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_MusicSubsystem() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstanceSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicSubsystem();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_MusicSubsystem_NoRegister();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature();
STEAMINTEGRATIONKIT_API UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Delegate FPlaybackStatusHasChanged
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "PlaybackStatusHasChanged__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FPlaybackStatusHasChanged_DelegateWrapper(const FMulticastScriptDelegate& PlaybackStatusHasChanged)
{
	PlaybackStatusHasChanged.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FPlaybackStatusHasChanged

// Begin Delegate FVolumeHasChanged
struct Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics
{
	struct _Script_SteamIntegrationKit_eventVolumeHasChanged_Parms
	{
		float Volume;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Volume;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::NewProp_Volume = { "Volume", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms, Volume), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::NewProp_Volume,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_SteamIntegrationKit, nullptr, "VolumeHasChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FVolumeHasChanged_DelegateWrapper(const FMulticastScriptDelegate& VolumeHasChanged, float Volume)
{
	struct _Script_SteamIntegrationKit_eventVolumeHasChanged_Parms
	{
		float Volume;
	};
	_Script_SteamIntegrationKit_eventVolumeHasChanged_Parms Parms;
	Parms.Volume=Volume;
	VolumeHasChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FVolumeHasChanged

// Begin Class USIK_MusicSubsystem
void USIK_MusicSubsystem::StaticRegisterNativesUSIK_MusicSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_MusicSubsystem);
UClass* Z_Construct_UClass_USIK_MusicSubsystem_NoRegister()
{
	return USIK_MusicSubsystem::StaticClass();
}
struct Z_Construct_UClass_USIK_MusicSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Functions/Music/SIK_MusicSubsystem.h" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlaybackStatusHasChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VolumeHasChanged_MetaData[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Music" },
		{ "ModuleRelativePath", "Functions/Music/SIK_MusicSubsystem.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_PlaybackStatusHasChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_VolumeHasChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_MusicSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_PlaybackStatusHasChanged = { "PlaybackStatusHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicSubsystem, PlaybackStatusHasChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_PlaybackStatusHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlaybackStatusHasChanged_MetaData), NewProp_PlaybackStatusHasChanged_MetaData) }; // 668791604
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_VolumeHasChanged = { "VolumeHasChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(USIK_MusicSubsystem, VolumeHasChanged), Z_Construct_UDelegateFunction_SteamIntegrationKit_VolumeHasChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VolumeHasChanged_MetaData), NewProp_VolumeHasChanged_MetaData) }; // 607520630
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_PlaybackStatusHasChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USIK_MusicSubsystem_Statics::NewProp_VolumeHasChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_USIK_MusicSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstanceSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_MusicSubsystem_Statics::ClassParams = {
	&USIK_MusicSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_MusicSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_MusicSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_MusicSubsystem()
{
	if (!Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton, Z_Construct_UClass_USIK_MusicSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_MusicSubsystem.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_MusicSubsystem>()
{
	return USIK_MusicSubsystem::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_MusicSubsystem);
// End Class USIK_MusicSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_MusicSubsystem, USIK_MusicSubsystem::StaticClass, TEXT("USIK_MusicSubsystem"), &Z_Registration_Info_UClass_USIK_MusicSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_MusicSubsystem), 1906340805U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_1399984181(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Music_SIK_MusicSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
