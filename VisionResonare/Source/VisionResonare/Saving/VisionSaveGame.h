// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "VisionSaveGame.generated.h"

/**
 *
 */
UCLASS()
class VISIONRESONARE_API UVisionSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	static UVisionSaveGame* Create();
	bool Save();
	static UVisionSaveGame* Load();

	void SetState(FString NewState) { State = NewState; }
	FString GetState() const { return State; }

private:
	UPROPERTY()
		FString State;

	UPROPERTY()
		FString SlotName;
};
