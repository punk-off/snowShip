// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAudioSession_generated_h
#error "AkAudioSession.generated.h already included, missing '#pragma once' in AkAudioSession.h"
#endif
#define AKAUDIO_AkAudioSession_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAudioSession_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAudioSession>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkAudioSession_h


#define FOREACH_ENUM_EAKAUDIOSESSIONMODE(op) \
	op(EAkAudioSessionMode::Default) \
	op(EAkAudioSessionMode::VoiceChat) \
	op(EAkAudioSessionMode::GameChat) \
	op(EAkAudioSessionMode::VideoRecording) \
	op(EAkAudioSessionMode::Measurement) \
	op(EAkAudioSessionMode::MoviePlayback) \
	op(EAkAudioSessionMode::VideoChat) 

enum class EAkAudioSessionMode;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionMode>();

#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORYOPTIONS(op) \
	op(EAkAudioSessionCategoryOptions::MixWithOthers) \
	op(EAkAudioSessionCategoryOptions::DuckOthers) \
	op(EAkAudioSessionCategoryOptions::AllowBluetooth) \
	op(EAkAudioSessionCategoryOptions::DefaultToSpeaker) 

enum class EAkAudioSessionCategoryOptions : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategoryOptions>();

#define FOREACH_ENUM_EAKAUDIOSESSIONCATEGORY(op) \
	op(EAkAudioSessionCategory::Ambient) \
	op(EAkAudioSessionCategory::SoloAmbient) \
	op(EAkAudioSessionCategory::PlayAndRecord) 

enum class EAkAudioSessionCategory;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAudioSessionCategory>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
