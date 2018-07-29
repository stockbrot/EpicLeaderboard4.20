// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "EpicLeaderboard/Private/EpicLeaderboardPrivatePCH.h"
#include "EpicLeaderboard/Classes/EpicLeaderboardObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEpicLeaderboardObject() {}
// Cross Module References
	EPICLEADERBOARD_API UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_EpicLeaderboard();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister();
	EPICLEADERBOARD_API UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry();
	EPICLEADERBOARD_API UClass* Z_Construct_UClass_UEpicLeaderboardObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry();
	EPICLEADERBOARD_API UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics
	{
		struct _Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms
		{
			UEpicLeaderboardObject* Leaderboard;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Leaderboard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::NewProp_Leaderboard = { UE4CodeGen_Private::EPropertyClass::Object, "Leaderboard", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms, Leaderboard), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::NewProp_Leaderboard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_EpicLeaderboard, "EpicLeaderboardResponse__DelegateSignature", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00130000, sizeof(_Script_EpicLeaderboard_eventEpicLeaderboardResponse_Parms), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
class UScriptStruct* FEpicLeaderboardEntry::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern EPICLEADERBOARD_API uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FEpicLeaderboardEntry, Z_Construct_UPackage__Script_EpicLeaderboard(), TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC());
	}
	return Singleton;
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FEpicLeaderboardEntry(FEpicLeaderboardEntry::StaticStruct, TEXT("/Script/EpicLeaderboard"), TEXT("EpicLeaderboardEntry"), false, nullptr, nullptr);
static struct FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry
{
	FScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("EpicLeaderboardEntry")),new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>);
	}
} ScriptStruct_EpicLeaderboard_StaticRegisterNativesFEpicLeaderboardEntry;
	struct Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_meta_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_meta;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_country_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_country;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_score_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_score;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_username_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_username;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rank_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_rank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEpicLeaderboardEntry>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData[] = {
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta = { UE4CodeGen_Private::EPropertyClass::Str, "meta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000000, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, meta), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Map, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, Metadata), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000001, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country = { UE4CodeGen_Private::EPropertyClass::Str, "country", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, country), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score = { UE4CodeGen_Private::EPropertyClass::Str, "score", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, score), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username = { UE4CodeGen_Private::EPropertyClass::Str, "username", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, username), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData[] = {
		{ "Category", "EpicLeaderboardEntry" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank = { UE4CodeGen_Private::EPropertyClass::Int, "rank", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000005, 1, nullptr, STRUCT_OFFSET(FEpicLeaderboardEntry, rank), METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_meta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_Metadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_country,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_score,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_username,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::NewProp_rank,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
		nullptr,
		&NewStructOps,
		"EpicLeaderboardEntry",
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		sizeof(FEpicLeaderboardEntry),
		alignof(FEpicLeaderboardEntry),
		Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::PropPointers),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams, ARRAY_COUNT(Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEpicLeaderboardEntry()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC();
		UPackage* Outer = Z_Construct_UPackage__Script_EpicLeaderboard();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("EpicLeaderboardEntry"), sizeof(FEpicLeaderboardEntry), Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FEpicLeaderboardEntry_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FEpicLeaderboardEntry_CRC() { return 1509439994U; }
	void UEpicLeaderboardObject::StaticRegisterNativesUEpicLeaderboardObject()
	{
		UClass* Class = UEpicLeaderboardObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "CleanupName", &UEpicLeaderboardObject::execCleanupName },
			{ "GetEpicLeaderboard", &UEpicLeaderboardObject::execGetEpicLeaderboard },
			{ "GetLeaderboardEntries", &UEpicLeaderboardObject::execGetLeaderboardEntries },
			{ "SubmitEntry", &UEpicLeaderboardObject::execSubmitEntry },
			{ "SubmitEntryWithMetadata", &UEpicLeaderboardObject::execSubmitEntryWithMetadata },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics
	{
		struct EpicLeaderboardObject_eventCleanupName_Parms
		{
			FString name;
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Str, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_name = { UE4CodeGen_Private::EPropertyClass::Str, "name", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventCleanupName_Parms, name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::NewProp_name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Utilities" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Utilities" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "CleanupName", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EpicLeaderboardObject_eventCleanupName_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics
	{
		struct EpicLeaderboardObject_eventGetEpicLeaderboard_Parms
		{
			FString LeaderboardID;
			FString LeaderboardKey;
			UEpicLeaderboardObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardKey;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LeaderboardID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_ReturnValue = { UE4CodeGen_Private::EPropertyClass::Object, "ReturnValue", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000580, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, ReturnValue), Z_Construct_UClass_UEpicLeaderboardObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardKey = { UE4CodeGen_Private::EPropertyClass::Str, "LeaderboardKey", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardID = { UE4CodeGen_Private::EPropertyClass::Str, "LeaderboardID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms, LeaderboardID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::NewProp_LeaderboardID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Return the leaderboard for this ID\n@param LeaderboardID - The LeaderboardID from http://EpicLeaderboard.com.\n@param LeaderboardKey - The LeaderboardKey from http://EpicLeaderboard.com.\n@return The EpicLeaderboardObject for this LeaderboardID." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "GetEpicLeaderboard", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04022401, sizeof(EpicLeaderboardObject_eventGetEpicLeaderboard_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics
	{
		struct EpicLeaderboardObject_eventGetLeaderboardEntries_Parms
		{
			FString PlayerName;
			bool AroundPlayer;
		};
		static void NewProp_AroundPlayer_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AroundPlayer;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit(void* Obj)
	{
		((EpicLeaderboardObject_eventGetLeaderboardEntries_Parms*)Obj)->AroundPlayer = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer = { UE4CodeGen_Private::EPropertyClass::Bool, "AroundPlayer", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), &Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_AroundPlayer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Fetches entries for this leaderboard\n@param PlayerName - The player for which to return scores for.\n@param AroundPlayer - Return scores centered around player instead of the top scores." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "GetLeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicLeaderboardObject_eventGetLeaderboardEntries_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics
	{
		struct EpicLeaderboardObject_eventSubmitEntry_Parms
		{
			FString PlayerName;
			float PlayerScore;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerScore = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntry_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Submit a leaderboard entry\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "SubmitEntry", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04020401, sizeof(EpicLeaderboardObject_eventSubmitEntry_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics
	{
		struct EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms
		{
			FString PlayerName;
			float PlayerScore;
			TMap<FString,FString> Metadata;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Metadata_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_Metadata;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Metadata_ValueProp;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerScore;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_PlayerName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata = { UE4CodeGen_Private::EPropertyClass::Map, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000008000182, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, Metadata), METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata_Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_ValueProp = { UE4CodeGen_Private::EPropertyClass::Str, "Metadata", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000000000, 1, nullptr, 1, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerScore = { UE4CodeGen_Private::EPropertyClass::Float, "PlayerScore", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerScore), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerName = { UE4CodeGen_Private::EPropertyClass::Str, "PlayerName", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms, PlayerName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_Metadata_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerScore,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::NewProp_PlayerName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams[] = {
		{ "Category", "EpicLeaderboard|Leaderboard" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Submit a leaderboard entry with meta information attached\n@param PlayerName - The player for which this score should be submitted.\n@param PlayerScore - The score to be submitted.\n@param Metadata - The meta information to be submitted." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UEpicLeaderboardObject, "SubmitEntryWithMetadata", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x04420401, sizeof(EpicLeaderboardObject_eventSubmitEntryWithMetadata_Parms), Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UEpicLeaderboardObject_NoRegister()
	{
		return UEpicLeaderboardObject::StaticClass();
	}
	struct Z_Construct_UClass_UEpicLeaderboardObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerEntry_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PlayerEntry;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LeaderboardEntries_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_LeaderboardEntries;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LeaderboardEntries_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnFailure_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnFailure;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSuccess_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSuccess;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UEpicLeaderboardObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_EpicLeaderboard,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UEpicLeaderboardObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_CleanupName, "CleanupName" }, // 29823712
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetEpicLeaderboard, "GetEpicLeaderboard" }, // 1576347474
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_GetLeaderboardEntries, "GetLeaderboardEntries" }, // 1134081656
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntry, "SubmitEntry" }, // 3896585022
		{ &Z_Construct_UFunction_UEpicLeaderboardObject_SubmitEntryWithMetadata, "SubmitEntryWithMetadata" }, // 2078547660
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "EpicLeaderboardObject.h" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry = { UE4CodeGen_Private::EPropertyClass::Struct, "PlayerEntry", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, PlayerEntry), Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries = { UE4CodeGen_Private::EPropertyClass::Array, "LeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020005, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, LeaderboardEntries), METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_Inner = { UE4CodeGen_Private::EPropertyClass::Struct, "LeaderboardEntries", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0000000000020000, 1, nullptr, 0, Z_Construct_UScriptStruct_FEpicLeaderboardEntry, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key = { UE4CodeGen_Private::EPropertyClass::Str, "Key", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, Key), METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData[] = {
		{ "Category", "EpicLeaderboard|Properties" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Properties" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID = { UE4CodeGen_Private::EPropertyClass::Str, "ID", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000020015, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, ID), METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData[] = {
		{ "Category", "EpicLeaderboard|Delegates" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnFailure", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, OnFailure), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData[] = {
		{ "Category", "EpicLeaderboard|Delegates" },
		{ "ModuleRelativePath", "Classes/EpicLeaderboardObject.h" },
		{ "ToolTip", "Delegates" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess = { UE4CodeGen_Private::EPropertyClass::MulticastDelegate, "OnSuccess", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000010080000, 1, nullptr, STRUCT_OFFSET(UEpicLeaderboardObject, OnSuccess), Z_Construct_UDelegateFunction_EpicLeaderboard_EpicLeaderboardResponse__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_PlayerEntry,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_LeaderboardEntries_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_Key,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_ID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnFailure,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEpicLeaderboardObject_Statics::NewProp_OnSuccess,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UEpicLeaderboardObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEpicLeaderboardObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UEpicLeaderboardObject_Statics::ClassParams = {
		&UEpicLeaderboardObject::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UEpicLeaderboardObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UEpicLeaderboardObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UEpicLeaderboardObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UEpicLeaderboardObject, 3779924135);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UEpicLeaderboardObject(Z_Construct_UClass_UEpicLeaderboardObject, &UEpicLeaderboardObject::StaticClass, TEXT("/Script/EpicLeaderboard"), TEXT("UEpicLeaderboardObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UEpicLeaderboardObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
