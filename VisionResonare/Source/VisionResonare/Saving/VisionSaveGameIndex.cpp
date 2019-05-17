// Fill out your copyright notice in the Description page of Project Settings.

#include "VisionSaveGameIndex.h"
#include "Classes/Kismet/GameplayStatics.h"

const FString UVisionSaveGameIndex::SLOT_NAME = "VisionIndex";

bool UVisionSaveGameIndex::Save()
{
	UE_LOG(LogTemp, Warning, TEXT("Index:"));
	for (FString SlotName : UVisionSaveGameIndex::Load()->GetSlotNames())
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *SlotName);
	}
	return UGameplayStatics::SaveGameToSlot(this, SLOT_NAME, 0);
}

UVisionSaveGameIndex * UVisionSaveGameIndex::Load()
{
	auto Index = Cast<UVisionSaveGameIndex>(UGameplayStatics::LoadGameFromSlot(SLOT_NAME, 0));
	if (!Index)
	{
		Index = Cast<UVisionSaveGameIndex>(UGameplayStatics::CreateSaveGameObject(StaticClass()));
		Index->Save();
	}
	return Index;
}

void UVisionSaveGameIndex::AddSaveGame(UVisionSaveGame * SaveGame)
{
	//SlotNames.Add(SaveGame->GetSlotNames());
}
