// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkHololensInitializationSettings() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkHololensInitializationSettings_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkHololensInitializationSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate();
// End Cross Module References
	static UEnum* EAkHololensAudioAPI_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI, Z_Construct_UPackage__Script_AkAudio(), TEXT("EAkHololensAudioAPI"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EAkHololensAudioAPI>()
	{
		return EAkHololensAudioAPI_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EAkHololensAudioAPI(EAkHololensAudioAPI_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EAkHololensAudioAPI"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI_Hash() { return 1221533961U; }
	UEnum* Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EAkHololensAudioAPI"), 0, Get_Z_Construct_UEnum_AkAudio_EAkHololensAudioAPI_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EAkHololensAudioAPI::Wasapi", (int64)EAkHololensAudioAPI::Wasapi },
				{ "EAkHololensAudioAPI::XAudio2", (int64)EAkHololensAudioAPI::XAudio2 },
				{ "EAkHololensAudioAPI::DirectSound", (int64)EAkHololensAudioAPI::DirectSound },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitmask", "" },
				{ "DirectSound.Name", "EAkHololensAudioAPI::DirectSound" },
				{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
				{ "Wasapi.Name", "EAkHololensAudioAPI::Wasapi" },
				{ "XAudio2.Name", "EAkHololensAudioAPI::XAudio2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EAkHololensAudioAPI",
				"EAkHololensAudioAPI",
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
class UScriptStruct* FAkHololensAdvancedInitializationSettings::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern AKAUDIO_API uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings, Z_Construct_UPackage__Script_AkAudio(), TEXT("AkHololensAdvancedInitializationSettings"), sizeof(FAkHololensAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash());
	}
	return Singleton;
}
template<> AKAUDIO_API UScriptStruct* StaticStruct<FAkHololensAdvancedInitializationSettings>()
{
	return FAkHololensAdvancedInitializationSettings::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FAkHololensAdvancedInitializationSettings(FAkHololensAdvancedInitializationSettings::StaticStruct, TEXT("/Script/AkAudio"), TEXT("AkHololensAdvancedInitializationSettings"), false, nullptr, nullptr);
static struct FScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings
{
	FScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("AkHololensAdvancedInitializationSettings")),new UScriptStruct::TCppStructOps<FAkHololensAdvancedInitializationSettings>);
	}
} ScriptStruct_AkAudio_StaticRegisterNativesFAkHololensAdvancedInitializationSettings;
	struct Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_UseHeadMountedDisplayAudioDevice_MetaData[];
#endif
		static void NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_UseHeadMountedDisplayAudioDevice;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GlobalFocus_MetaData[];
#endif
		static void NewProp_GlobalFocus_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_GlobalFocus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AudioAPI_MetaData[];
#endif
		static const UE4CodeGen_Private::FUInt32PropertyParams NewProp_AudioAPI;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAkHololensAdvancedInitializationSettings>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit(void* Obj)
	{
		((FAkHololensAdvancedInitializationSettings*)Obj)->UseHeadMountedDisplayAudioDevice = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice = { "UseHeadMountedDisplayAudioDevice", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkHololensAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus_MetaData[] = {
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
		{ "ToolTip", "Only used when \"AudioAPI\" is \"DirectSound\", sounds will be muted if set to false when the game loses the focus." },
	};
#endif
	void Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus_SetBit(void* Obj)
	{
		((FAkHololensAdvancedInitializationSettings*)Obj)->GlobalFocus = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus = { "GlobalFocus", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(FAkHololensAdvancedInitializationSettings), &Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkHololensAudioAPI" },
		{ "Category", "Ak Initialization Settings" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
		{ "ToolTip", "Main audio API to use. Leave set to \"Default\" for the default audio sink. This value will be ignored if a valid \"AudioDeviceShareset\" is provided." },
	};
#endif
	const UE4CodeGen_Private::FUInt32PropertyParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_AudioAPI = { "AudioAPI", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::UInt32, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FAkHololensAdvancedInitializationSettings, AudioAPI), METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_AudioAPI_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_UseHeadMountedDisplayAudioDevice,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_GlobalFocus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::NewProp_AudioAPI,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
		Z_Construct_UScriptStruct_FAkAdvancedInitializationSettingsWithMultiCoreRendering,
		&NewStructOps,
		"AkHololensAdvancedInitializationSettings",
		sizeof(FAkHololensAdvancedInitializationSettings),
		alignof(FAkHololensAdvancedInitializationSettings),
		Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("AkHololensAdvancedInitializationSettings"), sizeof(FAkHololensAdvancedInitializationSettings), Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings_Hash() { return 4115065005U; }
	void UAkHololensInitializationSettings::StaticRegisterNativesUAkHololensInitializationSettings()
	{
		UClass* Class = UAkHololensInitializationSettings::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "MigrateMultiCoreRendering", &UAkHololensInitializationSettings::execMigrateMultiCoreRendering },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics
	{
		struct AkHololensInitializationSettings_eventMigrateMultiCoreRendering_Parms
		{
			bool NewValue;
		};
		static void NewProp_NewValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_NewValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit(void* Obj)
	{
		((AkHololensInitializationSettings_eventMigrateMultiCoreRendering_Parms*)Obj)->NewValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue = { "NewValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkHololensInitializationSettings_eventMigrateMultiCoreRendering_Parms), &Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::NewProp_NewValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkHololensInitializationSettings, nullptr, "MigrateMultiCoreRendering", nullptr, nullptr, sizeof(AkHololensInitializationSettings_eventMigrateMultiCoreRendering_Parms), Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkHololensInitializationSettings_NoRegister()
	{
		return UAkHololensInitializationSettings::StaticClass();
	}
	struct Z_Construct_UClass_UAkHololensInitializationSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AdvancedSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_AdvancedSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommunicationSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommunicationSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CommonSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CommonSettings;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkHololensInitializationSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkHololensInitializationSettings_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkHololensInitializationSettings_MigrateMultiCoreRendering, "MigrateMultiCoreRendering" }, // 471911824
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkHololensInitializationSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_AdvancedSettings = { "AdvancedSettings", nullptr, (EPropertyFlags)0x0010040000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkHololensInitializationSettings, AdvancedSettings), Z_Construct_UScriptStruct_FAkHololensAdvancedInitializationSettings, METADATA_PARAMS(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_AdvancedSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommunicationSettings = { "CommunicationSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkHololensInitializationSettings, CommunicationSettings), Z_Construct_UScriptStruct_FAkCommunicationSettingsWithSystemInitialization, METADATA_PARAMS(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommunicationSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommonSettings_MetaData[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Hololens/AkHololensInitializationSettings.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommonSettings = { "CommonSettings", nullptr, (EPropertyFlags)0x0010000000004001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkHololensInitializationSettings, CommonSettings), Z_Construct_UScriptStruct_FAkCommonInitializationSettingsWithSampleRate, METADATA_PARAMS(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommonSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommonSettings_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkHololensInitializationSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_AdvancedSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommunicationSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkHololensInitializationSettings_Statics::NewProp_CommonSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkHololensInitializationSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkHololensInitializationSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkHololensInitializationSettings_Statics::ClassParams = {
		&UAkHololensInitializationSettings::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkHololensInitializationSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::PropPointers),
		0,
		0x001000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkHololensInitializationSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkHololensInitializationSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkHololensInitializationSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkHololensInitializationSettings, 1007048493);
	template<> AKAUDIO_API UClass* StaticClass<UAkHololensInitializationSettings>()
	{
		return UAkHololensInitializationSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkHololensInitializationSettings(Z_Construct_UClass_UAkHololensInitializationSettings, &UAkHololensInitializationSettings::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkHololensInitializationSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkHololensInitializationSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
