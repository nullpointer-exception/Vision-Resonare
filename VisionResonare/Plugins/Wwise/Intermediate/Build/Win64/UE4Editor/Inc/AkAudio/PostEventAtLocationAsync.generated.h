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
struct FVector;
struct FRotator;
class UPostEventAtLocationAsync;
#ifdef AKAUDIO_PostEventAtLocationAsync_generated_h
#error "PostEventAtLocationAsync.generated.h already included, missing '#pragma once' in PostEventAtLocationAsync.h"
#endif
#define AKAUDIO_PostEventAtLocationAsync_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_7_DELEGATE \
struct _Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms \
{ \
	int32 PlayingID; \
}; \
static inline void FPostEventAtLocationAsyncOutputPin_DelegateWrapper(const FMulticastScriptDelegate& PostEventAtLocationAsyncOutputPin, int32 PlayingID) \
{ \
	_Script_AkAudio_eventPostEventAtLocationAsyncOutputPin_Parms Parms; \
	Parms.PlayingID=PlayingID; \
	PostEventAtLocationAsyncOutputPin.ProcessMulticastDelegate<UObject>(&Parms); \
}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollPostEventFuture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocationAsync) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPostEventAtLocationAsync**)Z_Param__Result=UPostEventAtLocationAsync::PostEventAtLocationAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execPollPostEventFuture) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PollPostEventFuture(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostEventAtLocationAsync) \
	{ \
		P_GET_OBJECT(UObject,Z_Param_WorldContextObject); \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_STRUCT(FVector,Z_Param_Location); \
		P_GET_STRUCT(FRotator,Z_Param_Orientation); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(UPostEventAtLocationAsync**)Z_Param__Result=UPostEventAtLocationAsync::PostEventAtLocationAsync(Z_Param_WorldContextObject,Z_Param_AkEvent,Z_Param_Location,Z_Param_Orientation); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPostEventAtLocationAsync(); \
	friend struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAtLocationAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAtLocationAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUPostEventAtLocationAsync(); \
	friend struct Z_Construct_UClass_UPostEventAtLocationAsync_Statics; \
public: \
	DECLARE_CLASS(UPostEventAtLocationAsync, UBlueprintAsyncActionBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UPostEventAtLocationAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAtLocationAsync) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAtLocationAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAtLocationAsync); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAtLocationAsync(UPostEventAtLocationAsync&&); \
	NO_API UPostEventAtLocationAsync(const UPostEventAtLocationAsync&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPostEventAtLocationAsync(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPostEventAtLocationAsync(UPostEventAtLocationAsync&&); \
	NO_API UPostEventAtLocationAsync(const UPostEventAtLocationAsync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPostEventAtLocationAsync); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPostEventAtLocationAsync); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPostEventAtLocationAsync)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_PRIVATE_PROPERTY_OFFSET
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_9_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UPostEventAtLocationAsync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_BlueprintNodes_PostEventAtLocationAsync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
