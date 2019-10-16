// Fill out your copyright notice in the Description page of Project Settings.

#include "LeftController.h"
#include "GameFramework/Pawn.h"
#include "XRMotionControllerBase.h" // for FXRMotionControllerBase::RightHandSourceId
#include "GameFramework/PlayerController.h"

// Sets default values
ALeftController::ALeftController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	LeftController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Left Controller"));
	//LeftController->MotionSource = FXRMotionControllerBase::LeftHandSourceId;
	SetRootComponent(LeftController);
	LeftController->SetShowDeviceModel(true);
}

// Called when the game starts or when spawned
void ALeftController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ALeftController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ALeftController::ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
	APawn* Pawn = Cast<APawn>(GetAttachParentActor());
	if (Pawn != nullptr)
	{
		APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());
		if (Controller != nullptr)
		{
			Controller->PlayHapticEffect(HapticEffect, LeftController->Hand_DEPRECATED);
		}
	}
}

void ALeftController::ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor)
{
}
