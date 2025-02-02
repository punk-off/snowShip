// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTreeSelector() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTreeSelector();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
// End Cross Module References
	void UAkWwiseTreeSelector::StaticRegisterNativesUAkWwiseTreeSelector()
	{
	}
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector_NoRegister()
	{
		return UAkWwiseTreeSelector::StaticClass();
	}
	struct Z_Construct_UClass_UAkWwiseTreeSelector_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnItemDragged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnItemDragged;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnSelectionChanged_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnSelectionChanged;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkWwiseTreeSelector_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTreeSelector_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A widget that shows the Wwise tree items.\n*/" },
		{ "IncludePath", "AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ToolTip", "A widget that shows the Wwise tree items." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when an item is dragged from the wwise tree. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ToolTip", "Called when an item is dragged from the wwise tree." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged = { "OnItemDragged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkWwiseTreeSelector, OnItemDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the item selection changes. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTreeSelector.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkWwiseTreeSelector, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnItemDragged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTreeSelector_Statics::NewProp_OnSelectionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWwiseTreeSelector_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWwiseTreeSelector>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWwiseTreeSelector_Statics::ClassParams = {
		&UAkWwiseTreeSelector::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTreeSelector_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWwiseTreeSelector()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWwiseTreeSelector_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWwiseTreeSelector, 1825229924);
	template<> AKAUDIO_API UClass* StaticClass<UAkWwiseTreeSelector>()
	{
		return UAkWwiseTreeSelector::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTreeSelector(Z_Construct_UClass_UAkWwiseTreeSelector, &UAkWwiseTreeSelector::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTreeSelector"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTreeSelector);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
