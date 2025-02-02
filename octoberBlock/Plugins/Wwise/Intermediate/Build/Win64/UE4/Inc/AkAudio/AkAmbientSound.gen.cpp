// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAmbientSound.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAmbientSound() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_AAkAmbientSound();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
class UScriptStruct* FAkAmbSoundCheckpointRecord::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAmbSoundCheckpointRecord>()
{
	return FAkAmbSoundCheckpointRecord::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAmbSoundCheckpointRecord(FAkAmbSoundCheckpointRecord::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAmbSoundCheckpointRecord"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAmbSoundCheckpointRecord")),new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAmbSoundCheckpointRecord;
	struct Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bCurrentlyPlaying_MetaData[];
#endif
		static void NewProp_bCurrentlyPlaying_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bCurrentlyPlaying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::Struct_MetaDataParams[] = {
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""FAkAmbSoundCheckpointRecord\n------------------------------------------------------------------------------------*/" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "FAkAmbSoundCheckpointRecord" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAmbSoundCheckpointRecord>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying_SetBit(void* Obj)
	{
		((FAkAmbSoundCheckpointRecord*)Obj)->bCurrentlyPlaying = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying = { "bCurrentlyPlaying", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkAmbSoundCheckpointRecord), &Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::NewProp_bCurrentlyPlaying,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAmbSoundCheckpointRecord",
		sizeof(FAkAmbSoundCheckpointRecord),
		alignof(FAkAmbSoundCheckpointRecord),
		Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAmbSoundCheckpointRecord"), sizeof(FAkAmbSoundCheckpointRecord), Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAmbSoundCheckpointRecord_Hash() { return 492138846U; }
	DEFINE_FUNCTION(AAkAmbientSound::execStopAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StopAmbientSound();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AAkAmbientSound::execStartAmbientSound)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->StartAmbientSound();
		P_NATIVE_END;
	}
	void AAkAmbientSound::StaticRegisterNativesAAkAmbientSound()
	{
		UClass* Class = AAkAmbientSound::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "StartAmbientSound", &AAkAmbientSound::execStartAmbientSound },
			{ "StopAmbientSound", &AAkAmbientSound::execStopAmbientSound },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/*\n\x09 * Start an Ak ambient sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "* Start an Ak ambient sound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StartAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/*\n\x09 * Stop an Ak ambient sound.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "* Stop an Ak ambient sound." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AAkAmbientSound, nullptr, "StopAmbientSound", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AAkAmbientSound_NoRegister()
	{
		return AAkAmbientSound::StaticClass();
	}
	struct Z_Construct_UClass_AAkAmbientSound_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoPost_MetaData[];
#endif
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerIsDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerIsDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkComponent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AAkAmbientSound_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AAkAmbientSound_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AAkAmbientSound_StartAmbientSound, "StartAmbientSound" }, // 2933477254
		{ &Z_Construct_UFunction_AAkAmbientSound_StopAmbientSound, "StopAmbientSound" }, // 3119649626
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkAmbientSound" },
		{ "BlueprintType", "true" },
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09""AAkAmbientSound\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Audio" },
		{ "IncludePath", "AkAmbientSound.h" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "AAkAmbientSound" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** Automatically post the associated AkAudioEvent on BeginPlay */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "Automatically post the associated AkAudioEvent on BeginPlay" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->AutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** Stop playback if the owner is destroyed */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "Stop playback if the owner is destroyed" },
	};
#endif
	void Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit(void* Obj)
	{
		((AAkAmbientSound*)Obj)->StopWhenOwnerIsDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed = { "StopWhenOwnerIsDestroyed", nullptr, (EPropertyFlags)0x0010020000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AAkAmbientSound), &Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData[] = {
		{ "Category", "AkAmbientSound" },
		{ "Comment", "/** AkComponent to handle playback */" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ShowOnlyInnerProperties", "" },
		{ "ToolTip", "AkComponent to handle playback" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent = { "AkComponent", nullptr, (EPropertyFlags)0x00100000000a001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAmbientSound, AkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Comment", "/** AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead */" },
		{ "ModuleRelativePath", "Classes/AkAmbientSound.h" },
		{ "ToolTip", "AkAudioEvent to play. Deprecated as UE4.7 integration: Use AkComponent->AkAudioEvent instead" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AAkAmbientSound, AkAudioEvent_DEPRECATED), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AutoPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_StopWhenOwnerIsDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AAkAmbientSound_Statics::NewProp_AkAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AAkAmbientSound_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AAkAmbientSound>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams = {
		&AAkAmbientSound::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AAkAmbientSound_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AAkAmbientSound()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AAkAmbientSound_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAkAmbientSound, 971702679);
	template<> AKAUDIO_API UClass* StaticClass<AAkAmbientSound>()
	{
		return AAkAmbientSound::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAkAmbientSound(Z_Construct_UClass_AAkAmbientSound, &AAkAmbientSound::StaticClass, TEXT("/Script/AkAudio"), TEXT("AAkAmbientSound"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAkAmbientSound);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
