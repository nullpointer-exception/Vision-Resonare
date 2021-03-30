// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkAndroidInitializationSettings_generated_h
#error "AkAndroidInitializationSettings.generated.h already included, missing '#pragma once' in AkAndroidInitializationSettings.h"
#endif
#define AKAUDIO_AkAndroidInitializationSettings_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAndroidAdvancedInitializationSettings_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct(); \
	typedef FAkAdvancedInitializationSettingsWithMultiCoreRendering Super;


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAndroidAdvancedInitializationSettings>();

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkAndroidInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkAndroidInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAndroidInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_INCLASS \
private: \
	static void StaticRegisterNativesUAkAndroidInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkAndroidInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkAndroidInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkAndroidInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAndroidInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAndroidInitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAndroidInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAndroidInitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAndroidInitializationSettings(UAkAndroidInitializationSettings&&); \
	NO_API UAkAndroidInitializationSettings(const UAkAndroidInitializationSettings&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkAndroidInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkAndroidInitializationSettings(UAkAndroidInitializationSettings&&); \
	NO_API UAkAndroidInitializationSettings(const UAkAndroidInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkAndroidInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkAndroidInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkAndroidInitializationSettings)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_PRIVATE_PROPERTY_OFFSET
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_30_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h_33_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkAndroidInitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkAndroidInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Android_AkAndroidInitializationSettings_h


#define FOREACH_ENUM_EAKANDROIDAUDIOAPI(op) \
	op(EAkAndroidAudioAPI::AAudio) \
	op(EAkAndroidAudioAPI::OpenSL_ES) 

enum class EAkAndroidAudioAPI : uint32;
template<> AKAUDIO_API UEnum* StaticEnum<EAkAndroidAudioAPI>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
