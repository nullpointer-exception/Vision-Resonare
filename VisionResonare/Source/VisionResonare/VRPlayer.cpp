// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPlayer.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "VisionResonare/Saving/VRSaveGame.h"

// Sets default values
AVRPlayer::AVRPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	SetRootComponent(VRRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(VRRoot);
}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();

	if (RightControllerClass)
	{
		RightController = GetWorld()->SpawnActor< ARightController>(RightControllerClass);
		RightController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
	if (LeftControllerClass)
	{
		LeftController = GetWorld()->SpawnActor< ALeftController>(LeftControllerClass);
		LeftController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
}

void AVRPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	//PlayerInputComponent->BindAxis(TEXT("ResetVR"), EInputEvent::IE_Pressed, this, &AVRPlayer::OnResetVR);

	PlayerInputComponent->BindAction(TEXT("Save"), EInputEvent::IE_Released, this, &AVRPlayer::Save);
	PlayerInputComponent->BindAction(TEXT("Load"), EInputEvent::IE_Released, this, &AVRPlayer::Load);
}
/*
void AVRPlayer::OnResetVR()
{
	UHeadMountedDisplayFunctionLibrary::ResetOrientationAndPosition();
}*/

void AVRPlayer::Save()
{
	UVRSaveGame* Vision = UVRSaveGame::Create();
	Vision->SetState(" ");
	Vision->Save();
}

void AVRPlayer::Load()
{
	UVRSaveGame* Vision = UVRSaveGame::Load();
}
