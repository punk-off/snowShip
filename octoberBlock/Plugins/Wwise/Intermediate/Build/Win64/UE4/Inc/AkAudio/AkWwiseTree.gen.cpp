// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkWaapiUMG/Components/AkWwiseTree.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkWwiseTree() {}
// Cross Module References
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkWwiseTree();
	UMG_API UClass* Z_Construct_UClass_UWidget();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkWwiseObjectDetails();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemDragDetected_Parms
		{
			FGuid ItemDraggedID;
			FString ItemDraggedName;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ItemDraggedName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemDraggedID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName = { "ItemDraggedName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedID = { "ItemDraggedID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemDragDetected_Parms, ItemDraggedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::NewProp_ItemDraggedID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate type invoked when an item is being dragged. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "A delegate type invoked when an item is being dragged." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemDragDetected__DelegateSignature", nullptr, nullptr, sizeof(_Script_AkAudio_eventOnItemDragDetected_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics
	{
		struct _Script_AkAudio_eventOnItemSelectionChanged_Parms
		{
			FGuid ItemSelectedID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ItemSelectedID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::NewProp_ItemSelectedID = { "ItemSelectedID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(_Script_AkAudio_eventOnItemSelectionChanged_Parms, ItemSelectedID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::NewProp_ItemSelectedID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "Comment", "/** A delegate type invoked when a selection changes somewhere. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "A delegate type invoked when a selection changes somewhere." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_AkAudio, nullptr, "OnItemSelectionChanged__DelegateSignature", nullptr, nullptr, sizeof(_Script_AkAudio_eventOnItemSelectionChanged_Parms), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UAkWwiseTree::execSetSearchText)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_newText);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSearchText(Z_Param_newText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWwiseTree::execGetSearchText)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetSearchText();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkWwiseTree::execGetSelectedItem)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FAkWwiseObjectDetails*)Z_Param__Result=P_THIS->GetSelectedItem();
		P_NATIVE_END;
	}
	void UAkWwiseTree::StaticRegisterNativesUAkWwiseTree()
	{
		UClass* Class = UAkWwiseTree::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetSearchText", &UAkWwiseTree::execGetSearchText },
			{ "GetSelectedItem", &UAkWwiseTree::execGetSelectedItem },
			{ "SetSearchText", &UAkWwiseTree::execSetSearchText },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics
	{
		struct AkWwiseTree_eventGetSearchText_Parms
		{
			FString ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWwiseTree_eventGetSearchText_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** returns the current text of the searchBox */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "returns the current text of the searchBox" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, nullptr, "GetSearchText", nullptr, nullptr, sizeof(AkWwiseTree_eventGetSearchText_Parms), Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWwiseTree_GetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics
	{
		struct AkWwiseTree_eventGetSelectedItem_Parms
		{
			FAkWwiseObjectDetails ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWwiseTree_eventGetSelectedItem_Parms, ReturnValue), Z_Construct_UScriptStruct_FAkWwiseObjectDetails, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Returns all properties currently selected in the Wwise properties list */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "Returns all properties currently selected in the Wwise properties list" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, nullptr, "GetSelectedItem", nullptr, nullptr, sizeof(AkWwiseTree_eventGetSelectedItem_Parms), Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics
	{
		struct AkWwiseTree_eventSetSearchText_Parms
		{
			FString newText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_newText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_newText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::NewProp_newText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::NewProp_newText = { "newText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkWwiseTree_eventSetSearchText_Parms, newText), METADATA_PARAMS(Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::NewProp_newText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::NewProp_newText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::NewProp_newText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** sets the current text of the searchBox */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "sets the current text of the searchBox" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkWwiseTree, nullptr, "SetSearchText", nullptr, nullptr, sizeof(AkWwiseTree_eventSetSearchText_Parms), Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkWwiseTree_SetSearchText()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkWwiseTree_SetSearchText_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkWwiseTree_NoRegister()
	{
		return UAkWwiseTree::StaticClass();
	}
	struct Z_Construct_UClass_UAkWwiseTree_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
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
	UObject* (*const Z_Construct_UClass_UAkWwiseTree_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkWwiseTree_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkWwiseTree_GetSearchText, "GetSearchText" }, // 3641115238
		{ &Z_Construct_UFunction_UAkWwiseTree_GetSelectedItem, "GetSelectedItem" }, // 1261225538
		{ &Z_Construct_UFunction_UAkWwiseTree_SetSearchText, "SetSearchText" }, // 1511242328
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTree_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A widget that shows the Wwise tree items.\n*/" },
		{ "IncludePath", "AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "A widget that shows the Wwise tree items." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnItemDragged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when an item is dragged from the wwise tree. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "Called when an item is dragged from the wwise tree." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnItemDragged = { "OnItemDragged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkWwiseTree, OnItemDragged), Z_Construct_UDelegateFunction_AkAudio_OnItemDragDetected__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnItemDragged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnItemDragged_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnSelectionChanged_MetaData[] = {
		{ "Category", "Widget Event" },
		{ "Comment", "/** Called when the item selection changes. */" },
		{ "ModuleRelativePath", "Classes/AkWaapiUMG/Components/AkWwiseTree.h" },
		{ "ToolTip", "Called when the item selection changes." },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnSelectionChanged = { "OnSelectionChanged", nullptr, (EPropertyFlags)0x0010000010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkWwiseTree, OnSelectionChanged), Z_Construct_UDelegateFunction_AkAudio_OnItemSelectionChanged__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnSelectionChanged_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnSelectionChanged_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkWwiseTree_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnItemDragged,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkWwiseTree_Statics::NewProp_OnSelectionChanged,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkWwiseTree_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkWwiseTree>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkWwiseTree_Statics::ClassParams = {
		&UAkWwiseTree::StaticClass,
		"Editor",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkWwiseTree_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTree_Statics::PropPointers),
		0,
		0x00B000A2u,
		METADATA_PARAMS(Z_Construct_UClass_UAkWwiseTree_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkWwiseTree_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkWwiseTree()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkWwiseTree_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkWwiseTree, 976066354);
	template<> AKAUDIO_API UClass* StaticClass<UAkWwiseTree>()
	{
		return UAkWwiseTree::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkWwiseTree(Z_Construct_UClass_UAkWwiseTree, &UAkWwiseTree::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkWwiseTree"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkWwiseTree);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
