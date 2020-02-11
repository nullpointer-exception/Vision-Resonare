// Fill out your copyright notice in the Description page of Project Settings.

#include "VisionSaveGame.h"
#include "EngineUtils.h"
#include "Misc/Guid.h"
#include "VisionResonare/Saving/VisionSaveGameIndex.h"

UVisionSaveGame* UVisionSaveGame::Create()
{
	UVisionSaveGame* NewSaveGame = Cast<UVisionSaveGame>(UGameplayStatics::CreateSaveGameObject(StaticClass()));

	NewSaveGame->SlotName = FGuid::NewGuid().ToString();
	if (!NewSaveGame->Save())
		return nullptr;

	UVisionSaveGameIndex* Index = UVisionSaveGameIndex::Load();
	Index->AddSaveGame(NewSaveGame);
	Index->Save();

	return NewSaveGame;
}

bool UVisionSaveGame::Save()
{
	return UGameplayStatics::SaveGameToSlot(this, SlotName, 0);
}

UVisionSaveGame * UVisionSaveGame::Load()
{
	return Cast<UVisionSaveGame>(UGameplayStatics::LoadGameFromSlot(TEXT("Test"), 0));
}
