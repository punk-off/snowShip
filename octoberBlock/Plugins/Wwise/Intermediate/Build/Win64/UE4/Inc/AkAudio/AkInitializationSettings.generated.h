// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkInitializationSettings_generated_h
#error "AkInitializationSettings.generated.h already included, missing '#pragma once' in AkInitializationSettings.h"
#endif
#define AKAUDIO_AkInitializationSettings_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_331_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettingsWithMultiCoreRendering>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_287_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedInitializationSettings>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_277_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommonInitializationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettingsWithSampleRate>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_244_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommonInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommonInitializationSettings>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_232_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithCommSelection_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommunicationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettingsWithCommSelection>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_221_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkCommunicationSettings Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettingsWithSystemInitialization>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_193_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkCommunicationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkCommunicationSettings>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_178_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAdvancedSpatialAudioSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAdvancedSpatialAudioSettings>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_141_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkSpatialAudioSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkSpatialAudioSettings>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h_114_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMainOutputSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMainOutputSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_InitializationSettings_AkInitializationSettings_h


#define FOREACH_ENUM_EAKCOMMSYSTEM(op) \
	op(EAkCommSystem::Socket) \
	op(EAkCommSystem::HTCS) 

enum class EAkCommSystem;
template<> AKAUDIO_API UEnum* StaticEnum<EAkCommSystem>();

#define FOREACH_ENUM_EAKCHANNELMASK(op) \
	op(EAkChannelMask::FrontLeft) \
	op(EAkChannelMask::FrontRight) \
	op(EAkChannelMask::FrontCenter) \
	op(EAkChannelMask::LowFrequency) \
	op(EAkChannelMask::BackLeft) \
	op(EAkChannelMask::BackRight) \
	op(EAkChannelMask::BackCenter) \
	op(EAkChannelMask::SideLeft) \
	op(EAkChannelMask::SideRight) \
	op(EAkChannelMask::Top) \
	op(EAkChannelMask::HeightFrontLeft) \
	op(EAkChannelMask::HeightFrontCenter) \
	op(EAkChannelMask::HeightFrontRight) \
	op(EAkChannelMask::HeightBackLeft) \
	op(EAkChannelMask::HeightBackCenter) \
	op(EAkChannelMask::HeightBackRight) 

enum class EAkChannelMask : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelMask>();

#define FOREACH_ENUM_EAKCHANNELCONFIGTYPE(op) \
	op(EAkChannelConfigType::Anonymous) \
	op(EAkChannelConfigType::Standard) \
	op(EAkChannelConfigType::Ambisonic) 

enum class EAkChannelConfigType;
template<> AKAUDIO_API UEnum* StaticEnum<EAkChannelConfigType>();

#define FOREACH_ENUM_EAKDIFFRACTIONFLAGS(op) \
	op(EAkDiffractionFlags::UseBuiltInParam) \
	op(EAkDiffractionFlags::UseObstruction) \
	op(EAkDiffractionFlags::CalcEmitterVirtualPosition) 

enum class EAkDiffractionFlags : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkDiffractionFlags>();

#define FOREACH_ENUM_EAKPANNINGRULE(op) \
	op(EAkPanningRule::Speakers) \
	op(EAkPanningRule::Headphones) 

enum class EAkPanningRule;
template<> AKAUDIO_API UEnum* StaticEnum<EAkPanningRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
