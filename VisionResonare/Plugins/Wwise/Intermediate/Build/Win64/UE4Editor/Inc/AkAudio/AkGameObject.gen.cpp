// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "AkAudio/Classes/AkGameObject.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAkGameObject() {}
// Cross Module References
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject_NoRegister();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkGameObject();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent();
	UPackage* Z_Construct_UPackage__Script_AkAudio();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent();
	AKAUDIO_API UScriptStruct* Z_Construct_UScriptStruct_FAkExternalSourceInfo();
	AKAUDIO_API UFunction* Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature();
	AKAUDIO_API UClass* Z_Construct_UClass_UAkAudioEvent_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FLatentActionInfo();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync();
	AKAUDIO_API UFunction* Z_Construct_UFunction_UAkGameObject_Stop();
// End Cross Module References
	void UAkGameObject::StaticRegisterNativesUAkGameObject()
	{
		UClass* Class = UAkGameObject::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "PostAkEvent", &UAkGameObject::execPostAkEvent },
			{ "PostAkEventAsync", &UAkGameObject::execPostAkEventAsync },
			{ "PostAssociatedAkEvent", &UAkGameObject::execPostAssociatedAkEvent },
			{ "PostAssociatedAkEventAsync", &UAkGameObject::execPostAssociatedAkEventAsync },
			{ "Stop", &UAkGameObject::execStop },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics
	{
		struct AkGameObject_eventPostAkEvent_Parms
		{
			UAkAudioEvent* AkEvent;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FString in_EventName;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_in_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_in_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName = { "in_EventName", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, in_EventName), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEvent_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_in_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::NewProp_AkEvent,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "1" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 * @param CallbackMask\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEvent", nullptr, nullptr, sizeof(AkGameObject_eventPostAkEvent_Parms), Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			UAkAudioEvent* AkEvent;
			int32 PlayingID;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkEvent;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010040000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent = { "AkEvent", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, AkEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_AkEvent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "3" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Comment", "/**\n\x09 * Posts an event to Wwise, using this as the game object source\n\x09 *\n\x09 * @param AkEvent\x09\x09The event to post\n\x09 * @param CallbackMask\x09Mask of desired callbacks\n\x09 * @param PostEventCallback\x09""Blueprint Event to execute on callback\n\x09 *\n\x09 */" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ToolTip", "Posts an event to Wwise, using this as the game object source\n\n@param AkEvent               The event to post\n@param CallbackMask  Mask of desired callbacks\n@param PostEventCallback     Blueprint Event to execute on callback" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAkEventAsync", nullptr, nullptr, sizeof(AkGameObject_eventPostAkEventAsync_Parms), Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEvent_Parms
		{
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010040008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEvent_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ReturnValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::NewProp_CallbackMask,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams[] = {
		{ "AdvancedDisplay", "2" },
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Comment", "/**\n\x09 * Posts this game object's AkAudioEvent to Wwise, using this as the game object source\n\x09 *\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ToolTip", "Posts this game object's AkAudioEvent to Wwise, using this as the game object source" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEvent", nullptr, nullptr, sizeof(AkGameObject_eventPostAssociatedAkEvent_Parms), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics
	{
		struct AkGameObject_eventPostAssociatedAkEventAsync_Parms
		{
			const UObject* WorldContextObject;
			int32 CallbackMask;
			FScriptDelegate PostEventCallback;
			TArray<FAkExternalSourceInfo> ExternalSources;
			FLatentActionInfo LatentInfo;
			int32 PlayingID;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PlayingID;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_LatentInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExternalSources_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ExternalSources;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ExternalSources_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PostEventCallback_MetaData[];
#endif
		static const UE4CodeGen_Private::FDelegatePropertyParams NewProp_PostEventCallback;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CallbackMask_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_CallbackMask;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID = { "PlayingID", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PlayingID), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo = { "LatentInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, LatentInfo), Z_Construct_UScriptStruct_FLatentActionInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources = { "ExternalSources", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, ExternalSources), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_Inner = { "ExternalSources", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FAkExternalSourceInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FDelegatePropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback = { "PostEventCallback", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Delegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, PostEventCallback), Z_Construct_UDelegateFunction_AkAudio_OnAkPostEventCallback__DelegateSignature, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "EAkCallbackType" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask = { "CallbackMask", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, CallbackMask), METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AkGameObject_eventPostAssociatedAkEventAsync_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PlayingID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_LatentInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_ExternalSources_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_PostEventCallback,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_CallbackMask,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::NewProp_WorldContextObject,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "PostEventCallback,ExternalSources" },
		{ "Category", "Audiokinetic|AkGameObject" },
		{ "Latent", "" },
		{ "LatentInfo", "LatentInfo" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "WorldContext", "WorldContextObject" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "PostAssociatedAkEventAsync", nullptr, nullptr, sizeof(AkGameObject_eventPostAssociatedAkEventAsync_Parms), Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420408, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UAkGameObject_Stop_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams[] = {
		{ "Category", "Audiokinetic|AkComponent" },
		{ "Comment", "/**\n\x09 * Stops playback using this game object as the game object to stop\n\x09 */" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ToolTip", "Stops playback using this game object as the game object to stop" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UAkGameObject, nullptr, "Stop", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020409, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UAkGameObject_Stop_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UAkGameObject_Stop()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UAkGameObject_Stop_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UAkGameObject_NoRegister()
	{
		return UAkGameObject::StaticClass();
	}
	struct Z_Construct_UClass_UAkGameObject_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_EventName_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_EventName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_AkAudioEvent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_AkAudioEvent;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UAkGameObject_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USceneComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_AkAudio,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UAkGameObject_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEvent, "PostAkEvent" }, // 196968236
		{ &Z_Construct_UFunction_UAkGameObject_PostAkEventAsync, "PostAkEventAsync" }, // 3537789357
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEvent, "PostAssociatedAkEvent" }, // 3125546585
		{ &Z_Construct_UFunction_UAkGameObject_PostAssociatedAkEventAsync, "PostAssociatedAkEventAsync" }, // 157854898
		{ &Z_Construct_UFunction_UAkGameObject_Stop, "Stop" }, // 3598816063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "AkComponent" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Audiokinetic" },
		{ "HideCategories", "Transform Rendering Mobility LOD Component Activation Trigger PhysicsVolume" },
		{ "IncludePath", "AkGameObject.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData[] = {
		{ "Category", "AkEvent" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName = { "EventName", nullptr, (EPropertyFlags)0x0010040000000005, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGameObject, EventName), METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData[] = {
		{ "Category", "AkEvent" },
		{ "Comment", "/** Wwise Event to be posted on this game object */" },
		{ "ModuleRelativePath", "Classes/AkGameObject.h" },
		{ "ToolTip", "Wwise Event to be posted on this game object" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent = { "AkAudioEvent", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UAkGameObject, AkAudioEvent), Z_Construct_UClass_UAkAudioEvent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UAkGameObject_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_EventName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UAkGameObject_Statics::NewProp_AkAudioEvent,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UAkGameObject_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAkGameObject>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UAkGameObject_Statics::ClassParams = {
		&UAkGameObject::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UAkGameObject_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UAkGameObject_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UAkGameObject()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UAkGameObject_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UAkGameObject, 2666352113);
	template<> AKAUDIO_API UClass* StaticClass<UAkGameObject>()
	{
		return UAkGameObject::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UAkGameObject(Z_Construct_UClass_UAkGameObject, &UAkGameObject::StaticClass, TEXT("/Script/AkAudio"), TEXT("UAkGameObject"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UAkGameObject);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
