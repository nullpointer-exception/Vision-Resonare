// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkSwitchInitializationSettings_generated_h
#error "AkSwitchInitializationSettings.generated.h already included, missing '#pragma once' in AkSwitchInitializationSettings.h"
#endif
#define AKAUDIO_AkSwitchInitializationSettings_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execMigrateMultiCoreRendering) \
	{ \
		P_GET_UBOOL(Z_Param_NewValue); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->MigrateMultiCoreRendering(Z_Param_NewValue); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkSwitchInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkSwitchInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkSwitchInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSwitchInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_INCLASS \
private: \
	static void StaticRegisterNativesUAkSwitchInitializationSettings(); \
	friend struct Z_Construct_UClass_UAkSwitchInitializationSettings_Statics; \
public: \
	DECLARE_CLASS(UAkSwitchInitializationSettings, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkSwitchInitializationSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSwitchInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSwitchInitializationSettings) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSwitchInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSwitchInitializationSettings); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSwitchInitializationSettings(UAkSwitchInitializationSettings&&); \
	NO_API UAkSwitchInitializationSettings(const UAkSwitchInitializationSettings&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkSwitchInitializationSettings(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkSwitchInitializationSettings(UAkSwitchInitializationSettings&&); \
	NO_API UAkSwitchInitializationSettings(const UAkSwitchInitializationSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkSwitchInitializationSettings); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkSwitchInitializationSettings); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkSwitchInitializationSettings)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_7_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h_10_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkSwitchInitializationSettings."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkSwitchInitializationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_Platforms_AkPlatform_Switch_AkSwitchInitializationSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
