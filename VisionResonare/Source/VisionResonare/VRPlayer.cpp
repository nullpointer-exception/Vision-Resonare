// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPlayer.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "VisionResonare/Saving/VisionSaveGame.h"

// Sets default values
AVRPlayer::AVRPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(VRRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);

	//LeftHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Hand"));
	//LeftHand->SetupAttachment(VRRoot);
	//
	//RightHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Hand"));
	//RightHand->SetupAttachment(VRRoot);
	//
	//Boddy = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Boddy"));
	//Boddy->SetupAttachment(VRRoot);
}

//bool AVRPlayer::HandleCollision(USceneComponent * OtherComp)
//{
//	if (OtherComp)
//	{
//		if (OtherComp != LeftHand && OtherComp != RightHand)
//		{
//			OtherComp->DestroyComponent();
//			return true;
//		}
//		else
//		{
//			return false;
//		}
//	}
//	else
//	{
//		return false;
//	}
//}

//void AVRPlayer::ClientPlaySoundAtLocation(USoundBase * Sound, FVector Location, float VolumeMultiplier, float PitchMultiplier)
//{
//}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (RightControllerClass)
	{
		RightController = GetWorld()->SpawnActor< AVRController>(RightControllerClass);
		RightController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
	if (LeftControllerClass)
	{
		LeftController = GetWorld()->SpawnActor< ALeftController>(LeftControllerClass);
		LeftController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
}

void AVRPlayer::SetupPlayerInputComponent(UInputComponent * PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction(TEXT("Save"), EInputEvent::IE_Released, this, &AVRPlayer::Save);
	PlayerInputComponent->BindAction(TEXT("Load"), EInputEvent::IE_Released, this, &AVRPlayer::Load);
}

void AVRPlayer::Save()
{
	UVisionSaveGame* Vision = UVisionSaveGame::Create();
	Vision->SetState(" ");
	Vision->Save();
}

void AVRPlayer::Load()
{
	UVisionSaveGame* Vision = UVisionSaveGame::Load();
}
