// Fill out your copyright notice in the Description page of Project Settings.

#include "RightController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"

// Sets default values
ARightController::ARightController()
{
	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	RightController = CreateDefaultSubobject<UMotionControllerComponent>(TEXT("Right Controller"));
	SetRootComponent(RightController);
	RightController->SetTrackingSource(EControllerHand::Right);
	RightController->SetShowDeviceModel(true);
	RightController->Hand_DEPRECATED = EControllerHand::Right;
}

// Called when the game starts or when spawned
void ARightController::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void ARightController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARightController::ActorBeginOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
	APawn* Pawn = Cast<APawn>(GetAttachParentActor());
	if (Pawn != nullptr)
	{
		APlayerController* Controller = Cast<APlayerController>(Pawn->GetController());
		if (Controller != nullptr)
		{
			Controller->PlayHapticEffect(HapticEffect, RightController->Hand_DEPRECATED);
		}
	}
}

void ARightController::ActorEndOverlap(AActor * OverlappedActor, AActor * OtherActor)
{
}
