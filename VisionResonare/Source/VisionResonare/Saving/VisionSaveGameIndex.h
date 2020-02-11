// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "VisionResonare/Saving/VisionSaveGame.h"
#include "VisionSaveGameIndex.generated.h"

/**
 * 
 */
UCLASS()
class VISIONRESONARE_API UVisionSaveGameIndex : public USaveGame
{
	GENERATED_BODY()
	
public:
	bool Save();
	static UVisionSaveGameIndex* Load();

	void AddSaveGame(UVisionSaveGame* SaveGame);
	TArray<FString> GetSlotNames() const { return SlotName; }

	UPROPERTY()
		TArray<FString> SlotName;
private:
	static const FString SLOT_NAME;

};
