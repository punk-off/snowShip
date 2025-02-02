// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FGuid;
struct FLinearColor;
#ifdef AKAUDIO_AkSlider_generated_h
#error "AkSlider.generated.h already included, missing '#pragma once' in AkSlider.h"
#endif
#define AKAUDIO_AkSlider_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_55_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkWwiseItemToControl_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkWwiseItemToControl>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_28_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkWwiseObjectDetails_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkWwiseObjectDetails>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_20_DELEGATE \
struct _Script_AkAudio_eventOnPropertyDropDetected_Parms \
{ \
	FString PropertyDropped; \
}; \
static inline void FOnPropertyDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnPropertyDropDetected, const FString& PropertyDropped) \
{ \
	_Script_AkAudio_eventOnPropertyDropDetected_Parms Parms; \
	Parms.PropertyDropped=PropertyDropped; \
	OnPropertyDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_17_DELEGATE \
struct _Script_AkAudio_eventOnItemDropDetected_Parms \
{ \
	FGuid ItemDroppedID; \
}; \
static inline void FOnItemDropDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemDropDetected, FGuid ItemDroppedID) \
{ \
	_Script_AkAudio_eventOnItemDropDetected_Parms Parms; \
	Parms.ItemDroppedID=ItemDroppedID; \
	OnItemDropDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_14_DELEGATE \
struct _Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms \
{ \
	float Value; \
}; \
static inline void FAkOnFloatValueChangedEvent_DelegateWrapper(const FMulticastScriptDelegate& AkOnFloatValueChangedEvent, float Value) \
{ \
	_Script_AkAudio_eventAkOnFloatValueChangedEvent_Parms Parms; \
	Parms.Value=Value; \
	AkOnFloatValueChangedEvent.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAkSliderItemProperty); \
	DECLARE_FUNCTION(execSetAkSliderItemProperty); \
	DECLARE_FUNCTION(execGetAkSliderItemId); \
	DECLARE_FUNCTION(execSetAkSliderItemId); \
	DECLARE_FUNCTION(execSetSliderHandleColor); \
	DECLARE_FUNCTION(execSetSliderBarColor); \
	DECLARE_FUNCTION(execSetStepSize); \
	DECLARE_FUNCTION(execSetLocked); \
	DECLARE_FUNCTION(execSetIndentHandle); \
	DECLARE_FUNCTION(execSetValue); \
	DECLARE_FUNCTION(execGetValue);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS \
private: \
	static void StaticRegisterNativesUAkSlider(); \
	friend struct Z_Construct_UClass_UAkSlider_Statics; \
public: \
	DECLARE_CLASS(UAkSlider, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSlider) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSlider(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSlider(UAkSlider&&); \
	NO_API UAkSlider(const UAkSlider&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSlider); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSlider); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSlider)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_76_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h_79_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSlider."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSlider>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkSlider_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
