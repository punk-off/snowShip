// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FAkPropertyToControl;
#ifdef AKAUDIO_AkItemProperties_generated_h
#error "AkItemProperties.generated.h already included, missing '#pragma once' in AkItemProperties.h"
#endif
#define AKAUDIO_AkItemProperties_generated_h

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_30_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkPropertyToControl_Statics; \
	static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkPropertyToControl>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_18_DELEGATE \
struct _Script_AkAudio_eventOnItemPropertyDragDetected_Parms \
{ \
	FString PropertyDragged; \
}; \
static inline void FOnItemPropertyDragDetected_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertyDragDetected, const FString& PropertyDragged) \
{ \
	_Script_AkAudio_eventOnItemPropertyDragDetected_Parms Parms; \
	Parms.PropertyDragged=PropertyDragged; \
	OnItemPropertyDragDetected.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_15_DELEGATE \
struct _Script_AkAudio_eventOnItemPropertySelectionChanged_Parms \
{ \
	FString PropertySelected; \
}; \
static inline void FOnItemPropertySelectionChanged_DelegateWrapper(const FMulticastScriptDelegate& OnItemPropertySelectionChanged, const FString& PropertySelected) \
{ \
	_Script_AkAudio_eventOnItemPropertySelectionChanged_Parms Parms; \
	Parms.PropertySelected=PropertySelected; \
	OnItemPropertySelectionChanged.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText); \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToText); \
	DECLARE_FUNCTION(execConv_FAkPropertyToControlToString);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend struct Z_Construct_UClass_UAkItemPropertiesConv_Statics; \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemPropertiesConv(); \
	friend struct Z_Construct_UClass_UAkItemPropertiesConv_Statics; \
public: \
	DECLARE_CLASS(UAkItemPropertiesConv, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemPropertiesConv)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemPropertiesConv) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemPropertiesConv(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemPropertiesConv(UAkItemPropertiesConv&&); \
	NO_API UAkItemPropertiesConv(const UAkItemPropertiesConv&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemPropertiesConv); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemPropertiesConv); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemPropertiesConv)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_43_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_46_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemPropertiesConv."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemPropertiesConv>();

#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_SPARSE_DATA
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSetSearchText); \
	DECLARE_FUNCTION(execGetSearchText); \
	DECLARE_FUNCTION(execGetSelectedProperty);


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend struct Z_Construct_UClass_UAkItemProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS \
private: \
	static void StaticRegisterNativesUAkItemProperties(); \
	friend struct Z_Construct_UClass_UAkItemProperties_Statics; \
public: \
	DECLARE_CLASS(UAkItemProperties, UWidget, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkItemProperties) \
	static const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemProperties) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public:


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkItemProperties(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkItemProperties(UAkItemProperties&&); \
	NO_API UAkItemProperties(const UAkItemProperties&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkItemProperties); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkItemProperties); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkItemProperties)


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_64_PROLOG
#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_PRIVATE_PROPERTY_OFFSET \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_SPARSE_DATA \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_RPC_WRAPPERS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_INCLASS_NO_PURE_DECLS \
	octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h_67_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkItemProperties."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkItemProperties>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID octoberBlock_Plugins_Wwise_Source_AkAudio_Classes_AkWaapiUMG_Components_AkItemProperties_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
