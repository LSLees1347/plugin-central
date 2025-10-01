// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "SteamIntegrationKit/Functions/Networking/SIK_NetworkingLibrary.h"
#include "SteamIntegrationKit/Public/SIK_SharedFile.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSIK_NetworkingLibrary() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingLibrary();
STEAMINTEGRATIONKIT_API UClass* Z_Construct_UClass_USIK_NetworkingLibrary_NoRegister();
STEAMINTEGRATIONKIT_API UEnum* Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_P2PSessionState();
STEAMINTEGRATIONKIT_API UScriptStruct* Z_Construct_UScriptStruct_FSIK_SteamId();
UPackage* Z_Construct_UPackage__Script_SteamIntegrationKit();
// End Cross Module References

// Begin Class USIK_NetworkingLibrary Function AcceptP2PSessionWithUser
struct Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics
{
	struct SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms
	{
		FSIK_SteamId SteamIDRemote;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "AcceptP2PSessionWithUser", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::SIK_NetworkingLibrary_eventAcceptP2PSessionWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execAcceptP2PSessionWithUser)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIDRemote);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::AcceptP2PSessionWithUser(Z_Param_SteamIDRemote);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function AcceptP2PSessionWithUser

// Begin Class USIK_NetworkingLibrary Function AllowP2PPacketRelay
struct Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics
{
	struct SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms
	{
		bool Allow;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static void NewProp_Allow_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Allow;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_Allow_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms*)Obj)->Allow = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_Allow = { "Allow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_Allow_SetBit, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_Allow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "AllowP2PPacketRelay", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::SIK_NetworkingLibrary_eventAllowP2PPacketRelay_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execAllowP2PPacketRelay)
{
	P_GET_UBOOL(Z_Param_Allow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::AllowP2PPacketRelay(Z_Param_Allow);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function AllowP2PPacketRelay

// Begin Class USIK_NetworkingLibrary Function CloseP2PChannelWithUser
struct Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics
{
	struct SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms
	{
		FSIK_SteamId SteamIDRemote;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "CloseP2PChannelWithUser", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::SIK_NetworkingLibrary_eventCloseP2PChannelWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execCloseP2PChannelWithUser)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIDRemote);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::CloseP2PChannelWithUser(Z_Param_SteamIDRemote,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function CloseP2PChannelWithUser

// Begin Class USIK_NetworkingLibrary Function CloseP2PSessionWithUser
struct Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics
{
	struct SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms
	{
		FSIK_SteamId SteamIDRemote;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
void Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "CloseP2PSessionWithUser", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::SIK_NetworkingLibrary_eventCloseP2PSessionWithUser_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execCloseP2PSessionWithUser)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIDRemote);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::CloseP2PSessionWithUser(Z_Param_SteamIDRemote);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function CloseP2PSessionWithUser

// Begin Class USIK_NetworkingLibrary Function GetP2PSessionState
struct Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics
{
	struct SIK_NetworkingLibrary_eventGetP2PSessionState_Parms
	{
		FSIK_SteamId SteamIDRemote;
		FSIK_P2PSessionState OutP2PSessionState;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutP2PSessionState;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventGetP2PSessionState_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_OutP2PSessionState = { "OutP2PSessionState", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventGetP2PSessionState_Parms, OutP2PSessionState), Z_Construct_UScriptStruct_FSIK_P2PSessionState, METADATA_PARAMS(0, nullptr) }; // 3000620589
void Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventGetP2PSessionState_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventGetP2PSessionState_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_OutP2PSessionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "GetP2PSessionState", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::SIK_NetworkingLibrary_eventGetP2PSessionState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::SIK_NetworkingLibrary_eventGetP2PSessionState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execGetP2PSessionState)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIDRemote);
	P_GET_STRUCT_REF(FSIK_P2PSessionState,Z_Param_Out_OutP2PSessionState);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::GetP2PSessionState(Z_Param_SteamIDRemote,Z_Param_Out_OutP2PSessionState);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function GetP2PSessionState

// Begin Class USIK_NetworkingLibrary Function IsP2PPacketAvailable
struct Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics
{
	struct SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms
	{
		int32 MsgSize;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_MsgSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_MsgSize = { "MsgSize", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms, MsgSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_MsgSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "IsP2PPacketAvailable", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::SIK_NetworkingLibrary_eventIsP2PPacketAvailable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execIsP2PPacketAvailable)
{
	P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_MsgSize);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::IsP2PPacketAvailable(Z_Param_Out_MsgSize,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function IsP2PPacketAvailable

// Begin Class USIK_NetworkingLibrary Function ReadP2PPacket
struct Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics
{
	struct SIK_NetworkingLibrary_eventReadP2PPacket_Parms
	{
		TArray<uint8> OutMsg;
		int32 MsgSize;
		FSIK_SteamId OutSteamIDRemote;
		int32 Channel;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_OutMsg_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OutMsg;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MsgSize;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OutSteamIDRemote;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutMsg_Inner = { "OutMsg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutMsg = { "OutMsg", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventReadP2PPacket_Parms, OutMsg), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_MsgSize = { "MsgSize", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventReadP2PPacket_Parms, MsgSize), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutSteamIDRemote = { "OutSteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventReadP2PPacket_Parms, OutSteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventReadP2PPacket_Parms, Channel), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventReadP2PPacket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventReadP2PPacket_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutMsg_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutMsg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_MsgSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_OutSteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "ReadP2PPacket", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::SIK_NetworkingLibrary_eventReadP2PPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::SIK_NetworkingLibrary_eventReadP2PPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execReadP2PPacket)
{
	P_GET_TARRAY_REF(uint8,Z_Param_Out_OutMsg);
	P_GET_PROPERTY(FIntProperty,Z_Param_MsgSize);
	P_GET_STRUCT_REF(FSIK_SteamId,Z_Param_Out_OutSteamIDRemote);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::ReadP2PPacket(Z_Param_Out_OutMsg,Z_Param_MsgSize,Z_Param_Out_OutSteamIDRemote,Z_Param_Channel);
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function ReadP2PPacket

// Begin Class USIK_NetworkingLibrary Function SendP2PPacket
struct Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics
{
	struct SIK_NetworkingLibrary_eventSendP2PPacket_Parms
	{
		FSIK_SteamId SteamIDRemote;
		TArray<uint8> Msg;
		int32 Channel;
		TEnumAsByte<ESIK_P2PSend> SendType;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Steam Integration Kit || SDK Functions || Networking" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Msg_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SteamIDRemote;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Msg_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Msg;
	static const UECodeGen_Private::FIntPropertyParams NewProp_Channel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SendType;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_SteamIDRemote = { "SteamIDRemote", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventSendP2PPacket_Parms, SteamIDRemote), Z_Construct_UScriptStruct_FSIK_SteamId, METADATA_PARAMS(0, nullptr) }; // 432135848
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Msg_Inner = { "Msg", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Msg = { "Msg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventSendP2PPacket_Parms, Msg), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Msg_MetaData), NewProp_Msg_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Channel = { "Channel", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventSendP2PPacket_Parms, Channel), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_SendType = { "SendType", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(SIK_NetworkingLibrary_eventSendP2PPacket_Parms, SendType), Z_Construct_UEnum_SteamIntegrationKit_ESIK_P2PSend, METADATA_PARAMS(0, nullptr) }; // 1502368676
void Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((SIK_NetworkingLibrary_eventSendP2PPacket_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(SIK_NetworkingLibrary_eventSendP2PPacket_Parms), &Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_SteamIDRemote,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Msg_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Msg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_Channel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_SendType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USIK_NetworkingLibrary, nullptr, "SendP2PPacket", nullptr, nullptr, Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::PropPointers), sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::SIK_NetworkingLibrary_eventSendP2PPacket_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::Function_MetaDataParams), Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::SIK_NetworkingLibrary_eventSendP2PPacket_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(USIK_NetworkingLibrary::execSendP2PPacket)
{
	P_GET_STRUCT(FSIK_SteamId,Z_Param_SteamIDRemote);
	P_GET_TARRAY_REF(uint8,Z_Param_Out_Msg);
	P_GET_PROPERTY(FIntProperty,Z_Param_Channel);
	P_GET_PROPERTY(FByteProperty,Z_Param_SendType);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=USIK_NetworkingLibrary::SendP2PPacket(Z_Param_SteamIDRemote,Z_Param_Out_Msg,Z_Param_Channel,ESIK_P2PSend(Z_Param_SendType));
	P_NATIVE_END;
}
// End Class USIK_NetworkingLibrary Function SendP2PPacket

// Begin Class USIK_NetworkingLibrary
void USIK_NetworkingLibrary::StaticRegisterNativesUSIK_NetworkingLibrary()
{
	UClass* Class = USIK_NetworkingLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AcceptP2PSessionWithUser", &USIK_NetworkingLibrary::execAcceptP2PSessionWithUser },
		{ "AllowP2PPacketRelay", &USIK_NetworkingLibrary::execAllowP2PPacketRelay },
		{ "CloseP2PChannelWithUser", &USIK_NetworkingLibrary::execCloseP2PChannelWithUser },
		{ "CloseP2PSessionWithUser", &USIK_NetworkingLibrary::execCloseP2PSessionWithUser },
		{ "GetP2PSessionState", &USIK_NetworkingLibrary::execGetP2PSessionState },
		{ "IsP2PPacketAvailable", &USIK_NetworkingLibrary::execIsP2PPacketAvailable },
		{ "ReadP2PPacket", &USIK_NetworkingLibrary::execReadP2PPacket },
		{ "SendP2PPacket", &USIK_NetworkingLibrary::execSendP2PPacket },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USIK_NetworkingLibrary);
UClass* Z_Construct_UClass_USIK_NetworkingLibrary_NoRegister()
{
	return USIK_NetworkingLibrary::StaticClass();
}
struct Z_Construct_UClass_USIK_NetworkingLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
		{ "ModuleRelativePath", "Functions/Networking/SIK_NetworkingLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_AcceptP2PSessionWithUser, "AcceptP2PSessionWithUser" }, // 894100460
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_AllowP2PPacketRelay, "AllowP2PPacketRelay" }, // 2197690987
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PChannelWithUser, "CloseP2PChannelWithUser" }, // 2047285402
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_CloseP2PSessionWithUser, "CloseP2PSessionWithUser" }, // 3054130383
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_GetP2PSessionState, "GetP2PSessionState" }, // 2027656528
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_IsP2PPacketAvailable, "IsP2PPacketAvailable" }, // 2077654270
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_ReadP2PPacket, "ReadP2PPacket" }, // 500933947
		{ &Z_Construct_UFunction_USIK_NetworkingLibrary_SendP2PPacket, "SendP2PPacket" }, // 2835906633
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USIK_NetworkingLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_USIK_NetworkingLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_SteamIntegrationKit,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_USIK_NetworkingLibrary_Statics::ClassParams = {
	&USIK_NetworkingLibrary::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_USIK_NetworkingLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_USIK_NetworkingLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_USIK_NetworkingLibrary()
{
	if (!Z_Registration_Info_UClass_USIK_NetworkingLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USIK_NetworkingLibrary.OuterSingleton, Z_Construct_UClass_USIK_NetworkingLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_USIK_NetworkingLibrary.OuterSingleton;
}
template<> STEAMINTEGRATIONKIT_API UClass* StaticClass<USIK_NetworkingLibrary>()
{
	return USIK_NetworkingLibrary::StaticClass();
}
USIK_NetworkingLibrary::USIK_NetworkingLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(USIK_NetworkingLibrary);
USIK_NetworkingLibrary::~USIK_NetworkingLibrary() {}
// End Class USIK_NetworkingLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_USIK_NetworkingLibrary, USIK_NetworkingLibrary::StaticClass, TEXT("USIK_NetworkingLibrary"), &Z_Registration_Info_UClass_USIK_NetworkingLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USIK_NetworkingLibrary), 2387975421U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_292685267(TEXT("/Script/SteamIntegrationKit"),
	Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Build_U5M_Mac_Sync_LocalBuilds_PluginTemp_HostProject_Plugins_SteamIntegrationKit_Source_SteamIntegrationKit_Functions_Networking_SIK_NetworkingLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
