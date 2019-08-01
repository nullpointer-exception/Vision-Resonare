// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VisionResonare/Saving/VRSaveGame.h"
#include "VRSaveGameIndex.generated.h"

/**
 *
 */
UCLASS()
class VISIONRESONARE_API UVRSaveGameIndex : public USaveGame
{
	GENERATED_BODY()

public:
	bool Save();
	static UVRSaveGameIndex* Load();

	void AddSaveGame(UVRSaveGame* SaveGame);
	TArray<FString> GetSlotNames() const { return SlotName; }

	UPROPERTY()
		TArray<FString> SlotName;
private:
	static const FString SLOT_NAME;

};
