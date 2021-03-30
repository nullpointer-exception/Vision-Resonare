// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGeometryComponent.h"
#include "Serialization/ArchiveUObjectFromStructuredArchive.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGeometryComponent() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_AkMeshType();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGeometryComponent();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	static UEnum* AkMeshType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_AkMeshType, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkMeshType"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<AkMeshType>()
	{
		return AkMeshType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_AkMeshType(AkMeshType_StaticEnum, TEXT("/Script/AkAudio"), TEXT("AkMeshType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_AkMeshType_Hash() { return 3680179585U; }
	UEnum* Z_Construct_UEnum_AkAudio_AkMeshType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("AkMeshType"), 0, Get_Z_Construct_UEnum_AkAudio_AkMeshType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "AkMeshType::StaticMesh", (int64)AkMeshType::StaticMesh },
				{ "AkMeshType::CollisionMesh", (int64)AkMeshType::CollisionMesh },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "CollisionMesh.DisplayName", "Simple Collision" },
				{ "CollisionMesh.Name", "AkMeshType::CollisionMesh" },
				{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
				{ "StaticMesh.Name", "AkMeshType::StaticMesh" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"AkMeshType",
				"AkMeshType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
class UScriptStruct* FAkGeometrySurfaceOverride::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfaceOverride"), sizeof(FAkGeometrySurfaceOverride), Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfaceOverride>()
{
	return FAkGeometrySurfaceOverride::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometrySurfaceOverride(FAkGeometrySurfaceOverride::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometrySurfaceOverride"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkGeometrySurfaceOverride")),new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfaceOverride;
	struct Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableOcclusionOverride_MetaData[];
#endif
		static void NewProp_bEnableOcclusionOverride_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableOcclusionOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AcousticTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfaceOverride>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** Occlusion value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\n\x09* If more that one surface is between the emitter and the listener, than the maximum of each surface's occlusion value is used. If the emitter and listener are in different rooms, the room's WallOcclusion is taken into account.\n\x09* Valid range : (0.0, 1.0)\n\x09*/" },
		{ "EditCondition", "bEnableOcclusionOverride" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "Occlusion value to set when modeling sound transmission through geometry. Transmission is modeled only when there is no direct line of sight from the emitter to the listener.\nIf more that one surface is between the emitter and the listener, than the maximum of each surface's occlusion value is used. If the emitter and listener are in different rooms, the room's WallOcclusion is taken into account.\nValid range : (0.0, 1.0)" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit(void* Obj)
	{
		((FAkGeometrySurfaceOverride*)Obj)->bEnableOcclusionOverride = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride = { "bEnableOcclusionOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(FAkGeometrySurfaceOverride), &Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "/** The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\n\x09* If left to None, the mesh's physical material will be used to fetch an acoustic texture.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "The Acoustic Texture represents the sound absorption on the surface of the geometry when a sound bounces off of it.\nIf left to None, the mesh's physical material will be used to fetch an acoustic texture." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfaceOverride, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_OcclusionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_bEnableOcclusionOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::NewProp_AcousticTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfaceOverride",
		sizeof(FAkGeometrySurfaceOverride),
		alignof(FAkGeometrySurfaceOverride),
		Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometrySurfaceOverride"), sizeof(FAkGeometrySurfaceOverride), Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride_Hash() { return 240119922U; }
class UScriptStruct* FAkGeometryData::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometryData, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometryData"), sizeof(FAkGeometryData), Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometryData>()
{
	return FAkGeometryData::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometryData(FAkGeometryData::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometryData"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkGeometryData")),new UScriptStruct::TCppStructOps<FAkGeometryData>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometryData;
	struct Z_Construct_UScriptStruct_FAkGeometryData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToOverrideOcclusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToOverrideOcclusion;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToOverrideOcclusion_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ToOverrideAcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ToOverrideAcousticTexture;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ToOverrideAcousticTexture_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Triangles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Triangles;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Triangles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surfaces_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Surfaces;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Surfaces_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Vertices_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Vertices;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Vertices_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometryData>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideOcclusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner = { "ToOverrideOcclusion", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, ToOverrideAcousticTexture), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner = { "ToOverrideAcousticTexture", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles = { "Triangles", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Triangles), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner = { "Triangles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkTriangle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces = { "Surfaces", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Surfaces), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner = { "Surfaces", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkAcousticSurface, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices = { "Vertices", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometryData, Vertices), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner = { "Vertices", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideOcclusion_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_ToOverrideAcousticTexture_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Triangles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Surfaces_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometryData_Statics::NewProp_Vertices_Inner,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometryData",
		sizeof(FAkGeometryData),
		alignof(FAkGeometryData),
		Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometryData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometryData()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometryData"), sizeof(FAkGeometryData), Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometryData_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometryData_Hash() { return 4109088418U; }
class UScriptStruct* FAkTriangle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkTriangle, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkTriangle"), sizeof(FAkTriangle), Get_Z_Construct_UScriptStruct_FAkTriangle_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkTriangle>()
{
	return FAkTriangle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkTriangle(FAkTriangle::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkTriangle"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkTriangle")),new UScriptStruct::TCppStructOps<FAkTriangle>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkTriangle;
	struct Z_Construct_UScriptStruct_FAkTriangle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Surface_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Surface;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point2_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Point2;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point1_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Point1;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Point0_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt16PropertyParams NewProp_Point0;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkTriangle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkTriangle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface = { "Surface", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Surface), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2 = { "Point2", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point2), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1 = { "Point1", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point1), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt16PropertyParams Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0 = { "Point0", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt16, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkTriangle, Point0), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Surface,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point2,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point1,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkTriangle_Statics::NewProp_Point0,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkTriangle",
		sizeof(FAkTriangle),
		alignof(FAkTriangle),
		Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkTriangle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkTriangle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkTriangle"), sizeof(FAkTriangle), Get_Z_Construct_UScriptStruct_FAkTriangle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkTriangle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkTriangle_Hash() { return 1130643092U; }
class UScriptStruct* FAkAcousticSurface::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkAcousticSurface, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkAcousticSurface"), sizeof(FAkAcousticSurface), Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkAcousticSurface>()
{
	return FAkAcousticSurface::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkAcousticSurface(FAkAcousticSurface::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkAcousticSurface"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkAcousticSurface")),new UScriptStruct::TCppStructOps<FAkAcousticSurface>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkAcousticSurface;
	struct Z_Construct_UScriptStruct_FAkAcousticSurface_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Name_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Name;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Occlusion_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Occlusion;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Texture_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_Texture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkAcousticSurface>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Name), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion = { "Occlusion", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Occlusion), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture = { "Texture", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkAcousticSurface, Texture), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Occlusion,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::NewProp_Texture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkAcousticSurface",
		sizeof(FAkAcousticSurface),
		alignof(FAkAcousticSurface),
		Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkAcousticSurface()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkAcousticSurface"), sizeof(FAkAcousticSurface), Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkAcousticSurface_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkAcousticSurface_Hash() { return 1457680892U; }
	void UAkGeometryComponent::StaticRegisterNativesUAkGeometryComponent()
	{
		UClass* Class = UAkGeometryComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConvertMesh", &UAkGeometryComponent::execConvertMesh },
			{ "RemoveGeometry", &UAkGeometryComponent::execRemoveGeometry },
			{ "UpdateGeometry", &UAkGeometryComponent::execUpdateGeometry },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "ConvertMesh", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "RemoveGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkGeometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGeometryComponent, nullptr, "UpdateGeometry", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGeometryComponent_NoRegister()
	{
		return UAkGeometryComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkGeometryComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GeometryData_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_GeometryData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AssociatedRoom_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AssociatedRoom;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[];
#endif
		static void NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffractionOnBoundaryEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableDiffraction_MetaData[];
#endif
		static void NewProp_bEnableDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CollisionMeshSurfaceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CollisionMeshSurfaceOverride;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StaticMeshSurfaceOverride_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_StaticMeshSurfaceOverride;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StaticMeshSurfaceOverride_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StaticMeshSurfaceOverride_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeldingThreshold_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_WeldingThreshold;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LOD_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_LOD;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_MeshType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MeshType_Underlying;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGeometryComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGeometryComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGeometryComponent_ConvertMesh, "ConvertMesh" }, // 646467087
		{ &Z_Construct_UFunction_UAkGeometryComponent_RemoveGeometry, "RemoveGeometry" }, // 2816760163
		{ &Z_Construct_UFunction_UAkGeometryComponent_UpdateGeometry, "UpdateGeometry" }, // 2356645227
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Tags Trigger PhysicsVolume" },
		{ "IncludePath", "AkGeometryComponent.h" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData = { "GeometryData", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, GeometryData), Z_Construct_UScriptStruct_FAkGeometryData, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData[] = {
		{ "Category", "Geometry|Optimization" },
		{ "Comment", "/** (Optional) Associate this Surface Reflector Set with a Room.\n\x09* Associating a spatial audio geometry with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.\n\x09* It is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\n\x09* Take note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "(Optional) Associate this Surface Reflector Set with a Room.\nAssociating a spatial audio geometry with a particular room will limit the scope in which the geometry is visible/accessible. Leave it to None and this geometry will have a global scope.\nIt is recommended to associate geometry with a room when the geometry is (1) fully contained within the room (ie. not visible to other rooms except by portals), and (2) the room does not share geometry with other rooms. Doing so reduces the search space for ray casting performed by reflection and diffraction calculations.\nTake note that once one or more geometry sets are associated with a room, that room will no longer be able to access geometry that is in the global scope." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom = { "AssociatedRoom", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, AssociatedRoom), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData[] = {
		{ "Category", "Geometry|Diffraction" },
		{ "Comment", "/** Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process.  */" },
		{ "EditCondition", "bEnableDiffraction" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction on boundary edges for this Geometry. Boundary edges are edges that are connected to only one triangle. Depending on the specific shape of the geometry, boundary edges may or may not be useful and it is beneficial to reduce the total number of diffraction edges to process." },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffractionOnBoundaryEdges = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges = { "bEnableDiffractionOnBoundaryEdges", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData[] = {
		{ "Category", "Geometry|Diffraction" },
		{ "Comment", "/** Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game. */" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "Enable or disable geometric diffraction for this mesh. Check this box to have Wwise Spatial Audio generate diffraction edges on the geometry. The diffraction edges will be visible in the Wwise game object viewer when connected to the game." },
	};
#endif
	void Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit(void* Obj)
	{
		((UAkGeometryComponent*)Obj)->bEnableDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction = { "bEnableDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkGeometryComponent), &Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "/** Override the acoustic properties of the collision mesh.*/" },
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "Override the acoustic properties of the collision mesh." },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride = { "CollisionMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, CollisionMeshSurfaceOverride), Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData[] = {
		{ "Category", "Geometry" },
		{ "Comment", "/** Override the acoustic properties of this mesh per material.*/" },
		{ "DisplayName", "Acoustic Properties Override" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "Override the acoustic properties of this mesh per material." },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, StaticMeshSurfaceOverride), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp = { "StaticMeshSurfaceOverride_Key", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp = { "StaticMeshSurfaceOverride", nullptr, (EPropertyFlags)0x0000000000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfaceOverride, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The local distance in Unreal units between two vertices to be welded together.\n\x09* Any two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\n\x09* Increasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\n\x09* Increasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "The local distance in Unreal units between two vertices to be welded together.\nAny two vertices closer than this threshold will be treated as the same unique vertex and assigned the same position.\nIncreasing this threshold decreases the number of gaps between triangles, resulting in a more continuous mesh and less sound leaking though, as well as eliminating triangles that are too small to be significant.\nIncreasing this threshold also helps Spatial Audio's edge-finding algorithm to find more valid diffraction edges." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold = { "WeldingThreshold", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, WeldingThreshold), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** The Static Mesh's LOD to use */" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
		{ "ToolTip", "The Static Mesh's LOD to use" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD = { "LOD", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, LOD), METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData[] = {
		{ "Category", "Geometry" },
		{ "ModuleRelativePath", "Classes/AkGeometryComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType = { "MeshType", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGeometryComponent, MeshType), Z_Construct_UEnum_AkAudio_AkMeshType, METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_GeometryData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_AssociatedRoom,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffractionOnBoundaryEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_bEnableDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_CollisionMeshSurfaceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_StaticMeshSurfaceOverride_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_WeldingThreshold,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_LOD,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGeometryComponent_Statics::NewProp_MeshType_Underlying,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGeometryComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGeometryComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams = {
		&UAkGeometryComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGeometryComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGeometryComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGeometryComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGeometryComponent, 977337077);
	template<> AKAUDIO_API UClass* StaticClass<UAkGeometryComponent>()
	{
		return UAkGeometryComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGeometryComponent(Z_Construct_UClass_UAkGeometryComponent, &UAkGeometryComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGeometryComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGeometryComponent);
	IMPLEMENT_FSTRUCTUREDARCHIVE_SERIALIZER(UAkGeometryComponent)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
