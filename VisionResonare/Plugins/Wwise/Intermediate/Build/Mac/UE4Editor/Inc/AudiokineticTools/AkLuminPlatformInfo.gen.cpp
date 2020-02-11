// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AudiokineticTools/Classes/Platforms/AkPlatform_Lumin/AkLuminPlatformInfo.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkLuminPlatformInfo() {}
// Cross Module References
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkLuminPlatformInfo_NoRegister();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkLuminPlatformInfo();
	AUDIOKINETICTOOLS_API UClass* Z_Construct_UClass_UAkPlatformInfo();
	UPackage* Z_Construct_UPackage__Script_AudiokineticTools();
// End Cross Module References
	void UAkLuminPlatformInfo::StaticRegisterNativesUAkLuminPlatformInfo()
	{
	}
	UClass* Z_Construct_UClass_UAkLuminPlatformInfo_NoRegister()
	{
		return UAkLuminPlatformInfo::StaticClass();
	}
	struct Z_Construct_UClass_UAkLuminPlatformInfo_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkLuminPlatformInfo_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkPlatformInfo,
		(UObject* (*)())Z_Construct_UPackage__Script_AudiokineticTools,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkLuminPlatformInfo_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Platforms/AkPlatform_Lumin/AkLuminPlatformInfo.h" },
		{ "ModuleRelativePath", "Classes/Platforms/AkPlatform_Lumin/AkLuminPlatformInfo.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkLuminPlatformInfo_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkLuminPlatformInfo>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkLuminPlatformInfo_Statics::ClassParams = {
		&UAkLuminPlatformInfo::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UAkLuminPlatformInfo_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkLuminPlatformInfo_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkLuminPlatformInfo()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkLuminPlatformInfo_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkLuminPlatformInfo, 1591642842);
	template<> AUDIOKINETICTOOLS_API UClass* StaticClass<UAkLuminPlatformInfo>()
	{
		return UAkLuminPlatformInfo::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkLuminPlatformInfo(Z_Construct_UClass_UAkLuminPlatformInfo, &UAkLuminPlatformInfo::StaticClass, TEXT("/Script/AudiokineticTools"), TEXT("UAkLuminPlatformInfo"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkLuminPlatformInfo);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
