// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkSettings() {}
// Cross Module References
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAcousticTexture_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FFilePath();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDirectoryPath();
	ENGINE_API UClass* Z_Construct_UClass_UPhysicalMaterial_NoRegister();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
class UScriptStruct* FAkGeometrySurfacePropertiesToMap::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkGeometrySurfacePropertiesToMap"), sizeof(FAkGeometrySurfacePropertiesToMap), Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkGeometrySurfacePropertiesToMap>()
{
	return FAkGeometrySurfacePropertiesToMap::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkGeometrySurfacePropertiesToMap(FAkGeometrySurfacePropertiesToMap::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkGeometrySurfacePropertiesToMap"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkGeometrySurfacePropertiesToMap")),new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkGeometrySurfacePropertiesToMap;
	struct Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AcousticTexture_MetaData[];
#endif
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AcousticTexture;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkGeometrySurfacePropertiesToMap>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue = { "OcclusionValue", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, OcclusionValue), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture = { "AcousticTexture", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkGeometrySurfacePropertiesToMap, AcousticTexture), Z_Construct_UClass_UAkAcousticTexture_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_OcclusionValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::NewProp_AcousticTexture,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		nullptr,
		&NewStructOps,
		"AkGeometrySurfacePropertiesToMap",
		sizeof(FAkGeometrySurfacePropertiesToMap),
		alignof(FAkGeometrySurfacePropertiesToMap),
		Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkGeometrySurfacePropertiesToMap"), sizeof(FAkGeometrySurfacePropertiesToMap), Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap_Hash() { return 3192290733U; }
	void UAkSettings::StaticRegisterNativesUAkSettings()
	{
	}
	UClass* Z_Construct_UClass_UAkSettings_NoRegister()
	{
		return UAkSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseMacInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseMacInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseWindowsInstallationPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseWindowsInstallationPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_FixupRedirectorsDuringMigration_MetaData[];
#endif
		static void NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FixupRedirectorsDuringMigration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MigratedEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_MigratedEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bEnableMultiCoreRendering_MetaData[];
#endif
		static void NewProp_bEnableMultiCoreRendering_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bEnableMultiCoreRendering;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AskedToUseNewAssetManagement_MetaData[];
#endif
		static void NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_AskedToUseNewAssetManagement;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UnrealCultureToWwiseCulture_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_UnrealCultureToWwiseCulture;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_Key_KeyProp;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_UnrealCultureToWwiseCulture_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommandletCommitMessage_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_CommandletCommitMessage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableAutomaticAssetSynchronization_MetaData[];
#endif
		static void NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableAutomaticAssetSynchronization;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseEventBasedPackaging_MetaData[];
#endif
		static void NewProp_UseEventBasedPackaging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseEventBasedPackaging;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitMediaPerFolder_MetaData[];
#endif
		static void NewProp_SplitMediaPerFolder_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplitMediaPerFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplitSwitchContainerMedia_MetaData[];
#endif
		static void NewProp_SplitSwitchContainerMedia_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SplitSwitchContainerMedia;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkGeometryMap_MetaData[];
#endif
		static const UE4CodeGen_Private::FMapPropertyParams NewProp_AkGeometryMap;
		static const UE4CodeGen_Private::FSoftObjectPropertyParams NewProp_AkGeometryMap_Key_KeyProp;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AkGeometryMap_ValueProp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultOcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_DefaultOcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bAutoConnectToWAAPI_MetaData[];
#endif
		static void NewProp_bAutoConnectToWAAPI_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bAutoConnectToWAAPI;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseSoundDataFolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseSoundDataFolder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WwiseProjectPath_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WwiseProjectPath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxSimultaneousReverbVolumes_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_MaxSimultaneousReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AkSettings.h" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath = { "WwiseMacInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseMacInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath = { "WwiseWindowsInstallationPath", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseWindowsInstallationPath_DEPRECATED), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->FixupRedirectorsDuringMigration = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration = { "FixupRedirectorsDuringMigration", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->MigratedEnableMultiCoreRendering = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering = { "MigratedEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bEnableMultiCoreRendering_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering = { "bEnableMultiCoreRendering", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->AskedToUseNewAssetManagement = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement = { "AskedToUseNewAssetManagement", nullptr, (EPropertyFlags)0x0010000000004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, UnrealCultureToWwiseCulture), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_MetaData)) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp = { "UnrealCultureToWwiseCulture_Key", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp = { "UnrealCultureToWwiseCulture", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// Commit message that GenerateSoundBanksCommandlet will use\n" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Commit message that GenerateSoundBanksCommandlet will use" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage = { "CommandletCommitMessage", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, CommandletCommitMessage), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->EnableAutomaticAssetSynchronization_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization = { "EnableAutomaticAssetSynchronization", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// Enable the new Event-based Soundbank Pipeline\n// When ticking this to true, it will delete the content of the SoundBank folder\n// and modify the Wwise project for the required changes in the project settings.\n// The new assets will be created the next time you open the editor.\n" },
		{ "DisplayName", "Use Event-Based Packaging" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Enable the new Event-based Soundbank Pipeline\nWhen ticking this to true, it will delete the content of the SoundBank folder\nand modify the Wwise project for the required changes in the project settings.\nThe new assets will be created the next time you open the editor." },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->UseEventBasedPackaging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging = { "UseEventBasedPackaging", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// Split Media folder into several folders.\n// Perforce has a limit of 32000 files per folder, if you are using Perforce you are strongly suggested to enable this.\n" },
		{ "EditCondition", "UseEventBasedPackaging" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Split Media folder into several folders.\nPerforce has a limit of 32000 files per folder, if you are using Perforce you are strongly suggested to enable this." },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitMediaPerFolder = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder = { "SplitMediaPerFolder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// When generating the event data, the media contained in switch containers will be splitted by state/switch value\n// and only loaded if the state/switch value are currently loaded\n" },
		{ "EditCondition", "UseEventBasedPackaging" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "When generating the event data, the media contained in switch containers will be splitted by state/switch value\nand only loaded if the state/switch value are currently loaded" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->SplitSwitchContainerMedia = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia = { "SplitSwitchContainerMedia", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData[] = {
		{ "Category", "AkGeometry Surface Properties Map" },
		{ "Comment", "// PhysicalMaterial to AcousticTexture and Occlusion Value Map\n" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "PhysicalMaterial to AcousticTexture and Occlusion Value Map" },
	};
#endif
	const UE4CodeGen_Private::FMapPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0010000000004041, UE4CodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, AkGeometryMap), METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_MetaData)) };
	const UE4CodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp = { "AkGeometryMap_Key", nullptr, (EPropertyFlags)0x0004000000004001, UE4CodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UPhysicalMaterial_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp = { "AkGeometryMap", nullptr, (EPropertyFlags)0x0000000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FAkGeometrySurfacePropertiesToMap, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData[] = {
		{ "Category", "Occlusion" },
		{ "Comment", "// Default value for Occlusion Collision Channel when creating a new Ak Component.\n" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Default value for Occlusion Collision Channel when creating a new Ak Component." },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel = { "DefaultOcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, DefaultOcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
	};
#endif
	void Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit(void* Obj)
	{
		((UAkSettings*)Obj)->bAutoConnectToWAAPI_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI = { "bAutoConnectToWAAPI", nullptr, (EPropertyFlags)0x0010000020004000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkSettings), &Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData[] = {
		{ "Category", "Sound Data" },
		{ "Comment", "// Where the Sound Data will be generated in the Content Folder\n" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "RelativeToGameContentDir", "" },
		{ "ToolTip", "Where the Sound Data will be generated in the Content Folder" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder = { "WwiseSoundDataFolder", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseSoundDataFolder), Z_Construct_UScriptStruct_FDirectoryPath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData[] = {
		{ "AbsolutePath", "" },
		{ "Category", "Installation" },
		{ "Comment", "// Wwise Project Path\n" },
		{ "FilePathFilter", "wproj" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "Wwise Project Path" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath = { "WwiseProjectPath", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, WwiseProjectPath), Z_Construct_UScriptStruct_FFilePath, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData[] = {
		{ "Category", "Ak Reverb Volume" },
		{ "Comment", "// The number of AkReverbVolumes that will be simultaneously applied to a sound source\n" },
		{ "ModuleRelativePath", "Classes/AkSettings.h" },
		{ "ToolTip", "The number of AkReverbVolumes that will be simultaneously applied to a sound source" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes = { "MaxSimultaneousReverbVolumes", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkSettings, MaxSimultaneousReverbVolumes), nullptr, METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseMacInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseWindowsInstallationPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_FixupRedirectorsDuringMigration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MigratedEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bEnableMultiCoreRendering,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AskedToUseNewAssetManagement,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UnrealCultureToWwiseCulture_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_CommandletCommitMessage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_EnableAutomaticAssetSynchronization,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_UseEventBasedPackaging,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitMediaPerFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_SplitSwitchContainerMedia,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_Key_KeyProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_AkGeometryMap_ValueProp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_DefaultOcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_bAutoConnectToWAAPI,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseSoundDataFolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_WwiseProjectPath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkSettings_Statics::NewProp_MaxSimultaneousReverbVolumes,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkSettings_Statics::ClassParams = {
		&UAkSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UAkSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkSettings, 3472784969);
	template<> AKAUDIO_API UClass* StaticClass<UAkSettings>()
	{
		return UAkSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkSettings(Z_Construct_UClass_UAkSettings, &UAkSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
