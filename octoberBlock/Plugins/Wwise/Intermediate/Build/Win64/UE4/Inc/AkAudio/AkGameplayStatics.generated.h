// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkMediaAsset;
class UObject;
class UAkAudioType;
struct FLatentActionInfo;
class UAkAudioBank;
class AActor;
enum class PanningRule : uint8;
enum class AkChannelConfiguration : uint8;
class UAkAuxBus;
class UAkComponent;
struct FAkChannelMask;
struct FTransform;
enum class AkMultiPositionType : uint8;
class UAkSwitchValue;
class UAkTrigger;
class UAkStateValue;
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UAkAudioEvent;
struct FVector;
struct FRotator;
enum class AkActionOnEventType : uint8;
enum class EAkCurveInterpolation : uint8;
struct FAkExternalSourceInfo;
class USceneComponent;
#ifdef AKAUDIO_AkGameplayStatics_generated_h
#error "AkGameplayStatics.generated.h already included, missing '#pragma once' in AkGameplayStatics.h"
#endif
#define AKAUDIO_AkGameplayStatics_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execGetAkComponent);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkMediaAssetUserData); \
	DECLARE_FUNCTION(execGetAkAudioTypeUserData); \
	DECLARE_FUNCTION(execSetCurrentAudioCultureAsync); \
	DECLARE_FUNCTION(execSetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetAvailableAudioCultures); \
	DECLARE_FUNCTION(execGetCurrentAudioCulture); \
	DECLARE_FUNCTION(execGetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execSetOcclusionScalingFactor); \
	DECLARE_FUNCTION(execStopProfilerCapture); \
	DECLARE_FUNCTION(execStartProfilerCapture); \
	DECLARE_FUNCTION(execStopOutputCapture); \
	DECLARE_FUNCTION(execAddOutputCaptureMarker); \
	DECLARE_FUNCTION(execStartOutputCapture); \
	DECLARE_FUNCTION(execUnloadBankByName); \
	DECLARE_FUNCTION(execUnloadBankAsync); \
	DECLARE_FUNCTION(execUnloadBank); \
	DECLARE_FUNCTION(execLoadInitBank); \
	DECLARE_FUNCTION(execLoadBanks); \
	DECLARE_FUNCTION(execLoadBankByName); \
	DECLARE_FUNCTION(execLoadBankAsync); \
	DECLARE_FUNCTION(execLoadBank); \
	DECLARE_FUNCTION(execClearBanks); \
	DECLARE_FUNCTION(execStopAllAmbientSounds); \
	DECLARE_FUNCTION(execStartAllAmbientSounds); \
	DECLARE_FUNCTION(execCancelEventCallback); \
	DECLARE_FUNCTION(execStopAll); \
	DECLARE_FUNCTION(execStopActor); \
	DECLARE_FUNCTION(execSetOcclusionRefreshInterval); \
	DECLARE_FUNCTION(execSetSpeakerAngles); \
	DECLARE_FUNCTION(execGetSpeakerAngles); \
	DECLARE_FUNCTION(execSetPanningRule); \
	DECLARE_FUNCTION(execSetBusConfig); \
	DECLARE_FUNCTION(execSetOutputBusVolume); \
	DECLARE_FUNCTION(execSetReflectionsOrder); \
	DECLARE_FUNCTION(execUseEarlyReflections); \
	DECLARE_FUNCTION(execUseReverbVolumes); \
	DECLARE_FUNCTION(execSetMultipleChannelMaskEmitterPositions); \
	DECLARE_FUNCTION(execSetMultipleChannelEmitterPositions); \
	DECLARE_FUNCTION(execSetMultiplePositions); \
	DECLARE_FUNCTION(execSetSwitch); \
	DECLARE_FUNCTION(execPostTrigger); \
	DECLARE_FUNCTION(execSetState); \
	DECLARE_FUNCTION(execGetRTPCValue); \
	DECLARE_FUNCTION(execSetRTPCValue); \
	DECLARE_FUNCTION(execSpawnAkComponentAtLocation); \
	DECLARE_FUNCTION(execExecuteActionOnPlayingID); \
	DECLARE_FUNCTION(execExecuteActionOnEvent); \
	DECLARE_FUNCTION(execPostEventAtLocationByName); \
	DECLARE_FUNCTION(execPostEventAtLocation); \
	DECLARE_FUNCTION(execPostEventByName); \
	DECLARE_FUNCTION(execPostAndWaitForEndOfEvent); \
	DECLARE_FUNCTION(execPostEvent); \
	DECLARE_FUNCTION(execPostEventAttached); \
	DECLARE_FUNCTION(execIsGame); \
	DECLARE_FUNCTION(execIsEditor); \
	DECLARE_FUNCTION(execGetAkComponent);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_INCLASS \
private: \
	static void StaticRegisterNativesUAkGameplayStatics(); \
	friend struct Z_Construct_UClass_UAkGameplayStatics_Statics; \
public: \
	DECLARE_CLASS(UAkGameplayStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGameplayStatics)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGameplayStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGameplayStatics(UAkGameplayStatics&&); \
	NO_API UAkGameplayStatics(const UAkGameplayStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGameplayStatics); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGameplayStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGameplayStatics)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_19_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h_22_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGameplayStatics."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGameplayStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
