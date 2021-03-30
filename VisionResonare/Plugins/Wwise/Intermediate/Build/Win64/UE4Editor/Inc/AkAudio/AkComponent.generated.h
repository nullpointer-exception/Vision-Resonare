// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAkAuxBus;
class UAkComponent;
class UAkSwitchValue;
class UAkTrigger;
class UAkRtpc;
enum class ERTPCValueType : uint8;
class UAkAudioEvent;
struct FAkExternalSourceInfo;
struct FLatentActionInfo;
#ifdef AKAUDIO_AkComponent_generated_h
#error "AkComponent.generated.h already included, missing '#pragma once' in AkComponent.h"
#endif
#define AKAUDIO_AkComponent_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttenuationScalingFactor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOutputBusVolume(Z_Param_BusVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseEarlyReflections) \
	{ \
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Order); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusSendGain); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_GET_UBOOL(Z_Param_SpotReflectors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReverbVolumes(Z_Param_inUseReverbVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeners) \
	{ \
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetListeners(Z_Param_Out_Listeners); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed) \
	{ \
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSwitch(Z_Param_SwitchValue,Z_Param_SwitchGroup,Z_Param_SwitchState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostTrigger(Z_Param_TriggerValue,Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRTPCValue) \
	{ \
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue); \
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEventByName(Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayingID); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostAkEventAndWaitForEndAsync(Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_in_EventName,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayingID); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostAssociatedAkEventAndWaitForEndAsync(Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd) \
	{ \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetAttenuationRadius) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(float*)Z_Param__Result=P_THIS->GetAttenuationRadius(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetAttenuationScalingFactor) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetAttenuationScalingFactor(Z_Param_Value); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetOutputBusVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetOutputBusVolume(Z_Param_BusVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsVolume) \
	{ \
		P_GET_PROPERTY(UFloatProperty,Z_Param_SendVolume); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEarlyReflectionsVolume(Z_Param_SendVolume); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetEarlyReflectionsAuxBus) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetEarlyReflectionsAuxBus(Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseEarlyReflections) \
	{ \
		P_GET_OBJECT(UAkAuxBus,Z_Param_AuxBus); \
		P_GET_PROPERTY(UIntProperty,Z_Param_Order); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_BusSendGain); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_MaxPathLength); \
		P_GET_UBOOL(Z_Param_SpotReflectors); \
		P_GET_PROPERTY(UStrProperty,Z_Param_AuxBusName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseEarlyReflections(Z_Param_AuxBus,Z_Param_Order,Z_Param_BusSendGain,Z_Param_MaxPathLength,Z_Param_SpotReflectors,Z_Param_AuxBusName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execUseReverbVolumes) \
	{ \
		P_GET_UBOOL(Z_Param_inUseReverbVolumes); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UseReverbVolumes(Z_Param_inUseReverbVolumes); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetListeners) \
	{ \
		P_GET_TARRAY_REF(UAkComponent*,Z_Param_Out_Listeners); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetListeners(Z_Param_Out_Listeners); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetStopWhenOwnerDestroyed) \
	{ \
		P_GET_UBOOL(Z_Param_bStopWhenOwnerDestroyed); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetStopWhenOwnerDestroyed(Z_Param_bStopWhenOwnerDestroyed); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetSwitch) \
	{ \
		P_GET_OBJECT(UAkSwitchValue,Z_Param_SwitchValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchGroup); \
		P_GET_PROPERTY(UStrProperty,Z_Param_SwitchState); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetSwitch(Z_Param_SwitchValue,Z_Param_SwitchGroup,Z_Param_SwitchState); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostTrigger) \
	{ \
		P_GET_OBJECT(UAkTrigger,Z_Param_TriggerValue); \
		P_GET_PROPERTY(UStrProperty,Z_Param_Trigger); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostTrigger(Z_Param_TriggerValue,Z_Param_Trigger); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execGetRTPCValue) \
	{ \
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue); \
		P_GET_ENUM(ERTPCValueType,Z_Param_InputValueType); \
		P_GET_PROPERTY_REF(UFloatProperty,Z_Param_Out_Value); \
		P_GET_ENUM_REF(ERTPCValueType,Z_Param_Out_OutputValueType); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_GET_PROPERTY(UIntProperty,Z_Param_PlayingID); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->GetRTPCValue(Z_Param_RTPCValue,ERTPCValueType(Z_Param_InputValueType),Z_Param_Out_Value,(ERTPCValueType&)(Z_Param_Out_OutputValueType),Z_Param_RTPC,Z_Param_PlayingID); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execSetRTPCValue) \
	{ \
		P_GET_OBJECT(UAkRtpc,Z_Param_RTPCValue); \
		P_GET_PROPERTY(UFloatProperty,Z_Param_Value); \
		P_GET_PROPERTY(UIntProperty,Z_Param_InterpolationTimeMs); \
		P_GET_PROPERTY(UStrProperty,Z_Param_RTPC); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->SetRTPCValue(Z_Param_RTPCValue,Z_Param_Value,Z_Param_InterpolationTimeMs,Z_Param_RTPC); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventByName) \
	{ \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEventByName(Z_Param_in_EventName); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEndAsync) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayingID); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostAkEventAndWaitForEndAsync(Z_Param_AkEvent,Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAkEventAndWaitForEnd) \
	{ \
		P_GET_OBJECT(UAkAudioEvent,Z_Param_AkEvent); \
		P_GET_PROPERTY(UStrProperty,Z_Param_in_EventName); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAkEventAndWaitForEnd(Z_Param_AkEvent,Z_Param_in_EventName,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEndAsync) \
	{ \
		P_GET_PROPERTY_REF(UIntProperty,Z_Param_Out_PlayingID); \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->PostAssociatedAkEventAndWaitForEndAsync(Z_Param_Out_PlayingID,Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execPostAssociatedAkEventAndWaitForEnd) \
	{ \
		P_GET_TARRAY_REF(FAkExternalSourceInfo,Z_Param_Out_ExternalSources); \
		P_GET_STRUCT(FLatentActionInfo,Z_Param_LatentInfo); \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		*(int32*)Z_Param__Result=P_THIS->PostAssociatedAkEventAndWaitForEnd(Z_Param_Out_ExternalSources,Z_Param_LatentInfo); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_INCLASS \
private: \
	static void StaticRegisterNativesUAkComponent(); \
	friend struct Z_Construct_UClass_UAkComponent_Statics; \
public: \
	DECLARE_CLASS(UAkComponent, UAkGameObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkComponent)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkComponent(UAkComponent&&); \
	NO_API UAkComponent(const UAkComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkComponent)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBus() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionAuxBusName() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionOrder() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionBusSendGain() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain); } \
	FORCEINLINE static uint32 __PPO__EarlyReflectionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength); } \
	FORCEINLINE static uint32 __PPO__roomReverbAuxBusGain() { return STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxEdges() { return STRUCT_OFFSET(UAkComponent, diffractionMaxEdges); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPaths() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPaths); } \
	FORCEINLINE static uint32 __PPO__diffractionMaxPathLength() { return STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength); }


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_56_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h_59_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkComponent_h


#define FOREACH_ENUM_EREFLECTIONFILTERBITS(op) \
	op(EReflectionFilterBits::Wall) \
	op(EReflectionFilterBits::Ceiling) \
	op(EReflectionFilterBits::Floor) 

enum class EReflectionFilterBits;
template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
