// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef AKAUDIO_AkGeometryComponent_generated_h
#error "AkGeometryComponent.generated.h already included, missing '#pragma once' in AkGeometryComponent.h"
#endif
#define AKAUDIO_AkGeometryComponent_generated_h

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_87_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkGeometrySurfaceOverride>();

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_57_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkGeometryData_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkGeometryData>();

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_39_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkTriangle_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkTriangle>();

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_24_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics; \
	AKAUDIO_API static class UScriptStruct* StaticStruct();


template<> AKAUDIO_API UScriptStruct* StaticStruct<struct FAkAcousticSurface>();

#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_SPARSE_DATA
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConvertMesh(); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->UpdateGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execRemoveGeometry) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->RemoveGeometry(); \
		P_NATIVE_END; \
	} \
 \
	DECLARE_FUNCTION(execConvertMesh) \
	{ \
		P_FINISH; \
		P_NATIVE_BEGIN; \
		P_THIS->ConvertMesh(); \
		P_NATIVE_END; \
	}


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_ARCHIVESERIALIZER \
	DECLARE_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent, NO_API)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_ARCHIVESERIALIZER


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_INCLASS \
private: \
	static void StaticRegisterNativesUAkGeometryComponent(); \
	friend struct Z_Construct_UClass_UAkGeometryComponent_Statics; \
public: \
	DECLARE_CLASS(UAkGeometryComponent, USceneComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/AkAudio"), NO_API) \
	DECLARE_SERIALIZER(UAkGeometryComponent) \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_ARCHIVESERIALIZER


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGeometryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public:


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UAkGeometryComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UAkGeometryComponent(UAkGeometryComponent&&); \
	NO_API UAkGeometryComponent(const UAkGeometryComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UAkGeometryComponent); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UAkGeometryComponent); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UAkGeometryComponent)


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__GeometryData() { return STRUCT_OFFSET(UAkGeometryComponent, GeometryData); }


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_113_PROLOG
#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_RPC_WRAPPERS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_INCLASS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_PRIVATE_PROPERTY_OFFSET \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_SPARSE_DATA \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_RPC_WRAPPERS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_INCLASS_NO_PURE_DECLS \
	VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h_116_ENHANCED_CONSTRUCTORS \
static_assert(false, "Unknown access specifier for GENERATED_BODY() macro in class AkGeometryComponent."); \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> AKAUDIO_API UClass* StaticClass<class UAkGeometryComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VisionResonare_Plugins_Wwise_Source_AkAudio_Classes_AkGeometryComponent_h


#define FOREACH_ENUM_AKMESHTYPE(op) \
	op(AkMeshType::StaticMesh) \
	op(AkMeshType::CollisionMesh) 

enum class AkMeshType : uint8;
template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
