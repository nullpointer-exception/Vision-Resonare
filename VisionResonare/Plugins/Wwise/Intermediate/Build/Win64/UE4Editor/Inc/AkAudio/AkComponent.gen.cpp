// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkComponent() {}
// Cross Module References
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkComponent();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_GetRTPCValue();
	AKAUDIO_API UEnum* Z_Construct_UEnum_AkAudio_ERTPCValueType();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkRtpc_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkTrigger_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetListeners();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkSwitchValue_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAuxBus_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes();
	ENGINE_API UEnum* Z_Construct_UEnum_Engine_ECollisionChannel();
// End Cross Module References
	static UEnum* EReflectionFilterBits_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_AkAudio_EReflectionFilterBits, Z_Construct_UPackage__Script_AkAudio(), TEXT("EReflectionFilterBits"));
		}
		return Singleton;
	}
	template<> AKAUDIO_API UEnum* StaticEnum<EReflectionFilterBits>()
	{
		return EReflectionFilterBits_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EReflectionFilterBits(EReflectionFilterBits_StaticEnum, TEXT("/Script/AkAudio"), TEXT("EReflectionFilterBits"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Hash() { return 1602132856U; }
	UEnum* Z_Construct_UEnum_AkAudio_EReflectionFilterBits()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_AkAudio();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EReflectionFilterBits"), 0, Get_Z_Construct_UEnum_AkAudio_EReflectionFilterBits_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EReflectionFilterBits::Wall", (int64)EReflectionFilterBits::Wall },
				{ "EReflectionFilterBits::Ceiling", (int64)EReflectionFilterBits::Ceiling },
				{ "EReflectionFilterBits::Floor", (int64)EReflectionFilterBits::Floor },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "Bitflags", "" },
				{ "Ceiling.Name", "EReflectionFilterBits::Ceiling" },
				{ "Floor.Name", "EReflectionFilterBits::Floor" },
				{ "ModuleRelativePath", "Classes/AkComponent.h" },
				{ "Wall.Name", "EReflectionFilterBits::Wall" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_AkAudio,
				nullptr,
				"EReflectionFilterBits",
				"EReflectionFilterBits",
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
	void UAkComponent::StaticRegisterNativesUAkComponent()
	{
		UClass* Class = UAkComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetAttenuationRadius", &UAkComponent::execGetAttenuationRadius },
			{ "GetRTPCValue", &UAkComponent::execGetRTPCValue },
			{ "PostAkEventAndWaitForEnd", &UAkComponent::execPostAkEventAndWaitForEnd },
			{ "PostAkEventAndWaitForEndAsync", &UAkComponent::execPostAkEventAndWaitForEndAsync },
			{ "PostAkEventByName", &UAkComponent::execPostAkEventByName },
			{ "PostAssociatedAkEventAndWaitForEnd", &UAkComponent::execPostAssociatedAkEventAndWaitForEnd },
			{ "PostAssociatedAkEventAndWaitForEndAsync", &UAkComponent::execPostAssociatedAkEventAndWaitForEndAsync },
			{ "PostTrigger", &UAkComponent::execPostTrigger },
			{ "SetAttenuationScalingFactor", &UAkComponent::execSetAttenuationScalingFactor },
			{ "SetEarlyReflectionsAuxBus", &UAkComponent::execSetEarlyReflectionsAuxBus },
			{ "SetEarlyReflectionsVolume", &UAkComponent::execSetEarlyReflectionsVolume },
			{ "SetListeners", &UAkComponent::execSetListeners },
			{ "SetOutputBusVolume", &UAkComponent::execSetOutputBusVolume },
			{ "SetRTPCValue", &UAkComponent::execSetRTPCValue },
			{ "SetStopWhenOwnerDestroyed", &UAkComponent::execSetStopWhenOwnerDestroyed },
			{ "SetSwitch", &UAkComponent::execSetSwitch },
			{ "UseEarlyReflections", &UAkComponent::execUseEarlyReflections },
			{ "UseReverbVolumes", &UAkComponent::execUseReverbVolumes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics
	{
		struct AkComponent_eventGetAttenuationRadius_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetAttenuationRadius_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Return the real attenuation radius for this component (AttenuationScalingFactor * AkAudioEvent->MaxAttenuationRadius)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetAttenuationRadius", nullptr, nullptr, sizeof(AkComponent_eventGetAttenuationRadius_Parms), Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetAttenuationRadius()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_GetAttenuationRadius_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics
	{
		struct AkComponent_eventGetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			ERTPCValueType InputValueType;
			float Value;
			ERTPCValueType OutputValueType;
			FString RTPC;
			int32 PlayingID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_OutputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OutputValueType_Underlying;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_InputValueType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_InputValueType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType = { "OutputValueType", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, OutputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType = { "InputValueType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, InputValueType), Z_Construct_UEnum_AkAudio_ERTPCValueType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventGetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPCValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_OutputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_InputValueType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::NewProp_RTPCValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "RTPC" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09* Gets an RTPC value that was set on this component as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09\x09The name of the RTPC to set\n\x09* @param InputValueType\x09\x09The input value type\n\x09* @param Value\x09\x09\x09\x09The value of the RTPC\n\x09* @param OutputValueType\x09The output value type\n\x09* @param PlayingID\x09\x09\x09The playing ID of the posted event (Set to zero to ignore)\n\x09*/" },
		{ "CPP_Default_PlayingID", "0" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Gets an RTPC value that was set on this component as the game object source\n\n@param RTPC                           The name of the RTPC to set\n@param InputValueType         The input value type\n@param Value                          The value of the RTPC\n@param OutputValueType        The output value type\n@param PlayingID                      The playing ID of the posted event (Set to zero to ignore)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "GetRTPCValue", nullptr, nullptr, sizeof(AkComponent_eventGetRTPCValue_Parms), Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_GetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_GetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEnd_Parms
		{
			UAkAudioEvent* AkEvent;
			FString in_EventName;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEnd_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09* Posts an event to Wwise, using this component as the game object source, and wait until the event is\n\x09* done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09*\n\x09*/" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEnd", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAkEventAndWaitForEndAsync_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09* Posts an event to Wwise, using this component as the game object source, and wait until the event is\n\x09* done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09*/" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics
	{
		struct AkComponent_eventPostAkEventByName_Parms
		{
			FString in_EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAkEventByName_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::NewProp_in_EventName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Posts an event to Wwise using its name, using this component as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"Event Name\" field of Post Ak Event" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts an event to Wwise using its name, using this component as the game object source\n\n@param AkEvent               The event to post" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAkEventByName", nullptr, nullptr, sizeof(AkComponent_eventPostAkEventByName_Parms), Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAkEventByName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAkEventByName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms
		{
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::NewProp_ExternalSources_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "0" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is \n\x09 * done playing to continue execution. Extra calls while the event is playing are ignored.\n\x09 *\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts this component's AkAudioEvent to Wwise, using this component as the game object source, and wait until the event is\ndone playing to continue execution. Extra calls while the event is playing are ignored." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEnd", nullptr, nullptr, sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEnd_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics
	{
		struct AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms
		{
			int32 PlayingID;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::NewProp_PlayingID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "ExternalSources" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostAssociatedAkEventAndWaitForEndAsync", nullptr, nullptr, sizeof(AkComponent_eventPostAssociatedAkEventAndWaitForEndAsync_Parms), Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_PostTrigger_Statics
	{
		struct AkComponent_eventPostTrigger_Parms
		{
			UAkTrigger* TriggerValue;
			FString Trigger;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_Trigger;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TriggerValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TriggerValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger = { "Trigger", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, Trigger), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue = { "TriggerValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventPostTrigger_Parms, TriggerValue), Z_Construct_UClass_UAkTrigger_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_Trigger,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::NewProp_TriggerValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Posts a trigger to wwise, using this component as the game object source\n\x09 *\n\x09 * @param Trigger\x09\x09The name of the trigger\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Posts a trigger to wwise, using this component as the game object source\n\n@param Trigger               The name of the trigger" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "PostTrigger", nullptr, nullptr, sizeof(AkComponent_eventPostTrigger_Parms), Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_PostTrigger()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_PostTrigger_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics
	{
		struct AkComponent_eventSetAttenuationScalingFactor_Parms
		{
			float Value;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetAttenuationScalingFactor_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/** Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect. */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets the attenuation scaling factor, which modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetAttenuationScalingFactor", nullptr, nullptr, sizeof(AkComponent_eventSetAttenuationScalingFactor_Parms), Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsAuxBus_Parms
		{
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsAuxBus_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::NewProp_AuxBusName,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/** \n\x09* Set the early reflections aux bus for this AK Component.\n\x09* Geometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\n\x09* or if an aux bus is specified via SetEarlyReflectionsAuxSend.\n\x09* The AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\n\x09* the parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n\x09* @param AuxBusName - Name of aux bus in the Wwise project.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the early reflections aux bus for this AK Component.\nGeometrical reflection calculation inside spatial audio is enabled for a game object if any sound playing on the game object has a valid early reflections aux bus specified in the authoring tool,\nor if an aux bus is specified via SetEarlyReflectionsAuxSend.\nThe AuxBusName parameter of SetEarlyReflectionsAuxSend applies to sounds playing on the Wwise game object which have not specified an early reflection bus in the authoring tool -\nthe parameter specified on individual sounds' reflection bus takes priority over the value passed in to SetEarlyReflectionsAuxSend.\n@param AuxBusName - Name of aux bus in the Wwise project." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsAuxBus", nullptr, nullptr, sizeof(AkComponent_eventSetEarlyReflectionsAuxBus_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics
	{
		struct AkComponent_eventSetEarlyReflectionsVolume_Parms
		{
			float SendVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SendVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume = { "SendVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetEarlyReflectionsVolume_Parms, SendVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::NewProp_SendVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/** \n\x09* Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\n\x09* and is applied to all sounds playing on the Wwise game object.\n\x09* @param SendVolume - Send volume to the early reflections aux bus.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the early reflections volume for this AK Component. The SendVolume parameter is used to control the volume of the early reflections send. It is combined with the early reflections volume specified in the authoring tool,\nand is applied to all sounds playing on the Wwise game object.\n@param SendVolume - Send volume to the early reflections aux bus." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetEarlyReflectionsVolume", nullptr, nullptr, sizeof(AkComponent_eventSetEarlyReflectionsVolume_Parms), Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetListeners_Statics
	{
		struct AkComponent_eventSetListeners_Parms
		{
			TArray<UAkComponent*> Listeners;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Listeners_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Listeners;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Listeners_Inner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners = { "Listeners", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetListeners_Parms, Listeners), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner = { "Listeners", nullptr, (EPropertyFlags)0x0000000000080000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UAkComponent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetListeners_Statics::NewProp_Listeners_Inner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Set a game object's listeners\n\x09 *\n\x09 * @param Listeners\x09The array of components that listen to this component\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set a game object's listeners\n\n@param Listeners     The array of components that listen to this component" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetListeners", nullptr, nullptr, sizeof(AkComponent_eventSetListeners_Parms), Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetListeners_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetListeners()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetListeners_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics
	{
		struct AkComponent_eventSetOutputBusVolume_Parms
		{
			float BusVolume;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusVolume;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume = { "BusVolume", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetOutputBusVolume_Parms, BusVolume), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::NewProp_BusVolume,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09* Set the output bus volume (direct) to be used for the specified game object.\n\x09* The control value is a number ranging from 0.0f to 1.0f.\n\x09*\n\x09* @param BusVolume - Bus volume to set\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the output bus volume (direct) to be used for the specified game object.\nThe control value is a number ranging from 0.0f to 1.0f.\n\n@param BusVolume - Bus volume to set" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetOutputBusVolume", nullptr, nullptr, sizeof(AkComponent_eventSetOutputBusVolume_Parms), Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetOutputBusVolume()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetOutputBusVolume_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics
	{
		struct AkComponent_eventSetRTPCValue_Parms
		{
			UAkRtpc* RTPCValue;
			float Value;
			int32 InterpolationTimeMs;
			FString RTPC;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_RTPC;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_InterpolationTimeMs;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Value;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RTPCValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RTPCValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPC = { "RTPC", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, RTPC), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_InterpolationTimeMs = { "InterpolationTimeMs", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, InterpolationTimeMs), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, Value), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPCValue = { "RTPCValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetRTPCValue_Parms, RTPCValue), Z_Construct_UClass_UAkRtpc_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPCValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPC,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_InterpolationTimeMs,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_Value,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::NewProp_RTPCValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09* Sets an RTPC value, using this component as the game object source\n\x09*\n\x09* @param RTPC\x09\x09\x09The name of the RTPC to set\n\x09* @param Value\x09\x09\x09The value of the RTPC\n\x09* @param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets an RTPC value, using this component as the game object source\n\n@param RTPC                   The name of the RTPC to set\n@param Value                  The value of the RTPC\n@param InterpolationTimeMs - Duration during which the RTPC is interpolated towards Value (in ms)" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetRTPCValue", nullptr, nullptr, sizeof(AkComponent_eventSetRTPCValue_Parms), Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetRTPCValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetRTPCValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics
	{
		struct AkComponent_eventSetStopWhenOwnerDestroyed_Parms
		{
			bool bStopWhenOwnerDestroyed;
		};
		static void NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bStopWhenOwnerDestroyed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((AkComponent_eventSetStopWhenOwnerDestroyed_Parms*)Obj)->bStopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed = { "bStopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::NewProp_bStopWhenOwnerDestroyed,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Sets whether or not to stop sounds when the component's owner is destroyed\n\x09 *\n\x09 * @param bStopWhenOwnerDestroyed\x09Whether or not to stop sounds when the component's owner is destroyed\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets whether or not to stop sounds when the component's owner is destroyed\n\n@param bStopWhenOwnerDestroyed       Whether or not to stop sounds when the component's owner is destroyed" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetStopWhenOwnerDestroyed", nullptr, nullptr, sizeof(AkComponent_eventSetStopWhenOwnerDestroyed_Parms), Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_SetSwitch_Statics
	{
		struct AkComponent_eventSetSwitch_Parms
		{
			UAkSwitchValue* SwitchValue;
			FString SwitchGroup;
			FString SwitchState;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchState;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_SwitchGroup;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SwitchValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SwitchValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState = { "SwitchState", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchState), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup = { "SwitchGroup", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchGroup), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue = { "SwitchValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventSetSwitch_Parms, SwitchValue), Z_Construct_UClass_UAkSwitchValue_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchGroup,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::NewProp_SwitchValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Sets a switch group in wwise, using this component as the game object source\n\x09 *\n\x09 * @param SwitchGroup\x09The name of the switch group\n\x09 * @param SwitchState\x09The new state of the switch\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Sets a switch group in wwise, using this component as the game object source\n\n@param SwitchGroup   The name of the switch group\n@param SwitchState   The new state of the switch" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "SetSwitch", nullptr, nullptr, sizeof(AkComponent_eventSetSwitch_Parms), Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_SetSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_SetSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics
	{
		struct AkComponent_eventUseEarlyReflections_Parms
		{
			UAkAuxBus* AuxBus;
			int32 Order;
			float BusSendGain;
			float MaxPathLength;
			bool SpotReflectors;
			FString AuxBusName;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_AuxBusName;
		static void NewProp_SpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_SpotReflectors;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxPathLength;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_BusSendGain;
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Order;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AuxBus;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName = { "AuxBusName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBusName), METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName_MetaData)) };
	void Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit(void* Obj)
	{
		((AkComponent_eventUseEarlyReflections_Parms*)Obj)->SpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors = { "SpotReflectors", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseEarlyReflections_Parms), &Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength = { "MaxPathLength", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, MaxPathLength), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain = { "BusSendGain", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, BusSendGain), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order = { "Order", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, Order), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus = { "AuxBus", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkComponent_eventUseEarlyReflections_Parms, AuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_SpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_MaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_BusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_Order,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::NewProp_AuxBus,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "5" },
		{ "Category", "Audiokinetic|AkComponent" },
		{ "CPP_Default_AuxBusName", "" },
		{ "CPP_Default_BusSendGain", "1.000000" },
		{ "CPP_Default_MaxPathLength", "100000.000000" },
		{ "CPP_Default_Order", "1" },
		{ "CPP_Default_SpotReflectors", "false" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "This function is deprecated and will be removed in future releases." },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseEarlyReflections", nullptr, nullptr, sizeof(AkComponent_eventUseEarlyReflections_Parms), Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseEarlyReflections()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseEarlyReflections_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics
	{
		struct AkComponent_eventUseReverbVolumes_Parms
		{
			bool inUseReverbVolumes;
		};
		static void NewProp_inUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_inUseReverbVolumes;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit(void* Obj)
	{
		((AkComponent_eventUseReverbVolumes_Parms*)Obj)->inUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes = { "inUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AkComponent_eventUseReverbVolumes_Parms), &Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::NewProp_inUseReverbVolumes,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\x09 *\n\x09 * @param inUseReverbVolumes\x09Whether to use reverb volumes or not.\n\x09 */" },
		{ "DeprecatedFunction", "" },
		{ "DeprecationMessage", "Please use the \"UseReverbVolume\" property" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ScriptName", "DEPRECATED_UseReverbVolumes" },
		{ "ToolTip", "Set UseReverbVolumes flag. Set value to true to use reverb volumes on this component.\n\n@param inUseReverbVolumes    Whether to use reverb volumes or not." },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkComponent, nullptr, "UseReverbVolumes", nullptr, nullptr, sizeof(AkComponent_eventUseReverbVolumes_Parms), Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkComponent_UseReverbVolumes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkComponent_UseReverbVolumes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkComponent_NoRegister()
	{
		return UAkComponent::StaticClass();
	}
	struct Z_Construct_UClass_UAkComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseReverbVolumes_MetaData[];
#endif
		static void NewProp_bUseReverbVolumes_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseReverbVolumes;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionRefreshInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_OcclusionRefreshInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AttenuationScalingFactor_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_AttenuationScalingFactor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StopWhenOwnerDestroyed_MetaData[];
#endif
		static void NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_StopWhenOwnerDestroyed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawDiffraction_MetaData[];
#endif
		static void NewProp_DrawDiffraction_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawDiffraction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawHigherOrderReflections_MetaData[];
#endif
		static void NewProp_DrawHigherOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawHigherOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawSecondOrderReflections_MetaData[];
#endif
		static void NewProp_DrawSecondOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawSecondOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DrawFirstOrderReflections_MetaData[];
#endif
		static void NewProp_DrawFirstOrderReflections_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_DrawFirstOrderReflections;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_diffractionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxPaths_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxPaths;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_diffractionMaxEdges_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_diffractionMaxEdges;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_roomReverbAuxBusGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_roomReverbAuxBusGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionMaxPathLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionMaxPathLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionBusSendGain_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_EarlyReflectionBusSendGain;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionOrder_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_EarlyReflectionOrder;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBusName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EarlyReflectionAuxBusName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EarlyReflectionAuxBus_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_EarlyReflectionAuxBus;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EnableSpotReflectors_MetaData[];
#endif
		static void NewProp_EnableSpotReflectors_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_EnableSpotReflectors;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OcclusionCollisionChannel_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_OcclusionCollisionChannel;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bUseSpatialAudio_MetaData[];
#endif
		static void NewProp_bUseSpatialAudio_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bUseSpatialAudio;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UAkGameObject,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkComponent_GetAttenuationRadius, "GetAttenuationRadius" }, // 2081494795
		{ &Z_Construct_UFunction_UAkComponent_GetRTPCValue, "GetRTPCValue" }, // 834602278
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEnd, "PostAkEventAndWaitForEnd" }, // 3385794146
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventAndWaitForEndAsync, "PostAkEventAndWaitForEndAsync" }, // 661163619
		{ &Z_Construct_UFunction_UAkComponent_PostAkEventByName, "PostAkEventByName" }, // 3765876160
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEnd, "PostAssociatedAkEventAndWaitForEnd" }, // 2836427632
		{ &Z_Construct_UFunction_UAkComponent_PostAssociatedAkEventAndWaitForEndAsync, "PostAssociatedAkEventAndWaitForEndAsync" }, // 779143773
		{ &Z_Construct_UFunction_UAkComponent_PostTrigger, "PostTrigger" }, // 1714810381
		{ &Z_Construct_UFunction_UAkComponent_SetAttenuationScalingFactor, "SetAttenuationScalingFactor" }, // 2672830368
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsAuxBus, "SetEarlyReflectionsAuxBus" }, // 280625521
		{ &Z_Construct_UFunction_UAkComponent_SetEarlyReflectionsVolume, "SetEarlyReflectionsVolume" }, // 2236944032
		{ &Z_Construct_UFunction_UAkComponent_SetListeners, "SetListeners" }, // 738755998
		{ &Z_Construct_UFunction_UAkComponent_SetOutputBusVolume, "SetOutputBusVolume" }, // 1122730574
		{ &Z_Construct_UFunction_UAkComponent_SetRTPCValue, "SetRTPCValue" }, // 1051502638
		{ &Z_Construct_UFunction_UAkComponent_SetStopWhenOwnerDestroyed, "SetStopWhenOwnerDestroyed" }, // 2576151067
		{ &Z_Construct_UFunction_UAkComponent_SetSwitch, "SetSwitch" }, // 2892837081
		{ &Z_Construct_UFunction_UAkComponent_UseEarlyReflections, "UseEarlyReflections" }, // 340174126
		{ &Z_Construct_UFunction_UAkComponent_UseReverbVolumes, "UseReverbVolumes" }, // 3237443445
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "Comment", "/*------------------------------------------------------------------------------------\n\x09UAkComponent\n------------------------------------------------------------------------------------*/" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "UAkComponent" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "Comment", "/** Whether to use reverb volumes or not */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Whether to use reverb volumes or not" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseReverbVolumes = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes = { "bUseReverbVolumes", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData[] = {
		{ "Category", "AkComponent|Occlusion" },
		{ "Comment", "/** Set the time interval between occlusion/obstruction checks (direct line of sight between the listener and this game object). Set to 0 to disable occlusion/obstruction on this component. We recommend disabling it if you want to use full Spatial Audio diffraction. */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the time interval between occlusion/obstruction checks (direct line of sight between the listener and this game object). Set to 0 to disable occlusion/obstruction on this component. We recommend disabling it if you want to use full Spatial Audio diffraction." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval = { "OcclusionRefreshInterval", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionRefreshInterval), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData[] = {
		{ "Category", "AkComponent" },
		{ "Comment", "/** Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect. */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Modifies the attenuation computations on this game object to simulate sounds with a a larger or smaller area of effect." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor = { "AttenuationScalingFactor", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, AttenuationScalingFactor), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData[] = {
		{ "Comment", "/** Stop sound when owner is destroyed? */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Stop sound when owner is destroyed?" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->StopWhenOwnerDestroyed = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed = { "StopWhenOwnerDestroyed", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawDiffraction = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction = { "DrawDiffraction", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawHigherOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections = { "DrawHigherOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawSecondOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections = { "DrawSecondOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Debug Draw" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->DrawFirstOrderReflections = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections = { "DrawFirstOrderReflections", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (DEPRECATED)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength = { "diffractionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (DEPRECATED)" },
		{ "ClampMin", "0" },
		{ "Comment", "/** As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths = { "diffractionMaxPaths", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxPaths), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Geometric Diffraction (DEPRECATED)" },
		{ "ClampMin", "0" },
		{ "Comment", "/** As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, diffraction is enabled in the Sound Property Editor in the Authoring" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges = { "diffractionMaxEdges", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, diffractionMaxEdges), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Room (DEPRECATED)" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** As of 2019.2, the Room Reverb Aux Bus Gain is set by the Game-Defined Auxiliary Sends Volume in the Sound Property Editor in the Authoring */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, the Room Reverb Aux Bus Gain is set by the Game-Defined Auxiliary Sends Volume in the Sound Property Editor in the Authoring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain = { "roomReverbAuxBusGain", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, roomReverbAuxBusGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect (DEPRECATED)" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/** As of 2019.2, the Reflection Max Path Length is set by the sound's Attenuation Max Distance value in the Authoring */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, the Reflection Max Path Length is set by the sound's Attenuation Max Distance value in the Authoring" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength = { "EarlyReflectionMaxPathLength", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionMaxPathLength), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "ClampMax", "1.0" },
		{ "ClampMin", "0.0" },
		{ "Comment", "/**\n\x09*\x09Set the send volume for the early reflections Auxiliary Bus.\n\x09*\x09The send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Set the send volume for the early reflections Auxiliary Bus.\nThe send volume applied to this AK Component will be applied additively to the Auxiliary Send volume defined per-sound in the Wwise Authoring tool." },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain = { "EarlyReflectionBusSendGain", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionBusSendGain), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect (DEPRECATED)" },
		{ "ClampMax", "4" },
		{ "ClampMin", "0" },
		{ "Comment", "/** As of 2019.2, the Reflection Order is set in the Spatial Audio Initialization Settings in Project Settings */" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "As of 2019.2, the Reflection Order is set in the Spatial Audio Initialization Settings in Project Settings" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder = { "EarlyReflectionOrder", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionOrder), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "Comment", "/**\n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName = { "EarlyReflectionAuxBusName", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBusName), METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio|Reflect" },
		{ "Comment", "/** \n\x09*\x09Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\n\x09*\x09Note that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool. \n\x09*\x09Setting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool.\n\x09*/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Send to an Auxiliary Bus containing the Wwise Reflect plugin for early reflections rendering.\nNote that the Wwise Auxiliary Bus for early reflections can also be set per-sound in the Sound Property Editor in the Wwise Authoring tool.\nSetting a value here will apply only to sounds playing on the AK Component that do not have an Auxiliary Bus set in the Wwise Authoring tool." },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus = { "EarlyReflectionAuxBus", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, EarlyReflectionAuxBus), Z_Construct_UClass_UAkAuxBus_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData[] = {
		{ "Category", "AkComponent|Spatial Audio" },
		{ "Comment", "/**Enable spot reflectors for this Ak Component **/" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
		{ "ToolTip", "Enable spot reflectors for this Ak Component *" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->EnableSpotReflectors = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors = { "EnableSpotReflectors", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(uint8), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData[] = {
		{ "Category", "AkComponent|Occlusion" },
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel = { "OcclusionCollisionChannel", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkComponent, OcclusionCollisionChannel), Z_Construct_UEnum_Engine_ECollisionChannel, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData[] = {
		{ "ModuleRelativePath", "Classes/AkComponent.h" },
	};
#endif
	void Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit(void* Obj)
	{
		((UAkComponent*)Obj)->bUseSpatialAudio_DEPRECATED = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio = { "bUseSpatialAudio", nullptr, (EPropertyFlags)0x0010000020000000, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UAkComponent), &Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_SetBit, METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseReverbVolumes,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionRefreshInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_AttenuationScalingFactor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_StopWhenOwnerDestroyed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawDiffraction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawHigherOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawSecondOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_DrawFirstOrderReflections,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxPaths,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_diffractionMaxEdges,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_roomReverbAuxBusGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionMaxPathLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionBusSendGain,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionOrder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBusName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EarlyReflectionAuxBus,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_EnableSpotReflectors,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_OcclusionCollisionChannel,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkComponent_Statics::NewProp_bUseSpatialAudio,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkComponent_Statics::ClassParams = {
		&UAkComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkComponent, 2709697325);
	template<> AKAUDIO_API UClass* StaticClass<UAkComponent>()
	{
		return UAkComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkComponent(Z_Construct_UClass_UAkComponent, &UAkComponent::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
