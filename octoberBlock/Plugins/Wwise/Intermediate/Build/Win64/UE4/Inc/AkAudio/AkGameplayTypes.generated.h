// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EAkResult : uint8;
enum class EAkCallbackType : uint8;
class UAkCallbackInfo;
struct FAkMidiProgramChange;
struct FAkMidiChannelAftertouch;
struct FAkMidiNoteAftertouch;
struct FAkMidiPitchBend;
struct FAkMidiCc;
struct FAkMidiNoteOnOff;
struct FAkMidiGeneric;
enum class EAkMidiEventType : uint8;
#ifdef AKAUDIO_AkGameplayTypes_generated_h
#error "AkGameplayTypes.generated.h already included, missing '#pragma once' in AkGameplayTypes.h"
#endif
#define AKAUDIO_AkGameplayTypes_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_1002_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkExternalSourceInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkExternalSourceInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_768_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkSegmentInfo_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkSegmentInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_657_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiProgramChange_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiProgramChange>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_642_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiChannelAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiChannelAftertouch>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_623_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiNoteAftertouch_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiNoteAftertouch>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_600_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiPitchBend_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiPitchBend>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_581_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiCc_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiCc>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_562_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiNoteOnOff_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiNoteOnOff>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_543_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiGeneric_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkMidiEventBase Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiGeneric>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_524_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkMidiEventBase_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkMidiEventBase>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_364_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkChannelMask_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkChannelMask>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_834_DELEGATE \
struct _Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms \
{ \
	bool Succeeded; \
}; \
static inline void FOnSetCurrentAudioCultureCallback_DelegateWrapper(const FScriptDelegate& OnSetCurrentAudioCultureCallback, bool Succeeded) \
{ \
	_Script_AkAudio_eventOnSetCurrentAudioCultureCallback_Parms Parms; \
	Parms.Succeeded=Succeeded ? true : false; \
	OnSetCurrentAudioCultureCallback.ProcessDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_833_DELEGATE \
struct _Script_AkAudio_eventOnAkBankCallback_Parms \
{ \
	EAkResult Result; \
}; \
static inline void FOnAkBankCallback_DelegateWrapper(const FScriptDelegate& OnAkBankCallback, EAkResult Result) \
{ \
	_Script_AkAudio_eventOnAkBankCallback_Parms Parms; \
	Parms.Result=Result; \
	OnAkBankCallback.ProcessDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_832_DELEGATE \
struct _Script_AkAudio_eventOnAkPostEventCallback_Parms \
{ \
	EAkCallbackType CallbackType; \
	UAkCallbackInfo* CallbackInfo; \
}; \
static inline void FOnAkPostEventCallback_DelegateWrapper(const FScriptDelegate& OnAkPostEventCallback, EAkCallbackType CallbackType, UAkCallbackInfo* CallbackInfo) \
{ \
	_Script_AkAudio_eventOnAkPostEventCallback_Parms Parms; \
	Parms.CallbackType=CallbackType; \
	Parms.CallbackInfo=CallbackInfo; \
	OnAkPostEventCallback.ProcessDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_RPC_WRAPPERS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_RPC_WRAPPERS_NO_PURE_DECLS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkCallbackInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_INCLASS \
private: \
	static void StaticRegisterNativesUAkCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkCallbackInfo, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCallbackInfo(UAkCallbackInfo&&); \
	NO_API UAkCallbackInfo(const UAkCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkCallbackInfo(UAkCallbackInfo&&); \
	NO_API UAkCallbackInfo(const UAkCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_348_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_351_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkCallbackInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_RPC_WRAPPERS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_RPC_WRAPPERS_NO_PURE_DECLS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkEventCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_INCLASS \
private: \
	static void StaticRegisterNativesUAkEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkEventCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkEventCallbackInfo(UAkEventCallbackInfo&&); \
	NO_API UAkEventCallbackInfo(const UAkEventCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkEventCallbackInfo(UAkEventCallbackInfo&&); \
	NO_API UAkEventCallbackInfo(const UAkEventCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkEventCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_374_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_377_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkEventCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkEventCallbackInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetType);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetProgramChange); \
	DECLARE_FUNCTION(execGetChannelAftertouch); \
	DECLARE_FUNCTION(execGetNoteAftertouch); \
	DECLARE_FUNCTION(execGetPitchBend); \
	DECLARE_FUNCTION(execGetCc); \
	DECLARE_FUNCTION(execGetNoteOff); \
	DECLARE_FUNCTION(execGetNoteOn); \
	DECLARE_FUNCTION(execGetGeneric); \
	DECLARE_FUNCTION(execGetChannel); \
	DECLARE_FUNCTION(execGetType);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_INCLASS \
private: \
	static void StaticRegisterNativesUAkMIDIEventCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMIDIEventCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMIDIEventCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMIDIEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMIDIEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMIDIEventCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMIDIEventCallbackInfo(UAkMIDIEventCallbackInfo&&); \
	NO_API UAkMIDIEventCallbackInfo(const UAkMIDIEventCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMIDIEventCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMIDIEventCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMIDIEventCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_673_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_676_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkMIDIEventCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMIDIEventCallbackInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_RPC_WRAPPERS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_RPC_WRAPPERS_NO_PURE_DECLS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMarkerCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMarkerCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMarkerCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_INCLASS \
private: \
	static void StaticRegisterNativesUAkMarkerCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMarkerCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMarkerCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMarkerCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMarkerCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMarkerCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMarkerCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMarkerCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMarkerCallbackInfo(UAkMarkerCallbackInfo&&); \
	NO_API UAkMarkerCallbackInfo(const UAkMarkerCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMarkerCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMarkerCallbackInfo(UAkMarkerCallbackInfo&&); \
	NO_API UAkMarkerCallbackInfo(const UAkMarkerCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMarkerCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMarkerCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMarkerCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_720_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_723_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkMarkerCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMarkerCallbackInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_RPC_WRAPPERS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_RPC_WRAPPERS_NO_PURE_DECLS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkDurationCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkDurationCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkDurationCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_INCLASS \
private: \
	static void StaticRegisterNativesUAkDurationCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkDurationCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkDurationCallbackInfo, UAkEventCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkDurationCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDurationCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDurationCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDurationCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDurationCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkDurationCallbackInfo(UAkDurationCallbackInfo&&); \
	NO_API UAkDurationCallbackInfo(const UAkDurationCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkDurationCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkDurationCallbackInfo(UAkDurationCallbackInfo&&); \
	NO_API UAkDurationCallbackInfo(const UAkDurationCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkDurationCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkDurationCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkDurationCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_741_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_744_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkDurationCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkDurationCallbackInfo>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_RPC_WRAPPERS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_RPC_WRAPPERS_NO_PURE_DECLS
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkMusicSyncCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMusicSyncCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMusicSyncCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_INCLASS \
private: \
	static void StaticRegisterNativesUAkMusicSyncCallbackInfo(); \
	friend struct Z_Construct_UClass_UAkMusicSyncCallbackInfo_Statics; \
public: \
	DECLARE_CLASS(UAkMusicSyncCallbackInfo, UAkCallbackInfo, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkMusicSyncCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMusicSyncCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMusicSyncCallbackInfo) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMusicSyncCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMusicSyncCallbackInfo); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMusicSyncCallbackInfo(UAkMusicSyncCallbackInfo&&); \
	NO_API UAkMusicSyncCallbackInfo(const UAkMusicSyncCallbackInfo&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkMusicSyncCallbackInfo(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkMusicSyncCallbackInfo(UAkMusicSyncCallbackInfo&&); \
	NO_API UAkMusicSyncCallbackInfo(const UAkMusicSyncCallbackInfo&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkMusicSyncCallbackInfo); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkMusicSyncCallbackInfo); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkMusicSyncCallbackInfo)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_811_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h_814_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkMusicSyncCallbackInfo."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkMusicSyncCallbackInfo>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkGameplayTypes_h


#define FOREACH_ENUM_AKCODECID(op) \
	op(AkCodecId::Bank) \
	op(AkCodecId::PCM) \
	op(AkCodecId::ADPCM) \
	op(AkCodecId::XMA) \
	op(AkCodecId::Vorbis) \
	op(AkCodecId::WiiADPCM) \
	op(AkCodecId::PCMEX) \
	op(AkCodecId::ExternalSource) \
	op(AkCodecId::XWMA) \
	op(AkCodecId::AAC) \
	op(AkCodecId::FilePackage) \
	op(AkCodecId::ATRAC9) \
	op(AkCodecId::VAG) \
	op(AkCodecId::ProfilerCapture) \
	op(AkCodecId::AnalysisFile) \
	op(AkCodecId::MIDI) \
	op(AkCodecId::OpusNX) \
	op(AkCodecId::CAF) \
	op(AkCodecId::AkOpus) 

enum class AkCodecId : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkCodecId>();

#define FOREACH_ENUM_EAKMIDICCVALUES(op) \
	op(EAkMidiCcValues::AkMidiCcBankSelectCoarse) \
	op(EAkMidiCcValues::AkMidiCcModWheelCoarse) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Coarse) \
	op(EAkMidiCcValues::AkMidiCcFootPedalCoarse) \
	op(EAkMidiCcValues::AkMidiCcPortamentoCoarse) \
	op(EAkMidiCcValues::AkMidiCcDataEntryCoarse) \
	op(EAkMidiCcValues::AkMidiCcVolumeCoarse) \
	op(EAkMidiCcValues::AkMidiCcBalanceCoarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Coarse) \
	op(EAkMidiCcValues::AkMidiCcPanPositionCoarse) \
	op(EAkMidiCcValues::AkMidiCcExpressionCoarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Coarse) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Coarse) \
	op(EAkMidiCcValues::AkMidiCcGenSlider1) \
	op(EAkMidiCcValues::AkMidiCcGenSlider2) \
	op(EAkMidiCcValues::AkMidiCcGenSlider3) \
	op(EAkMidiCcValues::AkMidiCcGenSlider4) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Coarse) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Coarse) \
	op(EAkMidiCcValues::AkMidiCcBankSelectFine) \
	op(EAkMidiCcValues::AkMidiCcModWheelFine) \
	op(EAkMidiCcValues::AkMidiCcBreathCtrlFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl3Fine) \
	op(EAkMidiCcValues::AkMidiCcFootPedalFine) \
	op(EAkMidiCcValues::AkMidiCcPortamentoFine) \
	op(EAkMidiCcValues::AkMidiCcDataEntryFine) \
	op(EAkMidiCcValues::AkMidiCcVolumeFine) \
	op(EAkMidiCcValues::AkMidiCcBalanceFine) \
	op(EAkMidiCcValues::AkMidiCcCtrl9Fine) \
	op(EAkMidiCcValues::AkMidiCcPanPositionFine) \
	op(EAkMidiCcValues::AkMidiCcExpressionFine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl1Fine) \
	op(EAkMidiCcValues::AkMidiCcEffectCtrl2Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl14Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl15Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl20Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl21Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl22Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl23Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl24Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl25Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl26Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl27Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl28Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl29Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl30Fine) \
	op(EAkMidiCcValues::AkMidiCcCtrl31Fine) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal) \
	op(EAkMidiCcValues::AkMidiCcPortamentoOnOff) \
	op(EAkMidiCcValues::AkMidiCcSustenutoPedal) \
	op(EAkMidiCcValues::AkMidiCcSoftPedal) \
	op(EAkMidiCcValues::AkMidiCcLegatoPedal) \
	op(EAkMidiCcValues::AkMidiCcHoldPedal2) \
	op(EAkMidiCcValues::AkMidiCcSoundVariation) \
	op(EAkMidiCcValues::AkMidiCcSoundTimbre) \
	op(EAkMidiCcValues::AkMidiCcSoundReleaseTime) \
	op(EAkMidiCcValues::AkMidiCcSoundAttackTime) \
	op(EAkMidiCcValues::AkMidiCcSoundBrightness) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl6) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl7) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl8) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl9) \
	op(EAkMidiCcValues::AkMidiCcSoundCtrl10) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton1) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton2) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton3) \
	op(EAkMidiCcValues::AkMidiCcGeneralButton4) \
	op(EAkMidiCcValues::AkMidiCcReverbLevel) \
	op(EAkMidiCcValues::AkMidiCcTremoloLevel) \
	op(EAkMidiCcValues::AkMidiCcChorusLevel) \
	op(EAkMidiCcValues::AkMidiCcCelesteLevel) \
	op(EAkMidiCcValues::AkMidiCcPhaserLevel) \
	op(EAkMidiCcValues::AkMidiCcDataButtonP1) \
	op(EAkMidiCcValues::AkMidiCcDataButtonM1) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterCoarse) \
	op(EAkMidiCcValues::AkMidiCcNonRegisterFine) \
	op(EAkMidiCcValues::AkMidiCcAllSoundOff) \
	op(EAkMidiCcValues::AkMidiCcAllControllersOff) \
	op(EAkMidiCcValues::AkMidiCcLocalKeyboard) \
	op(EAkMidiCcValues::AkMidiCcAllNotesOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOff) \
	op(EAkMidiCcValues::AkMidiCcOmniModeOn) \
	op(EAkMidiCcValues::AkMidiCcOmniMonophonicOn) \
	op(EAkMidiCcValues::AkMidiCcOmniPolyphonicOn) 

enum class EAkMidiCcValues : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiCcValues>();

#define FOREACH_ENUM_EAKMIDIEVENTTYPE(op) \
	op(EAkMidiEventType::AkMidiEventTypeInvalid) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOff) \
	op(EAkMidiEventType::AkMidiEventTypeNoteOn) \
	op(EAkMidiEventType::AkMidiEventTypeNoteAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypeController) \
	op(EAkMidiEventType::AkMidiEventTypeProgramChange) \
	op(EAkMidiEventType::AkMidiEventTypeChannelAftertouch) \
	op(EAkMidiEventType::AkMidiEventTypePitchBend) \
	op(EAkMidiEventType::AkMidiEventTypeSysex) \
	op(EAkMidiEventType::AkMidiEventTypeEscape) \
	op(EAkMidiEventType::AkMidiEventTypeMeta) 

enum class EAkMidiEventType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkMidiEventType>();

#define FOREACH_ENUM_ERTPCVALUETYPE(op) \
	op(ERTPCValueType::Default) \
	op(ERTPCValueType::Global) \
	op(ERTPCValueType::GameObject) \
	op(ERTPCValueType::PlayingID) \
	op(ERTPCValueType::Unavailable) 

enum class ERTPCValueType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<ERTPCValueType>();

#define FOREACH_ENUM_EAKCALLBACKTYPE(op) \
	op(EAkCallbackType::EndOfEvent) \
	op(EAkCallbackType::Marker) \
	op(EAkCallbackType::Duration) \
	op(EAkCallbackType::Starvation) \
	op(EAkCallbackType::MusicPlayStarted) \
	op(EAkCallbackType::MusicSyncBeat) \
	op(EAkCallbackType::MusicSyncBar) \
	op(EAkCallbackType::MusicSyncEntry) \
	op(EAkCallbackType::MusicSyncExit) \
	op(EAkCallbackType::MusicSyncGrid) \
	op(EAkCallbackType::MusicSyncUserCue) \
	op(EAkCallbackType::MusicSyncPoint) \
	op(EAkCallbackType::MIDIEvent) 

enum class EAkCallbackType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkCallbackType>();

#define FOREACH_ENUM_EAKRESULT(op) \
	op(EAkResult::NotImplemented) \
	op(EAkResult::Success) \
	op(EAkResult::Fail) \
	op(EAkResult::PartialSuccess) \
	op(EAkResult::NotCompatible) \
	op(EAkResult::AlreadyConnected) \
	op(EAkResult::InvalidFile) \
	op(EAkResult::AudioFileHeaderTooLarge) \
	op(EAkResult::MaxReached) \
	op(EAkResult::InvalidID) \
	op(EAkResult::IDNotFound) \
	op(EAkResult::InvalidInstanceID) \
	op(EAkResult::NoMoreData) \
	op(EAkResult::InvalidStateGroup) \
	op(EAkResult::ChildAlreadyHasAParent) \
	op(EAkResult::InvalidLanguage) \
	op(EAkResult::CannotAddItseflAsAChild) \
	op(EAkResult::InvalidParameter) \
	op(EAkResult::ElementAlreadyInList) \
	op(EAkResult::PathNotFound) \
	op(EAkResult::PathNoVertices) \
	op(EAkResult::PathNotRunning) \
	op(EAkResult::PathNotPaused) \
	op(EAkResult::PathNodeAlreadyInList) \
	op(EAkResult::PathNodeNotInList) \
	op(EAkResult::DataNeeded) \
	op(EAkResult::NoDataNeeded) \
	op(EAkResult::DataReady) \
	op(EAkResult::NoDataReady) \
	op(EAkResult::InsufficientMemory) \
	op(EAkResult::Cancelled) \
	op(EAkResult::UnknownBankID) \
	op(EAkResult::BankReadError) \
	op(EAkResult::InvalidSwitchType) \
	op(EAkResult::FormatNotReady) \
	op(EAkResult::WrongBankVersion) \
	op(EAkResult::FileNotFound) \
	op(EAkResult::DeviceNotReady) \
	op(EAkResult::BankAlreadyLoaded) \
	op(EAkResult::RenderedFX) \
	op(EAkResult::ProcessNeeded) \
	op(EAkResult::ProcessDone) \
	op(EAkResult::MemManagerNotInitialized) \
	op(EAkResult::StreamMgrNotInitialized) \
	op(EAkResult::SSEInstructionsNotSupported) \
	op(EAkResult::Busy) \
	op(EAkResult::UnsupportedChannelConfig) \
	op(EAkResult::PluginMediaNotAvailable) \
	op(EAkResult::MustBeVirtualized) \
	op(EAkResult::CommandTooLarge) \
	op(EAkResult::RejectedByFilter) \
	op(EAkResult::InvalidCustomPlatformName) \
	op(EAkResult::DLLCannotLoad) \
	op(EAkResult::DLLPathNotFound) \
	op(EAkResult::NoJavaVM) \
	op(EAkResult::OpenSLError) \
	op(EAkResult::PluginNotRegistered) \
	op(EAkResult::DataAlignmentError) 

enum class EAkResult : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkResult>();

#define FOREACH_ENUM_EAKCURVEINTERPOLATION(op) \
	op(EAkCurveInterpolation::Log3) \
	op(EAkCurveInterpolation::Sine) \
	op(EAkCurveInterpolation::Log1) \
	op(EAkCurveInterpolation::InvSCurve) \
	op(EAkCurveInterpolation::Linear) \
	op(EAkCurveInterpolation::SCurve) \
	op(EAkCurveInterpolation::Exp1) \
	op(EAkCurveInterpolation::SineRecip) \
	op(EAkCurveInterpolation::Exp3) \
	op(EAkCurveInterpolation::LastFadeCurve) \
	op(EAkCurveInterpolation::Constant) 

enum class EAkCurveInterpolation : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<EAkCurveInterpolation>();

#define FOREACH_ENUM_AKACTIONONEVENTTYPE(op) \
	op(AkActionOnEventType::Stop) \
	op(AkActionOnEventType::Pause) \
	op(AkActionOnEventType::Resume) \
	op(AkActionOnEventType::Break) \
	op(AkActionOnEventType::ReleaseEnvelope) 

enum class AkActionOnEventType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkActionOnEventType>();

#define FOREACH_ENUM_AKMULTIPOSITIONTYPE(op) \
	op(AkMultiPositionType::SingleSource) \
	op(AkMultiPositionType::MultiSources) \
	op(AkMultiPositionType::MultiDirections) 

enum class AkMultiPositionType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkMultiPositionType>();

#define FOREACH_ENUM_AKSPEAKERCONFIGURATION(op) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Front_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Low_Frequency) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Back_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Side_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Side_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Top) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Front_Right) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Left) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Center) \
	op(AkSpeakerConfiguration::Ak_Speaker_Height_Back_Right) 

enum class AkSpeakerConfiguration;
template<> AKAUDIO_API UEnum* StaticEnum<AkSpeakerConfiguration>();

#define FOREACH_ENUM_AKCHANNELCONFIGURATION(op) \
	op(AkChannelConfiguration::Ak_Parent) \
	op(AkChannelConfiguration::Ak_LFE) \
	op(AkChannelConfiguration::Ak_1_0) \
	op(AkChannelConfiguration::Ak_2_0) \
	op(AkChannelConfiguration::Ak_2_1) \
	op(AkChannelConfiguration::Ak_3_0) \
	op(AkChannelConfiguration::Ak_3_1) \
	op(AkChannelConfiguration::Ak_4_0) \
	op(AkChannelConfiguration::Ak_4_1) \
	op(AkChannelConfiguration::Ak_5_0) \
	op(AkChannelConfiguration::Ak_5_1) \
	op(AkChannelConfiguration::Ak_7_1) \
	op(AkChannelConfiguration::Ak_5_1_2) \
	op(AkChannelConfiguration::Ak_7_1_2) \
	op(AkChannelConfiguration::Ak_7_1_4) \
	op(AkChannelConfiguration::Ak_Auro_9_1) \
	op(AkChannelConfiguration::Ak_Auro_10_1) \
	op(AkChannelConfiguration::Ak_Auro_11_1) \
	op(AkChannelConfiguration::Ak_Auro_13_1) \
	op(AkChannelConfiguration::Ak_Ambisonics_1st_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_2nd_order) \
	op(AkChannelConfiguration::Ak_Ambisonics_3rd_order) 

enum class AkChannelConfiguration : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkChannelConfiguration>();

#define FOREACH_ENUM_AKACOUSTICPORTALSTATE(op) \
	op(AkAcousticPortalState::Closed) \
	op(AkAcousticPortalState::Open) 

enum class AkAcousticPortalState : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkAcousticPortalState>();

#define FOREACH_ENUM_PANNINGRULE(op) \
	op(PanningRule::PanningRule_Speakers) \
	op(PanningRule::PanningRule_Headphones) 

enum class PanningRule : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<PanningRule>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
