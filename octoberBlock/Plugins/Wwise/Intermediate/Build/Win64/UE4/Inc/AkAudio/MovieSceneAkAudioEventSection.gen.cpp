// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/MovieSceneAkAudioEventSection.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMovieSceneAkAudioEventSection() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection();
	MOVIESCENE_API UClass* Z_Construct_UClass_UMovieSceneSection();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
// End Cross Module References
	void UMovieSceneAkAudioEventSection::StaticRegisterNativesUMovieSceneAkAudioEventSection()
	{
	}
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection_NoRegister()
	{
		return UMovieSceneAkAudioEventSection::StaticClass();
	}
	struct Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDurationSourceID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MaxDurationSourceID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSourceDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxSourceDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopAtSectionEnd_MetaData[];
#endif
		static void NewProp_StopAtSectionEnd_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopAtSectionEnd;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ScrubTailLengthMs_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_ScrubTailLengthMs;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RetriggerEvent_MetaData[];
#endif
		static void NewProp_RetriggerEvent_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RetriggerEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Event_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Event;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UMovieSceneSection,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n* A single floating point section that triggers a Wwise event.\n*/" },
		{ "IncludePath", "MovieSceneAkAudioEventSection.h" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "A single floating point section that triggers a Wwise event." },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID_MetaData[] = {
		{ "Comment", "/** The ID of the longest Wwise source that the Wwise event contains. */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "The ID of the longest Wwise source that the Wwise event contains." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID = { "MaxDurationSourceID", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxDurationSourceID), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** The duration of the longest Wwise source that the Wwise event contains (taking trim into account). */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "The duration of the longest Wwise source that the Wwise event contains (taking trim into account)." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration = { "MaxSourceDuration", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, MaxSourceDuration), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** The name of the AkAudioEvent represented by this section */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "The name of the AkAudioEvent represented by this section" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0040040000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, EventName), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer. */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "Indicates whether the Wwise event should be stopped when the section stops in the Unreal Sequencer." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_SetBit(void* Obj)
	{
		((UMovieSceneAkAudioEventSection*)Obj)->StopAtSectionEnd = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd = { "StopAtSectionEnd", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "ClampMax", "500" },
		{ "ClampMin", "30" },
		{ "Comment", "/* The length, in ms, of scrub snippets */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "The length, in ms, of scrub snippets" },
		{ "UIMax", "500" },
		{ "UIMin", "30" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs = { "ScrubTailLengthMs", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, ScrubTailLengthMs), METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/* Indicates whether the Wwise event will be re-triggered when the end is reached. */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "ToolTip", "Indicates whether the Wwise event will be re-triggered when the end is reached." },
	};
#endif
	void Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_SetBit(void* Obj)
	{
		((UMovieSceneAkAudioEventSection*)Obj)->RetriggerEvent = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent = { "RetriggerEvent", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UMovieSceneAkAudioEventSection), &Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_SetBit, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event_MetaData[] = {
		{ "Category", "AkAudioEvent" },
		{ "Comment", "/** The AkAudioEvent represented by this section */" },
		{ "ModuleRelativePath", "Classes/MovieSceneAkAudioEventSection.h" },
		{ "NoResetToDefault", "" },
		{ "ToolTip", "The AkAudioEvent represented by this section" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event = { "Event", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UMovieSceneAkAudioEventSection, Event), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxDurationSourceID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_MaxSourceDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_StopAtSectionEnd,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_ScrubTailLengthMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_RetriggerEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::NewProp_Event,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMovieSceneAkAudioEventSection>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::ClassParams = {
		&UMovieSceneAkAudioEventSection::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::PropPointers),
		0,
		0x002800A0u,
		METADATA_PARAMS(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UMovieSceneAkAudioEventSection()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UMovieSceneAkAudioEventSection_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UMovieSceneAkAudioEventSection, 2521420567);
	template<> AKAUDIO_API UClass* StaticClass<UMovieSceneAkAudioEventSection>()
	{
		return UMovieSceneAkAudioEventSection::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UMovieSceneAkAudioEventSection(Z_Construct_UClass_UMovieSceneAkAudioEventSection, &UMovieSceneAkAudioEventSection::StaticClass, TEXT("/Script/AkAudio"), TEXT("UMovieSceneAkAudioEventSection"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UMovieSceneAkAudioEventSection);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
