// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPlayer.h"
#include "GameFramework/Pawn.h"
#include "Engine/World.h"
#include "HeadMountedDisplayFunctionLibrary.h"
#include "VisionResonare/Saving/VRSaveGame.h"
#include "XRMotionControllerBase.h" 

// Sets default values
AVRPlayer::AVRPlayer()
{
	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = false;

	Boddy = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Boddy"));
	SetRootComponent(Boddy);

	//VRRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));
	//SetRootComponent(VRRoot);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(Boddy);

	bUsingMotionControllers = true;
	
}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();

	// DO NOT TOUCH
	// INCREASE THIS COUNTER IF YOU TRIED AND FAILED
	// INSANITY COUNTER = 1
	if (RightControllerClass)
	{
		RightController = GetWorld()->SpawnActor<ARightController>(RightControllerClass);
		RightController->RightController->MotionSource = FXRMotionControllerBase::RightHandSourceId;
		//RightController->RightController->Hand_DEPRECATED = EControllerHand::Right;
		RightController->SetOwner(this);
		RightController->AttachToComponent(GetRootComponent(), FAttachmentTransformRules::KeepRelativeTransform);
	}
	if (LeftControllerClass)
	{
		LeftController = GetWorld()->SpawnActor<ALeftController>(LeftControllerClass);
		LeftController->LeftController->MotionSource = FXRMotionControllerBase::LeftHandSourceId;
		//LeftController->LeftController->Hand_DEPRECATED = EControllerHand::Left;
		LeftController->SetOwner(this);
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
