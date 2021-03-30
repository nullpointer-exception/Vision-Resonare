// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
class UAkAudioEvent;
class AActor;
struct FAkExternalSourceInfo;
class UPostEventAsync;
#ifdef AKAUDIO_PostEventAsync_generated_h
#error "PostEventAsync.generated.h already included, missing '#pragma once' in PostEventAsync.h"
#endif
#define AKAUDIO_PostEventAsync_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_7_DELEGATE \
struct _Script_AkAudio_eventPostEventAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollPostEventFuture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAsync) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_bStopWhenAttachedToDestroyed); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollPostEventFuture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAsync) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_OBJECT(AActor,Z_Param_Actor); \
		P_GET_PROPERTY(UIntProperty,Z_Param_CallbackMask); \
		P_GET_PROPERTY_REF(UDelegateProperty,Z_Param_Out_PostEventCallback); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_UBOOL(Z_Param_bStopWhenAttachedToDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPostEventAsync**)Z_Param__Result=UPostEventAsync::PostEventAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Actor,Z_Param_CallbackMask,FOnAkPostEventCallback(Z_Param_Out_PostEventCallback),Z_Param_Out_ExternalSources,Z_Param_bStopWhenAttachedToDestroyed); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAsync(); \
	friend struct Z_Construct_UClass_UPostEventAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAsync(UPostEventAsync&&); \
	NO_API UPostEventAsync(const UPostEventAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_PRIVATE_PROPERTY_OFFSET
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_9_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
