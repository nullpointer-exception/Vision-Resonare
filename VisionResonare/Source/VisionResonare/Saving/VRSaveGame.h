// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "Classes/Kismet/GameplayStatics.h"
#include "VRSaveGame.generated.h"

/**
 *
 */
UCLASS()
class VISIONRESONARE_API UVRSaveGame : public USaveGame
{
	GENERATED_BODY()

public:
	static UVRSaveGame* Create();
	bool Save();
	static UVRSaveGame* Load();

	void SetState(FString NewState) { State = NewState; }
	FString GetState() const { return State; }

private:
	UPROPERTY()
		FString State;

	UPROPERTY()
		FString SlotName;
};
