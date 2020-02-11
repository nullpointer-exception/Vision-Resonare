// Fill out your copyright notice in the Description page of Project Settings.

#include "VRSaveGame.h"
#include "EngineUtils.h"
#include "Misc/Guid.h"
#include "VisionResonare/Saving/VRSaveGameIndex.h"

UVRSaveGame* UVRSaveGame::Create()
{
	UVRSaveGame* NewSaveGame = Cast<UVRSaveGame>(UGameplayStatics::CreateSaveGameObject(StaticClass()));

	NewSaveGame->SlotName = FGuid::NewGuid().ToString();
	if (!NewSaveGame->Save())
		return nullptr;

	UVRSaveGameIndex* Index = UVRSaveGameIndex::Load();
	Index->AddSaveGame(NewSaveGame);
	Index->Save();

	return NewSaveGame;
}

bool UVRSaveGame::Save()
{
	return UGameplayStatics::SaveGameToSlot(this, SlotName, 0);
}

UVRSaveGame * UVRSaveGame::Load()
{
	return Cast<UVRSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("Test"), 0));
}
