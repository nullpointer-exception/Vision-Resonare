// Fill out your copyright notice in the Description page of Project Settings.

#include "VRSaveGameIndex.h"
#include "Classes/Kismet/GameplayStatics.h"

const FString UVRSaveGameIndex::SLOT_NAME = "VisionIndex";

bool UVRSaveGameIndex::Save()
{
	UE_LOG(LogTemp, Warning, TEXT("Index:"));
	for (FString SlotName : UVRSaveGameIndex::Load()->GetSlotNames())
	{
		UE_LOG(LogTemp, Warning, TEXT("Name: %s"), *SlotName);
	}
	return UGameplayStatics::SaveGameToSlot(this, SLOT_NAME, 0);
}

UVRSaveGameIndex * UVRSaveGameIndex::Load()
{
	auto Index = Cast<UVRSaveGameIndex>(UGameplayStatics::LoadGameFromSlot(SLOT_NAME, 0));
	if (!Index)
	{
		Index = Cast<UVRSaveGameIndex>(UGameplayStatics::CreateSaveGameObject(StaticClass()));
		Index->Save();
	}
	return Index;
}

void UVRSaveGameIndex::AddSaveGame(UVRSaveGame * SaveGame)
{
	//SlotNames.Add(SaveGame->GetSlotNames());
}
