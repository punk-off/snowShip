// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkAudioBank.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkAudioBank() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetBase();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAssetPlatformData_NoRegister();
// End Cross Module References
	void UAkAudioBank::StaticRegisterNativesUAkAudioBank()
	{
	}
	UClass* Z_Construct_UClass_UAkAudioBank_NoRegister()
	{
		return UAkAudioBank::StaticClass();
	}
	struct Z_Construct_UClass_UAkAudioBank_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CurrentLocalizedPlatformAssetData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CurrentLocalizedPlatformAssetData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocalizedPlatformAssetDataMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_LocalizedPlatformAssetDataMap;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_LocalizedPlatformAssetDataMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AutoLoad_MetaData[];
#endif
		static void NewProp_AutoLoad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoLoad;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkAudioBank_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkAssetBase,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "IncludePath", "AkAudioBank.h" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData = { "CurrentLocalizedPlatformAssetData", nullptr, (EPropertyFlags)0x0040000000002000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioBank, CurrentLocalizedPlatformAssetData), Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData[] = {
		{ "Category", "AkAudioBank" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0014000000020001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkAudioBank, LocalizedPlatformAssetDataMap), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp = { "LocalizedPlatformAssetDataMap_Key", nullptr, (EPropertyFlags)0x0000000000020001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp = { "LocalizedPlatformAssetDataMap", nullptr, (EPropertyFlags)0x0004000000020001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_UAkAssetPlatformData_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData[] = {
		{ "Category", "Behaviour" },
		{ "Comment", "// Only applicable when you don't use the new Event-Based Packaging workflow\n" },
		{ "ModuleRelativePath", "Classes/AkAudioBank.h" },
		{ "ToolTip", "Only applicable when you don't use the new Event-Based Packaging workflow" },
	};
#endif
	void Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit(void* Obj)
	{
		((UAkAudioBank*)Obj)->AutoLoad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad = { "AutoLoad", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkAudioBank), &Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkAudioBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_CurrentLocalizedPlatformAssetData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_LocalizedPlatformAssetDataMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkAudioBank_Statics::NewProp_AutoLoad,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkAudioBank_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkAudioBank>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkAudioBank_Statics::ClassParams = {
		&UAkAudioBank::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkAudioBank_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkAudioBank_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkAudioBank()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkAudioBank_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkAudioBank, 2741873654);
	template<> AKAUDIO_API UClass* StaticClass<UAkAudioBank>()
	{
		return UAkAudioBank::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkAudioBank(Z_Construct_UClass_UAkAudioBank, &UAkAudioBank::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkAudioBank"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkAudioBank);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
