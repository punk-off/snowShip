// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGameplayStatics.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameplayStatics() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameplayStatics();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkCurveInterpolation();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkActionOnEventType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioType_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_EAttachLocation();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkMediaAsset_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioBank_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkChannelConfiguration();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMultiPositionType();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkChannelMask();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_PanningRule();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkStateValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkMediaAssetUserData)
	{
		P_GET_OBJECT(UAkMediaAsset,Z_Param_Instance);
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UAkGameplayStatics::GetAkMediaAssetUserData(Z_Param_Instance,Z_Param_Type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkAudioTypeUserData)
	{
		P_GET_OBJECT(UAkAudioType,Z_Param_Instance);
		P_GET_OBJECT(UClass,Z_Param_Type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UAkGameplayStatics::GetAkAudioTypeUserData(Z_Param_Instance,Z_Param_Type);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCultureAsync)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_Completed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCultureAsync(Z_Param_AudioCulture,FOnSetCurrentAudioCultureCallback(Z_Param_Out_Completed));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetCurrentAudioCulture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_AudioCulture);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetCurrentAudioCulture(Z_Param_AudioCulture,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAvailableAudioCultures)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FString>*)Z_Param__Result=UAkGameplayStatics::GetAvailableAudioCultures();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetCurrentAudioCulture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UAkGameplayStatics::GetCurrentAudioCulture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetOcclusionScalingFactor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=UAkGameplayStatics::GetOcclusionScalingFactor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOcclusionScalingFactor)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ScalingFactor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOcclusionScalingFactor(Z_Param_ScalingFactor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopProfilerCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopProfilerCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartProfilerCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartProfilerCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopOutputCapture)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopOutputCapture();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execAddOutputCaptureMarker)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_MarkerText);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::AddOutputCaptureMarker(Z_Param_MarkerText);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartOutputCapture)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_Filename);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartOutputCapture(Z_Param_Filename);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadBankByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadBankByName(Z_Param_BankName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadBankAsync)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_BankUnloadedCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadBankAsync(Z_Param_Bank,FOnAkBankCallback(Z_Param_Out_BankUnloadedCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUnloadBank)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank);
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UnloadBank(Z_Param_Bank,Z_Param_BankName,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadInitBank)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadInitBank();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadBanks)
	{
		P_GET_TARRAY_REF(UAkAudioBank*,Z_Param_Out_SoundBanks);
		P_GET_UBOOL(Z_Param_SynchronizeSoundBanks);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadBanks(Z_Param_Out_SoundBanks,Z_Param_SynchronizeSoundBanks);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadBankByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadBankByName(Z_Param_BankName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadBankAsync)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_BankLoadedCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadBankAsync(Z_Param_Bank,FOnAkBankCallback(Z_Param_Out_BankLoadedCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execLoadBank)
	{
		P_GET_OBJECT(UAkAudioBank,Z_Param_Bank);
		P_GET_PROPERTY(FStrProperty,Z_Param_BankName);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::LoadBank(Z_Param_Bank,Z_Param_BankName,Z_Param_LatentInfo,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execClearBanks)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ClearBanks();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStartAllAmbientSounds)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StartAllAmbientSounds(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execCancelEventCallback)
	{
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::CancelEventCallback(FOnAkPostEventCallback(Z_Param_Out_PostEventCallback));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopAll)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopAll();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execStopActor)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::StopActor(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOcclusionRefreshInterval)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RefreshInterval);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOcclusionRefreshInterval(Z_Param_RefreshInterval,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_HeightAngle,Z_Param_DeviceShareset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetSpeakerAngles)
	{
		P_GET_TARRAY_REF(float,Z_Param_Out_SpeakerAngles);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_HeightAngle);
		P_GET_PROPERTY(FStrProperty,Z_Param_DeviceShareset);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetSpeakerAngles(Z_Param_Out_SpeakerAngles,Z_Param_Out_HeightAngle,Z_Param_DeviceShareset);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetPanningRule)
	{
		P_GET_ENUM(PanningRule,Z_Param_PanRule);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetPanningRule(PanningRule(Z_Param_PanRule));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetBusConfig)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_BusName);
		P_GET_ENUM(AkChannelConfiguration,Z_Param_ChannelConfiguration);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetBusConfig(Z_Param_BusName,AkChannelConfiguration(Z_Param_ChannelConfiguration));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetOutputBusVolume)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusVolume);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetOutputBusVolume(Z_Param_BusVolume,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetReflectionsOrder)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_UBOOL(Z_Param_RefreshPaths);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetReflectionsOrder(Z_Param_Order,Z_Param_RefreshPaths);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUseEarlyReflections)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus);
		P_GET_PROPERTY(FIntProperty,Z_Param_Order);
		P_GET_PROPERTY(FFloatProperty,Z_Param_BusSendGain);
		P_GET_PROPERTY(FFloatProperty,Z_Param_MaxPathLength);
		P_GET_UBOOL(Z_Param_SpotReflectors);
		P_GET_PROPERTY(FStrProperty,Z_Param_AuxBusName);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UseEarlyReflections(Z_Param_Actor,Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execUseReverbVolumes)
	{
		P_GET_UBOOL(Z_Param_inUseReverbVolumes);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::UseReverbVolumes(Z_Param_inUseReverbVolumes,Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FAkChannelMask,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelMaskEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultipleChannelEmitterPositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(AkChannelConfiguration,Z_Param_ChannelMasks);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultipleChannelEmitterPositions(Z_Param_GameObjectAkComponent,Z_Param_ChannelMasks,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetMultiplePositions)
	{
		P_GET_OBJECT(UAkComponent,Z_Param_GameObjectAkComponent);
		P_GET_TARRAY(FTransform,Z_Param_Positions);
		P_GET_ENUM(AkMultiPositionType,Z_Param_MultiPositionType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetMultiplePositions(Z_Param_GameObjectAkComponent,Z_Param_Positions,AkMultiPositionType(Z_Param_MultiPositionType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetSwitch)
	{
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_SwitchState);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetSwitch(Z_Param_SwitchValue,Z_Param_Actor,Z_Param_SwitchGroup,Z_Param_SwitchState);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostTrigger)
	{
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_Trigger);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostTrigger(Z_Param_TriggerValue,Z_Param_Actor,Z_Param_Trigger);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetState)
	{
		P_GET_OBJECT(UAkStateValue,Z_Param_StateValue);
		P_GET_PROPERTY(FNameProperty,Z_Param_StateGroup);
		P_GET_PROPERTY(FNameProperty,Z_Param_State);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetState(Z_Param_StateValue,Z_Param_StateGroup,Z_Param_State);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType);
		P_GET_PROPERTY_REF(FFloatProperty,Z_Param_Out_Value);
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::GetRTPCValue(Z_Param_RTPCValue,Z_Param_PlayingID,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSetRTPCValue)
	{
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Value);
		P_GET_PROPERTY(FIntProperty,Z_Param_InterpolationTimeMs);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_RTPC);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_Actor,Z_Param_RTPC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execSpawnAkComponentAtLocation)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_UBOOL(Z_Param_AutoPost);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_UBOOL(Z_Param_AutoDestroy);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::SpawnAkComponentAtLocation(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_AutoPost,Z_Param_EventName,Z_Param_AutoDestroy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execExecuteActionOnPlayingID)
	{
		P_GET_ENUM(AkActionOnEventType,Z_Param_ActionType);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionDuration);
		P_GET_ENUM(EAkCurveInterpolation,Z_Param_FadeCurve);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ExecuteActionOnPlayingID(AkActionOnEventType(Z_Param_ActionType),Z_Param_PlayingID,Z_Param_TransitionDuration,EAkCurveInterpolation(Z_Param_FadeCurve));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execExecuteActionOnEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_ENUM(AkActionOnEventType,Z_Param_ActionType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_TransitionDuration);
		P_GET_ENUM(EAkCurveInterpolation,Z_Param_FadeCurve);
		P_GET_PROPERTY(FIntProperty,Z_Param_PlayingID);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::ExecuteActionOnEvent(Z_Param_AkEvent,AkActionOnEventType(Z_Param_ActionType),Z_Param_Actor,Z_Param_TransitionDuration,EAkCurveInterpolation(Z_Param_FadeCurve),Z_Param_PlayingID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocationByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostEventAtLocationByName(Z_Param_EventName,Z_Param_Location,Z_Param_Orientation,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAtLocation)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_STRUCT(FRotator,Z_Param_Orientation);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAtLocation(Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation,Z_Param_EventName,Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventByName)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_FINISH;
		P_NATIVE_BEGIN;
		UAkGameplayStatics::PostEventByName(Z_Param_EventName,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostAndWaitForEndOfEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostAndWaitForEndOfEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_Out_ExternalSources,Z_Param_EventName,Z_Param_LatentInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEvent)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FIntProperty,Z_Param_CallbackMask);
		P_GET_PROPERTY_REF(FDelegateProperty,Z_Param_Out_PostEventCallback);
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEvent(Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execPostEventAttached)
	{
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed);
		P_GET_PROPERTY(FStrProperty,Z_Param_EventName);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=UAkGameplayStatics::PostEventAttached(Z_Param_AkEvent,Z_Param_Actor,Z_Param_AttachPointName,Z_Param_bStopWhenAttachedToDestroyed,Z_Param_EventName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsGame)
	{
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsGame(Z_Param_WorldContextObject);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execIsEditor)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UAkGameplayStatics::IsEditor();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UAkGameplayStatics::execGetAkComponent)
	{
		P_GET_OBJECT(USceneComponent,Z_Param_AttachToComponent);
		P_GET_UBOOL_REF(Z_Param_Out_ComponentCreated);
		P_GET_PROPERTY(FNameProperty,Z_Param_AttachPointName);
		P_GET_STRUCT(FVector,Z_Param_Location);
		P_GET_PROPERTY(FByteProperty,Z_Param_LocationType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UAkComponent**)Z_Param__Result=UAkGameplayStatics::GetAkComponent(Z_Param_AttachToComponent,Z_Param_Out_ComponentCreated,Z_Param_AttachPointName,Z_Param_Location,EAttachLocation::Type(Z_Param_LocationType));
		P_NATIVE_END;
	}
	void UAkGameplayStatics::StaticRegisterNativesUAkGameplayStatics()
	{
		UClass* Class = UAkGameplayStatics::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddOutputCaptureMarker", &UAkGameplayStatics::execAddOutputCaptureMarker },
			{ "CancelEventCallback", &UAkGameplayStatics::execCancelEventCallback },
			{ "ClearBanks", &UAkGameplayStatics::execClearBanks },
			{ "ExecuteActionOnEvent", &UAkGameplayStatics::execExecuteActionOnEvent },
			{ "ExecuteActionOnPlayingID", &UAkGameplayStatics::execExecuteActionOnPlayingID },
			{ "GetAkAudioTypeUserData", &UAkGameplayStatics::execGetAkAudioTypeUserData },
			{ "GetAkComponent", &UAkGameplayStatics::execGetAkComponent },
			{ "GetAkMediaAssetUserData", &UAkGameplayStatics::execGetAkMediaAssetUserData },
			{ "GetAvailableAudioCultures", &UAkGameplayStatics::execGetAvailableAudioCultures },
			{ "GetCurrentAudioCulture", &UAkGameplayStatics::execGetCurrentAudioCulture },
			{ "GetOcclusionScalingFactor", &UAkGameplayStatics::execGetOcclusionScalingFactor },
			{ "GetRTPCValue", &UAkGameplayStatics::execGetRTPCValue },
			{ "GetSpeakerAngles", &UAkGameplayStatics::execGetSpeakerAngles },
			{ "IsEditor", &UAkGameplayStatics::execIsEditor },
			{ "IsGame", &UAkGameplayStatics::execIsGame },
			{ "LoadBank", &UAkGameplayStatics::execLoadBank },
			{ "LoadBankAsync", &UAkGameplayStatics::execLoadBankAsync },
			{ "LoadBankByName", &UAkGameplayStatics::execLoadBankByName },
			{ "LoadBanks", &UAkGameplayStatics::execLoadBanks },
			{ "LoadInitBank", &UAkGameplayStatics::execLoadInitBank },
			{ "PostAndWaitForEndOfEvent", &UAkGameplayStatics::execPostAndWaitForEndOfEvent },
			{ "PostEvent", &UAkGameplayStatics::execPostEvent },
			{ "PostEventAtLocation", &UAkGameplayStatics::execPostEventAtLocation },
			{ "PostEventAtLocationByName", &UAkGameplayStatics::execPostEventAtLocationByName },
			{ "PostEventAttached", &UAkGameplayStatics::execPostEventAttached },
			{ "PostEventByName", &UAkGameplayStatics::execPostEventByName },
			{ "PostTrigger", &UAkGameplayStatics::execPostTrigger },
			{ "SetBusConfig", &UAkGameplayStatics::execSetBusConfig },
			{ "SetCurrentAudioCulture", &UAkGameplayStatics::execSetCurrentAudioCulture },
			{ "SetCurrentAudioCultureAsync", &UAkGameplayStatics::execSetCurrentAudioCultureAsync },
			{ "SetMultipleChannelEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelEmitterPositions },
			{ "SetMultipleChannelMaskEmitterPositions", &UAkGameplayStatics::execSetMultipleChannelMaskEmitterPositions },
			{ "SetMultiplePositions", &UAkGameplayStatics::execSetMultiplePositions },
			{ "SetOcclusionRefreshInterval", &UAkGameplayStatics::execSetOcclusionRefreshInterval },
			{ "SetOcclusionScalingFactor", &UAkGameplayStatics::execSetOcclusionScalingFactor },
			{ "SetOutputBusVolume", &UAkGameplayStatics::execSetOutputBusVolume },
			{ "SetPanningRule", &UAkGameplayStatics::execSetPanningRule },
			{ "SetReflectionsOrder", &UAkGameplayStatics::execSetReflectionsOrder },
			{ "SetRTPCValue", &UAkGameplayStatics::execSetRTPCValue },
			{ "SetSpeakerAngles", &UAkGameplayStatics::execSetSpeakerAngles },
			{ "SetState", &UAkGameplayStatics::execSetState },
			{ "SetSwitch", &UAkGameplayStatics::execSetSwitch },
			{ "SpawnAkComponentAtLocation", &UAkGameplayStatics::execSpawnAkComponentAtLocation },
			{ "StartAllAmbientSounds", &UAkGameplayStatics::execStartAllAmbientSounds },
			{ "StartOutputCapture", &UAkGameplayStatics::execStartOutputCapture },
			{ "StartProfilerCapture", &UAkGameplayStatics::execStartProfilerCapture },
			{ "StopActor", &UAkGameplayStatics::execStopActor },
			{ "StopAll", &UAkGameplayStatics::execStopAll },
			{ "StopAllAmbientSounds", &UAkGameplayStatics::execStopAllAmbientSounds },
			{ "StopOutputCapture", &UAkGameplayStatics::execStopOutputCapture },
			{ "StopProfilerCapture", &UAkGameplayStatics::execStopProfilerCapture },
			{ "UnloadBank", &UAkGameplayStatics::execUnloadBank },
			{ "UnloadBankAsync", &UAkGameplayStatics::execUnloadBankAsync },
			{ "UnloadBankByName", &UAkGameplayStatics::execUnloadBankByName },
			{ "UseEarlyReflections", &UAkGameplayStatics::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkGameplayStatics::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics
	{
		struct AkGameplayStatics_eventAddOutputCaptureMarker_Parms
		{
			FString MarkerText;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MarkerText_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_MarkerText;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText = { "MarkerText", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventAddOutputCaptureMarker_Parms, MarkerText), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::NewProp_MarkerText,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
		{ "Comment", "/**\n\x09 * Add text marker in output capture file.\n\x09 * @param MarkerText - The name text to put in the marker.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Add text marker in output capture file.\n@param MarkerText - The name text to put in the marker." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "AddOutputCaptureMarker", nullptr, nullptr, sizeof(AkGameplayStatics_eventAddOutputCaptureMarker_Parms), Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics
	{
		struct AkGameplayStatics_eventCancelEventCallback_Parms
		{
			FScriptDelegate PostEventCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventCancelEventCallback_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::NewProp_PostEventCallback,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09 * Cancels an Event callback\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Cancels an Event callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "CancelEventCallback", nullptr, nullptr, sizeof(AkGameplayStatics_eventCancelEventCallback_Parms), Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/**\n\x09 * Clear all loaded banks\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Clear all loaded banks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ClearBanks", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ClearBanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ClearBanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics
	{
		struct AkGameplayStatics_eventExecuteActionOnEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AkActionOnEventType ActionType;
			AActor* Actor;
			int32 TransitionDuration;
			EAkCurveInterpolation FadeCurve;
			int32 PlayingID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionDuration;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, TransitionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, ActionType), Z_Construct_UEnum_AkAudio_AkActionOnEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_FadeCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_TransitionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_ActionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Execute action on event attached to and following the root component of the specified actor\n\x09 * @param AkEvent - Wwise Event to act upon.\n\x09 * @param ActionType - Which action to do.\n\x09 * @param Actor - Which actor to use.\n\x09 * @param TransitionDuration - Transition duration in milliseconds.\n\x09 * @param FadeCurve - The interpolation curve of the transition.\n\x09 * @param PlayingID - Use the return value of a Post Event to act only on this specific instance of an event.\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_PlayingID", "0" },
		{ "CPP_Default_TransitionDuration", "0" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Execute action on event attached to and following the root component of the specified actor\n@param AkEvent - Wwise Event to act upon.\n@param ActionType - Which action to do.\n@param Actor - Which actor to use.\n@param TransitionDuration - Transition duration in milliseconds.\n@param FadeCurve - The interpolation curve of the transition.\n@param PlayingID - Use the return value of a Post Event to act only on this specific instance of an event." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ExecuteActionOnEvent", nullptr, nullptr, sizeof(AkGameplayStatics_eventExecuteActionOnEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics
	{
		struct AkGameplayStatics_eventExecuteActionOnPlayingID_Parms
		{
			AkActionOnEventType ActionType;
			int32 PlayingID;
			int32 TransitionDuration;
			EAkCurveInterpolation FadeCurve;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_FadeCurve;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_FadeCurve_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_TransitionDuration;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ActionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ActionType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve = { "FadeCurve", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, FadeCurve), Z_Construct_UEnum_AkAudio_EAkCurveInterpolation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_TransitionDuration = { "TransitionDuration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, TransitionDuration), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType = { "ActionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms, ActionType), Z_Construct_UEnum_AkAudio_AkActionOnEventType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_FadeCurve_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_TransitionDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::NewProp_ActionType_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Execute action on specific playing ID\n\x09 * @param ActionType - Which action to do.\n\x09 * @param PlayingID - Use the return value of a Post Event to act only on this specific instance of an event.\n\x09 * @param TransitionDuration - Transition duration in milliseconds.\n\x09 * @param FadeCurve - The interpolation curve of the transition.\n\x09 */" },
		{ "CPP_Default_FadeCurve", "Linear" },
		{ "CPP_Default_TransitionDuration", "0" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Execute action on specific playing ID\n@param ActionType - Which action to do.\n@param PlayingID - Use the return value of a Post Event to act only on this specific instance of an event.\n@param TransitionDuration - Transition duration in milliseconds.\n@param FadeCurve - The interpolation curve of the transition." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "ExecuteActionOnPlayingID", nullptr, nullptr, sizeof(AkGameplayStatics_eventExecuteActionOnPlayingID_Parms), Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics
	{
		struct AkGameplayStatics_eventGetAkAudioTypeUserData_Parms
		{
			const UAkAudioType* Instance;
			const UClass* Type;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms, Instance), Z_Construct_UClass_UAkAudioType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkAudioTypeUserData", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetAkAudioTypeUserData_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics
	{
		struct AkGameplayStatics_eventGetAkComponent_Parms
		{
			USceneComponent* AttachToComponent;
			bool ComponentCreated;
			FName AttachPointName;
			FVector Location;
			TEnumAsByte<EAttachLocation::Type> LocationType;
			UAkComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_LocationType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static void NewProp_ComponentCreated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ComponentCreated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttachToComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AttachToComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType = { "LocationType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, LocationType), Z_Construct_UEnum_Engine_EAttachLocation, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventGetAkComponent_Parms*)Obj)->ComponentCreated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated = { "ComponentCreated", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventGetAkComponent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent = { "AttachToComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkComponent_Parms, AttachToComponent), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_LocationType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_ComponentCreated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::NewProp_AttachToComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Get an AkComponent attached to and following the specified component. \n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at.\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_Location", "" },
		{ "CPP_Default_LocationType", "KeepRelativeOffset" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Get an AkComponent attached to and following the specified component.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkComponent", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetAkComponent_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics
	{
		struct AkGameplayStatics_eventGetAkMediaAssetUserData_Parms
		{
			const UAkMediaAsset* Instance;
			const UClass* Type;
			UObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Type_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Type;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Instance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Instance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkMediaAssetUserData_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Type_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Type = { "Type", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkMediaAssetUserData_Parms, Type), Z_Construct_UClass_UObject_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Type_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Type_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Instance_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Instance = { "Instance", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAkMediaAssetUserData_Parms, Instance), Z_Construct_UClass_UAkMediaAsset_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Instance_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Instance_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Type,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::NewProp_Instance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAkMediaAssetUserData", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetAkMediaAssetUserData_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics
	{
		struct AkGameplayStatics_eventGetAvailableAudioCultures_Parms
		{
			TArray<FString> ReturnValue;
		};
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetAvailableAudioCultures_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::NewProp_ReturnValue_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetAvailableAudioCultures", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetAvailableAudioCultures_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventGetCurrentAudioCulture_Parms
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
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetCurrentAudioCulture_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetCurrentAudioCulture", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetCurrentAudioCulture_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics
	{
		struct AkGameplayStatics_eventGetOcclusionScalingFactor_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetOcclusionScalingFactor_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09* Gets the occlusion scaling factor.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Gets the occlusion scaling factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetOcclusionScalingFactor", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetOcclusionScalingFactor_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			int32 PlayingID;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			AActor* Actor;
			FName RTPC;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::NewProp_RTPCValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "7" },
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09* Gets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Gets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetRTPCValue", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetRTPCValue_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventGetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceShareset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceShareset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareset = { "DeviceShareset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, DeviceShareset), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventGetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_DeviceShareset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09 * Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n\x09 * @param DeviceShareset Shareset for which to get the angles.\n\x09 *\n\x09 */" },
		{ "CPP_Default_DeviceShareset", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Gets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Returned array of loudspeaker pair angles, in degrees relative to azimuth [0,180].\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90].\n@param DeviceShareset Shareset for which to get the angles." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "GetSpeakerAngles", nullptr, nullptr, sizeof(AkGameplayStatics_eventGetSpeakerAngles_Parms), Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics
	{
		struct AkGameplayStatics_eventIsEditor_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsEditor_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsEditor", nullptr, nullptr, sizeof(AkGameplayStatics_eventIsEditor_Parms), Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsEditor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsEditor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics
	{
		struct AkGameplayStatics_eventIsGame_Parms
		{
			UObject* WorldContextObject;
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventIsGame_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventIsGame_Parms), &Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventIsGame_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "IsGame", nullptr, nullptr, sizeof(AkGameplayStatics_eventIsGame_Parms), Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_IsGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_IsGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics
	{
		struct AkGameplayStatics_eventLoadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_BankName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBank_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_BankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::NewProp_Bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09 * Loads a bank.\n\x09 * @param Bank - The bank to load.\n\x09 *\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Loads a bank.\n* @param Bank - The bank to load." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadBank", nullptr, nullptr, sizeof(AkGameplayStatics_eventLoadBank_Parms), Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics
	{
		struct AkGameplayStatics_eventLoadBankAsync_Parms
		{
			UAkAudioBank* Bank;
			FScriptDelegate BankLoadedCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankLoadedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BankLoadedCallback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_BankLoadedCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_BankLoadedCallback = { "BankLoadedCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBankAsync_Parms, BankLoadedCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_BankLoadedCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_BankLoadedCallback_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBankAsync_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_BankLoadedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::NewProp_Bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09* Loads a bank asynchronously from Blueprint.\n\x09* @param Bank - The bank to load.\n\x09* @param BankLoadedCallback - Blueprint Delegate to call upon completion.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Loads a bank asynchronously from Blueprint.\n* @param Bank - The bank to load.\n* @param BankLoadedCallback - Blueprint Delegate to call upon completion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadBankAsync", nullptr, nullptr, sizeof(AkGameplayStatics_eventLoadBankAsync_Parms), Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics
	{
		struct AkGameplayStatics_eventLoadBankByName_Parms
		{
			FString BankName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBankByName_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::NewProp_BankName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09 * Loads a bank by its name.\n\x09 * @param Bank - The bank to load.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Bank Name\" field of Load Bank" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Loads a bank by its name.\n* @param Bank - The bank to load." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadBankByName", nullptr, nullptr, sizeof(AkGameplayStatics_eventLoadBankByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics
	{
		struct AkGameplayStatics_eventLoadBanks_Parms
		{
			TArray<UAkAudioBank*> SoundBanks;
			bool SynchronizeSoundBanks;
		};
		static void NewProp_SynchronizeSoundBanks_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SynchronizeSoundBanks;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SoundBanks_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SoundBanks;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SoundBanks_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SynchronizeSoundBanks_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventLoadBanks_Parms*)Obj)->SynchronizeSoundBanks = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SynchronizeSoundBanks = { "SynchronizeSoundBanks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventLoadBanks_Parms), &Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SynchronizeSoundBanks_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks = { "SoundBanks", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventLoadBanks_Parms, SoundBanks), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks_Inner = { "SoundBanks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SynchronizeSoundBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::NewProp_SoundBanks_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09 * Loads an array of bank.\n\x09 * @param Banks - An array of banks to load\n\x09 * @param CleanUpBanks - If true, will unload any loaded banks that are not in Banks\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Loads an array of bank.\n* @param Banks - An array of banks to load\n* @param CleanUpBanks - If true, will unload any loaded banks that are not in Banks" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadBanks", nullptr, nullptr, sizeof(AkGameplayStatics_eventLoadBanks_Parms), Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadBanks()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadBanks_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09 * Loads the init bank.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Loads the init bank." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "LoadInitBank", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics
	{
		struct AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FString EventName;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "bStopWhenAttachedToDestroyed", "false" },
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\n\x09 * Additional calls made while an event is active are ignored.\n\x09 * @param AkEvent - ak event to play.\n\x09 * @param Actor - actor on which to play the event.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
		{ "EventName", "" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor, and waits for the end of the event to continue execution.\nAdditional calls made while an event is active are ignored.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostAndWaitForEndOfEvent", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostAndWaitForEndOfEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics
	{
		struct AkGameplayStatics_eventPostEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEvent_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostEvent_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, ExternalSources), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Posts a Wwise Event attached to and following the root component of the specified actor.\n\x09 * @param AkEvent - ak event to play.\n\x09 * @param Actor - actor on which to play the event.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_EventName", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEvent", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostEvent_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics
	{
		struct AkGameplayStatics_eventPostEventAtLocation_Parms
		{
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			FString EventName;
			UObject* WorldContextObject;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocation", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostEventAtLocation_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics
	{
		struct AkGameplayStatics_eventPostEventAtLocationByName_Parms
		{
			FString EventName;
			FVector Location;
			FRotator Orientation;
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAtLocationByName_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Posts a Wwise Event by name at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Event Name\" field of PostEventAtLocation" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event by name at the specified location. This is a fire and forget sound, created on a temporary Wwise Game Object. Replication is also not handled at this point.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAtLocationByName", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostEventAtLocationByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics
	{
		struct AkGameplayStatics_eventPostEventAttached_Parms
		{
			UAkAudioEvent* AkEvent;
			AActor* Actor;
			FName AttachPointName;
			bool bStopWhenAttachedToDestroyed;
			FString EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_AttachPointName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, EventName), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEventAttached_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostEventAttached_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_AttachPointName = { "AttachPointName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, AttachPointName), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventAttached_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_AttachPointName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Posts a Wwise Event attached to and following the specified component.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Actor - actor on which to post the Wwise Event.\n\x09 * @param AttachPointName - Optional named point within the AttachComponent to play the sound at (NOT FUNCTIONAL).\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
		{ "CPP_Default_AttachPointName", "None" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "CPP_Default_EventName", "" },
		{ "DeprecatedFunction", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event attached to and following the specified component.\n@param AkEvent - Wwise Event to post.\n@param Actor - actor on which to post the Wwise Event.\n@param AttachPointName - Optional named point within the AttachComponent to play the sound at (NOT FUNCTIONAL).\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventAttached", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostEventAttached_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics
	{
		struct AkGameplayStatics_eventPostEventByName_Parms
		{
			FString EventName;
			AActor* Actor;
			bool bStopWhenAttachedToDestroyed;
		};
		static void NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenAttachedToDestroyed;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventPostEventByName_Parms*)Obj)->bStopWhenAttachedToDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed = { "bStopWhenAttachedToDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventPostEventByName_Parms), &Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostEventByName_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_bStopWhenAttachedToDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::NewProp_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/** Posts a Wwise Event by name attached to and following the root component of the specified actor.\n\x09 * @param AkEvent - ak event to play.\n\x09 * @param Actor - actor on which to play the event.\n\x09 * @param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed.\n\x09 */" },
		{ "CPP_Default_bStopWhenAttachedToDestroyed", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Event Name\" field of PostEvent" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Wwise Event by name attached to and following the root component of the specified actor.\n@param AkEvent - ak event to play.\n@param Actor - actor on which to play the event.\n@param bStopWhenAttachedToDestroyed - Specifies whether the sound should stop playing when the owner of the attach to component is destroyed." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostEventByName", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostEventByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostEventByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostEventByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics
	{
		struct AkGameplayStatics_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			AActor* Actor;
			FName Trigger;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Trigger;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::NewProp_TriggerValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09 * Posts a Trigger, targetting the root component of a specified actor.\n\x09 * @param Trigger - Name of the Trigger\n\x09 * @param Actor - Actor on which to post the Trigger\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Posts a Trigger, targetting the root component of a specified actor.\n@param Trigger - Name of the Trigger\n@param Actor - Actor on which to post the Trigger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "PostTrigger", nullptr, nullptr, sizeof(AkGameplayStatics_eventPostTrigger_Parms), Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics
	{
		struct AkGameplayStatics_eventSetBusConfig_Parms
		{
			FString BusName;
			AkChannelConfiguration ChannelConfiguration;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelConfiguration;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelConfiguration_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration = { "ChannelConfiguration", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, ChannelConfiguration), Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName = { "BusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetBusConfig_Parms, BusName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_ChannelConfiguration_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::NewProp_BusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09* Force channel configuration for the specified bus.\n\x09* This function has unspecified behavior when changing the configuration of a bus that\n\x09* is currently playing.\n\x09* You cannot change the configuration of the master bus.\n\x09*\n\x09* @param BusName\x09\x09\x09\x09""Bus Name\n\x09* @param ChannelConfiguration\x09""Desired channel configuration.\n\x09* @return Always returns AK_Success\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Force channel configuration for the specified bus.\nThis function has unspecified behavior when changing the configuration of a bus that\nis currently playing.\nYou cannot change the configuration of the master bus.\n\n@param BusName                                Bus Name\n@param ChannelConfiguration   Desired channel configuration.\n@return Always returns AK_Success" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetBusConfig", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetBusConfig_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCulture_Parms
		{
			FString AudioCulture;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCulture_Parms, AudioCulture), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::NewProp_AudioCulture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCulture", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetCurrentAudioCulture_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics
	{
		struct AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms
		{
			FString AudioCulture;
			FScriptDelegate Completed;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Completed_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_Completed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioCulture_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AudioCulture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed = { "Completed", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, Completed), Z_Construct_UDelegateFunction_AkAudio_OnSetCurrentAudioCultureCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture = { "AudioCulture", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms, AudioCulture), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_Completed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::NewProp_AudioCulture,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Culture" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetCurrentAudioCultureAsync", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetCurrentAudioCultureAsync_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<AkChannelConfiguration> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ChannelMasks_Inner;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ChannelMasks_Inner_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_AkAudio_AkChannelConfiguration, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_ChannelMasks_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::NewProp_GameObjectAkComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param ChannelMasks Array of channel configuration to apply for each position.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    */" },
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel configuration to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelEmitterPositions", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetMultipleChannelEmitterPositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics
	{
		struct AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FAkChannelMask> ChannelMasks;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ChannelMasks;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ChannelMasks_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks = { "ChannelMasks", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, ChannelMasks), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner = { "ChannelMasks", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkChannelMask, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_ChannelMasks_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::NewProp_GameObjectAkComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Sets multiple positions to a single game object, with flexible assignment of input channels.\n\x09*  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n\x09*  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n\x09*  Note: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n\x09*  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n\x09*  @param ChannelMasks Array of channel mask to apply for each position.\n\x09*  @param Positions Array of transforms to apply.\n\x09*  @param MultiPositionType Position type\n\x09*  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n\x09*/" },
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets multiple positions to a single game object, with flexible assignment of input channels.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling AK::SoundEngine::SetMultiplePositions() with only one position is the same as calling AK::SoundEngine::SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param ChannelMasks Array of channel mask to apply for each position.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultipleChannelMaskEmitterPositions", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetMultipleChannelMaskEmitterPositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics
	{
		struct AkGameplayStatics_eventSetMultiplePositions_Parms
		{
			UAkComponent* GameObjectAkComponent;
			TArray<FTransform> Positions;
			AkMultiPositionType MultiPositionType;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MultiPositionType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MultiPositionType_Underlying;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Positions;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Positions_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameObjectAkComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameObjectAkComponent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType = { "MultiPositionType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, MultiPositionType), Z_Construct_UEnum_AkAudio_AkMultiPositionType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions = { "Positions", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, Positions), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner = { "Positions", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent = { "GameObjectAkComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetMultiplePositions_Parms, GameObjectAkComponent), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_MultiPositionType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_Positions_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::NewProp_GameObjectAkComponent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Sets multiple positions to a single game object.\n    *  Setting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\n    *  This can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\n    *  Note: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n    *  @param GameObjectAkComponent AkComponent of the game object on which to set positions.\n    *  @param Positions Array of transforms to apply.\n    *  @param MultiPositionType Position type\n    *  @return AK_Success when successful, AK_InvalidParameter if parameters are not valid.\n    *\n    */" },
		{ "CPP_Default_MultiPositionType", "MultiDirections" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets multiple positions to a single game object.\nSetting multiple positions on a single game object is a way to simulate multiple emission sources while using the resources of only one voice.\nThis can be used to simulate wall openings, area sounds, or multiple objects emitting the same sound in the same area.\nNote: Calling SetMultiplePositions() with only one position is the same as calling SetPosition()\n@param GameObjectAkComponent AkComponent of the game object on which to set positions.\n@param Positions Array of transforms to apply.\n@param MultiPositionType Position type\n@return AK_Success when successful, AK_InvalidParameter if parameters are not valid." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetMultiplePositions", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetMultiplePositions_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics
	{
		struct AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms
		{
			float RefreshInterval;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RefreshInterval;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval = { "RefreshInterval", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms, RefreshInterval), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::NewProp_RefreshInterval,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09 * Sets the occlusion calculation refresh interval, targetting the root component of a specified actor.\n\x09 * @param RefreshInterval - Value of the wanted refresh interval\n\x09 * @param Actor - Actor on which to set the refresh interval\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets the occlusion calculation refresh interval, targetting the root component of a specified actor.\n@param RefreshInterval - Value of the wanted refresh interval\n@param Actor - Actor on which to set the refresh interval" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOcclusionRefreshInterval", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetOcclusionRefreshInterval_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics
	{
		struct AkGameplayStatics_eventSetOcclusionScalingFactor_Parms
		{
			float ScalingFactor;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ScalingFactor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::NewProp_ScalingFactor = { "ScalingFactor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOcclusionScalingFactor_Parms, ScalingFactor), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::NewProp_ScalingFactor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09* Sets the occlusion scaling factor.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets the occlusion scaling factor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOcclusionScalingFactor", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetOcclusionScalingFactor_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics
	{
		struct AkGameplayStatics_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::NewProp_BusVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set\n@param Actor - Actor on which to set the flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetOutputBusVolume", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics
	{
		struct AkGameplayStatics_eventSetPanningRule_Parms
		{
			PanningRule PanRule;
		};
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_PanRule;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_PanRule_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule = { "PanRule", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetPanningRule_Parms, PanRule), Z_Construct_UEnum_AkAudio_PanningRule, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::NewProp_PanRule_Underlying,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09*  Set the panning rule of the specified output.\n\x09*  This may be changed anytime once the sound engine is initialized.\n\x09*  @warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\x09*\n\x09* @param PanRule\x09Panning rule.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Set the panning rule of the specified output.\nThis may be changed anytime once the sound engine is initialized.\n@warning This function posts a message through the sound engine's internal message queue, whereas GetPanningRule() queries the current panning rule directly.\n\n@param PanRule        Panning rule." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetPanningRule", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetPanningRule_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics
	{
		struct AkGameplayStatics_eventSetReflectionsOrder_Parms
		{
			int32 Order;
			bool RefreshPaths;
		};
		static void NewProp_RefreshPaths_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_RefreshPaths;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSetReflectionsOrder_Parms*)Obj)->RefreshPaths = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths = { "RefreshPaths", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSetReflectionsOrder_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetReflectionsOrder_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_RefreshPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::NewProp_Order,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09* Sets the Reflections Order for Spatial Audio Reflect.\n\x09*\n\x09* @param Order - The order of Reflection. Can be 0 to 4.\n\x09* @param RefreshPaths - whether the paths should be refreshed immediately.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets the Reflections Order for Spatial Audio Reflect.\n\n@param Order - The order of Reflection. Can be 0 to 4.\n@param RefreshPaths - whether the paths should be refreshed immediately." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetReflectionsOrder", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetReflectionsOrder_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics
	{
		struct AkGameplayStatics_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			AActor* Actor;
			FName RTPC;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::NewProp_RTPCValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "4" },
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09* Sets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n\x09* @param RTPC - The name of the Game Parameter to set\n\x09* @param Value - The value of the Game Parameter\n\x09* @param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n\x09* @param Actor - (Optional) Actor on which to set the Game Parameter value\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets the value of a Game Parameter, optionally targetting the root component of a specified actor.\n@param RTPC - The name of the Game Parameter to set\n@param Value - The value of the Game Parameter\n@param InterpolationTimeMs - Duration during which the Game Parameter is interpolated towards Value (in ms)\n@param Actor - (Optional) Actor on which to set the Game Parameter value" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetRTPCValue_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics
	{
		struct AkGameplayStatics_eventSetSpeakerAngles_Parms
		{
			TArray<float> SpeakerAngles;
			float HeightAngle;
			FString DeviceShareset;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeviceShareset_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_DeviceShareset;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HeightAngle;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpeakerAngles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpeakerAngles;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpeakerAngles_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareset = { "DeviceShareset", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, DeviceShareset), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareset_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle = { "HeightAngle", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, HeightAngle), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSpeakerAngles_Parms, SpeakerAngles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner = { "SpeakerAngles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_DeviceShareset,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_HeightAngle,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::NewProp_SpeakerAngles_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09 * Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\n\x09 * Note that the current version of Wwise only supports positioning on the plane.\n\x09 * The speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\n\x09 * Supported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\n\x09 * Angles must be set in ascending order.\n\x09 *\n\x09 * @param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n\x09 * @param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n\x09 * @param DeviceShareset Shareset for which to set the angles on.\n\x09 */" },
		{ "CPP_Default_DeviceShareset", "" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets speaker angles of the specified device. Speaker angles are used for 3D positioning of sounds over standard configurations.\nNote that the current version of Wwise only supports positioning on the plane.\nThe speaker angles are expressed as an array of loudspeaker pairs, in degrees, relative to azimuth ]0,180].\nSupported loudspeaker setups are always symmetric; the center speaker is always in the middle and thus not specified by angles.\nAngles must be set in ascending order.\n\n@param SpeakerAngles Array of loudspeaker pair angles, in degrees relative to azimuth [0,180]\n@param HeightAngle Elevation of the height layer, in degrees relative to the plane [-90,90]\n@param DeviceShareset Shareset for which to set the angles on." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSpeakerAngles", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetSpeakerAngles_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics
	{
		struct AkGameplayStatics_eventSetState_Parms
		{
			UAkStateValue* StateValue;
			FName StateGroup;
			FName State;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_State;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_StateGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StateValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StateValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State = { "State", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, State), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup = { "StateGroup", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateGroup), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue = { "StateValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetState_Parms, StateValue), Z_Construct_UClass_UAkStateValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_State,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::NewProp_StateValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09 * Set the active State for a given State Group.\n\x09 * @param StateGroup - Name of the State Group to be modified\n\x09 * @param State - Name of the State to be made active\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Set the active State for a given State Group.\n@param StateGroup - Name of the State Group to be modified\n@param State - Name of the State to be made active" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetState", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetState_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics
	{
		struct AkGameplayStatics_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			AActor* Actor;
			FName SwitchGroup;
			FName SwitchState;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchState;
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_SwitchGroup;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::NewProp_SwitchValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09 * Sets the active Switch for a given Switch Group, targetting the root component of a specified actor.\n\x09 * @param SwitchGroup - Name of the Switch Group to be modified\n\x09 * @param SwitchState - Name of the Switch to be made active\n\x09 * @param Actor - Actor on which to set the switch\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets the active Switch for a given Switch Group, targetting the root component of a specified actor.\n@param SwitchGroup - Name of the Switch Group to be modified\n@param SwitchState - Name of the Switch to be made active\n@param Actor - Actor on which to set the switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SetSwitch", nullptr, nullptr, sizeof(AkGameplayStatics_eventSetSwitch_Parms), Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics
	{
		struct AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms
		{
			UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			FVector Location;
			FRotator Orientation;
			bool AutoPost;
			FString EventName;
			bool AutoDestroy;
			UAkComponent* ReturnValue;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static void NewProp_AutoDestroy_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoDestroy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
		static void NewProp_AutoPost_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AutoPost;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Orientation;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, ReturnValue), Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoDestroy = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy = { "AutoDestroy", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms*)Obj)->AutoPost = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost = { "AutoPost", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation = { "Orientation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Orientation), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoDestroy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AutoPost,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Orientation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_Location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Audiokinetic" },
		{ "Comment", "/** Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n\x09 * @param AkEvent - Wwise Event to post.\n\x09 * @param Location - Location from which to post the Wwise Event.\n\x09 * @param Orientation - Orientation of the event.\n\x09 * @param AutoPost - Automatically post the event once the AkComponent is created.\n\x09 * @param AutoDestroy - Automatically destroy the AkComponent once the event is finished.\n\x09 */" },
		{ "CPP_Default_AutoDestroy", "true" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Spawn an AkComponent at a location. Allows, for example, to set a switch on a fire and forget sound.\n@param AkEvent - Wwise Event to post.\n@param Location - Location from which to post the Wwise Event.\n@param Orientation - Orientation of the event.\n@param AutoPost - Automatically post the event once the AkComponent is created.\n@param AutoDestroy - Automatically destroy the AkComponent once the event is finished." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "SpawnAkComponentAtLocation", nullptr, nullptr, sizeof(AkGameplayStatics_eventSpawnAkComponentAtLocation_Parms), Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStartAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/**\n\x09 * Start all Ak ambient sounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Start all Ak ambient sounds." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartAllAmbientSounds", nullptr, nullptr, sizeof(AkGameplayStatics_eventStartAllAmbientSounds_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics
	{
		struct AkGameplayStatics_eventStartOutputCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartOutputCapture_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
		{ "Comment", "/**\n\x09 * Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Starts a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartOutputCapture", nullptr, nullptr, sizeof(AkGameplayStatics_eventStartOutputCapture_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics
	{
		struct AkGameplayStatics_eventStartProfilerCapture_Parms
		{
			FString Filename;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Filename_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Filename;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename = { "Filename", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventStartProfilerCapture_Parms, Filename), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::NewProp_Filename,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
		{ "Comment", "/**\n\x09 * Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 * @param Filename - The name to give to the output file.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Starts a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n@param Filename - The name to give to the output file." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StartProfilerCapture", nullptr, nullptr, sizeof(AkGameplayStatics_eventStartProfilerCapture_Parms), Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics
	{
		struct AkGameplayStatics_eventStopActor_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09 * Stop all sounds for an actor.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Stop all sounds for an actor." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopActor", nullptr, nullptr, sizeof(AkGameplayStatics_eventStopActor_Parms), Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopActor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopActor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic" },
		{ "Comment", "/**\n\x09 * Stop all sounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Stop all sounds." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAll", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAll()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAll_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics
	{
		struct AkGameplayStatics_eventStopAllAmbientSounds_Parms
		{
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventStopAllAmbientSounds_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkAmbientSound" },
		{ "Comment", "/**\n\x09 * Stop all Ak ambient sounds.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Stop all Ak ambient sounds." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopAllAmbientSounds", nullptr, nullptr, sizeof(AkGameplayStatics_eventStopAllAmbientSounds_Parms), Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
		{ "Comment", "/**\n\x09 * Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Stops a Wwise output capture. The output file will be located in the same folder as the SoundBanks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopOutputCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Debug" },
		{ "Comment", "/**\n\x09 * Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks.\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Stops a Wwise profiler capture. The output file will be located in the same folder as the SoundBanks." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "StopProfilerCapture", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics
	{
		struct AkGameplayStatics_eventUnloadBank_Parms
		{
			UAkAudioBank* Bank;
			FString BankName;
			FLatentActionInfo LatentInfo;
			UObject* WorldContextObject;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_BankName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBank_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_WorldContextObject,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_BankName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::NewProp_Bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/**\n\x09 * Unloads a bank.\n\x09 * @param Bank - The bank to unload.\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Unloads a bank.\n@param Bank - The bank to unload." },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadBank", nullptr, nullptr, sizeof(AkGameplayStatics_eventUnloadBank_Parms), Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadBank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics
	{
		struct AkGameplayStatics_eventUnloadBankAsync_Parms
		{
			UAkAudioBank* Bank;
			FScriptDelegate BankUnloadedCallback;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankUnloadedCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_BankUnloadedCallback;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Bank;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_BankUnloadedCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_BankUnloadedCallback = { "BankUnloadedCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBankAsync_Parms, BankUnloadedCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkBankCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_BankUnloadedCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_BankUnloadedCallback_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_Bank = { "Bank", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBankAsync_Parms, Bank), Z_Construct_UClass_UAkAudioBank_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_BankUnloadedCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::NewProp_Bank,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/*\n\x09* Unloads a bank asynchronously from Blueprint.\n\x09* @param Bank - The bank to load.\n\x09* @param BankUnloadedCallback - Blueprint Delegate to call upon completion.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "* Unloads a bank asynchronously from Blueprint.\n* @param Bank - The bank to load.\n* @param BankUnloadedCallback - Blueprint Delegate to call upon completion." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadBankAsync", nullptr, nullptr, sizeof(AkGameplayStatics_eventUnloadBankAsync_Parms), Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics
	{
		struct AkGameplayStatics_eventUnloadBankByName_Parms
		{
			FString BankName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BankName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_BankName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName = { "BankName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUnloadBankByName_Parms, BankName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::NewProp_BankName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|SoundBanks" },
		{ "Comment", "/**\n\x09 * Unloads a bank by its name.\n\x09 * @param Bank - The bank to unload.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Bank Name\" field of Unload Bank" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Unloads a bank by its name.\n@param Bank - The bank to unload." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UnloadBankByName", nullptr, nullptr, sizeof(AkGameplayStatics_eventUnloadBankByName_Parms), Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics
	{
		struct AkGameplayStatics_eventUseEarlyReflections_Parms
		{
			AActor* Actor;
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static void NewProp_SpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendGain;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	void Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseEarlyReflections_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_AuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "6" },
		{ "Category", "Audiokinetic|Actor" },
		{ "CPP_Default_AuxBusName", "" },
		{ "CPP_Default_BusSendGain", "1.000000" },
		{ "CPP_Default_MaxPathLength", "100000.000000" },
		{ "CPP_Default_Order", "1" },
		{ "CPP_Default_SpotReflectors", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated and will be removed in future releases." },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseEarlyReflections", nullptr, nullptr, sizeof(AkGameplayStatics_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics
	{
		struct AkGameplayStatics_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameplayStatics_eventUseReverbVolumes_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkGameplayStatics_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|Actor" },
		{ "Comment", "/**\n\x09* Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\x09*\n\x09* @param inUseReverbVolumes - Whether to use reverb volumes or not.\n\x09* @param Actor - Actor on which to set the flag\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
		{ "ToolTip", "Sets UseReverbVolumes flag on a specified actor. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes - Whether to use reverb volumes or not.\n@param Actor - Actor on which to set the flag" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameplayStatics, nullptr, "UseReverbVolumes", nullptr, nullptr, sizeof(AkGameplayStatics_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameplayStatics_NoRegister()
	{
		return UAkGameplayStatics::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameplayStatics_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameplayStatics_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameplayStatics_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameplayStatics_AddOutputCaptureMarker, "AddOutputCaptureMarker" }, // 3140787484
		{ &Z_Construct_UFunction_UAkGameplayStatics_CancelEventCallback, "CancelEventCallback" }, // 1319189238
		{ &Z_Construct_UFunction_UAkGameplayStatics_ClearBanks, "ClearBanks" }, // 1730070490
		{ &Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnEvent, "ExecuteActionOnEvent" }, // 2090421882
		{ &Z_Construct_UFunction_UAkGameplayStatics_ExecuteActionOnPlayingID, "ExecuteActionOnPlayingID" }, // 2231904764
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkAudioTypeUserData, "GetAkAudioTypeUserData" }, // 1211929774
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkComponent, "GetAkComponent" }, // 3472459311
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAkMediaAssetUserData, "GetAkMediaAssetUserData" }, // 361891876
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetAvailableAudioCultures, "GetAvailableAudioCultures" }, // 1075139317
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetCurrentAudioCulture, "GetCurrentAudioCulture" }, // 3765854286
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetOcclusionScalingFactor, "GetOcclusionScalingFactor" }, // 54843137
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetRTPCValue, "GetRTPCValue" }, // 1126075487
		{ &Z_Construct_UFunction_UAkGameplayStatics_GetSpeakerAngles, "GetSpeakerAngles" }, // 1034740630
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsEditor, "IsEditor" }, // 1521920027
		{ &Z_Construct_UFunction_UAkGameplayStatics_IsGame, "IsGame" }, // 3259837799
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBank, "LoadBank" }, // 2866904167
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBankAsync, "LoadBankAsync" }, // 1020864922
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBankByName, "LoadBankByName" }, // 1097079215
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadBanks, "LoadBanks" }, // 3336937309
		{ &Z_Construct_UFunction_UAkGameplayStatics_LoadInitBank, "LoadInitBank" }, // 1325726511
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostAndWaitForEndOfEvent, "PostAndWaitForEndOfEvent" }, // 1711341780
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEvent, "PostEvent" }, // 2302847322
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocation, "PostEventAtLocation" }, // 2746433439
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAtLocationByName, "PostEventAtLocationByName" }, // 811444291
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventAttached, "PostEventAttached" }, // 900460042
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostEventByName, "PostEventByName" }, // 2474077098
		{ &Z_Construct_UFunction_UAkGameplayStatics_PostTrigger, "PostTrigger" }, // 3481442780
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetBusConfig, "SetBusConfig" }, // 1834683162
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCulture, "SetCurrentAudioCulture" }, // 3927033139
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetCurrentAudioCultureAsync, "SetCurrentAudioCultureAsync" }, // 23846765
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelEmitterPositions, "SetMultipleChannelEmitterPositions" }, // 3247251999
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultipleChannelMaskEmitterPositions, "SetMultipleChannelMaskEmitterPositions" }, // 1673690589
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetMultiplePositions, "SetMultiplePositions" }, // 4186644444
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionRefreshInterval, "SetOcclusionRefreshInterval" }, // 3223291747
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOcclusionScalingFactor, "SetOcclusionScalingFactor" }, // 2870117826
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetOutputBusVolume, "SetOutputBusVolume" }, // 868689882
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetPanningRule, "SetPanningRule" }, // 970594703
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetReflectionsOrder, "SetReflectionsOrder" }, // 2450803194
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetRTPCValue, "SetRTPCValue" }, // 3811583452
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSpeakerAngles, "SetSpeakerAngles" }, // 2361294386
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetState, "SetState" }, // 3914697146
		{ &Z_Construct_UFunction_UAkGameplayStatics_SetSwitch, "SetSwitch" }, // 479792889
		{ &Z_Construct_UFunction_UAkGameplayStatics_SpawnAkComponentAtLocation, "SpawnAkComponentAtLocation" }, // 3291588294
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartAllAmbientSounds, "StartAllAmbientSounds" }, // 2088135799
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartOutputCapture, "StartOutputCapture" }, // 1853676158
		{ &Z_Construct_UFunction_UAkGameplayStatics_StartProfilerCapture, "StartProfilerCapture" }, // 2702121720
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopActor, "StopActor" }, // 1434908069
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAll, "StopAll" }, // 3423671150
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopAllAmbientSounds, "StopAllAmbientSounds" }, // 3566319131
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopOutputCapture, "StopOutputCapture" }, // 3074362126
		{ &Z_Construct_UFunction_UAkGameplayStatics_StopProfilerCapture, "StopProfilerCapture" }, // 1868031800
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBank, "UnloadBank" }, // 3686513412
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBankAsync, "UnloadBankAsync" }, // 2722832413
		{ &Z_Construct_UFunction_UAkGameplayStatics_UnloadBankByName, "UnloadBankByName" }, // 3934004717
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseEarlyReflections, "UseEarlyReflections" }, // 47794332
		{ &Z_Construct_UFunction_UAkGameplayStatics_UseReverbVolumes, "UseReverbVolumes" }, // 3283742864
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkGameplayStatics.h" },
		{ "ModuleRelativePath", "Classes/AkGameplayStatics.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameplayStatics_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameplayStatics>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams = {
		&UAkGameplayStatics::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameplayStatics_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGameplayStatics()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGameplayStatics_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameplayStatics, 1089222455);
	template<> AKAUDIO_API UClass* StaticClass<UAkGameplayStatics>()
	{
		return UAkGameplayStatics::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameplayStatics(Z_Construct_UClass_UAkGameplayStatics, &UAkGameplayStatics::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameplayStatics"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameplayStatics);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
