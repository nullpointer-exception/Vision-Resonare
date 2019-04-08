// Fill out your copyright notice in the Description page of Project Settings.

#include "VRPlayer.h"
#include "Classes/Components/StaticMeshComponent.h"

// Sets default values
AVRPlayer::AVRPlayer()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	USceneComponent* pRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ROOT"));

	RootComponent = pRoot;

	LeftHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Left Hand"));
	LeftHand->SetupAttachment(RootComponent);

	RightHand = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Right Hand"));
	RightHand->SetupAttachment(RootComponent);

	Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	Camera->SetupAttachment(RootComponent);
}

bool AVRPlayer::HandleCollision(USceneComponent * OtherComp)
{
	if (OtherComp)
	{
		if (OtherComp != LeftHand && OtherComp != RightHand)
		{
			OtherComp->DestroyComponent();
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}

void AVRPlayer::OnOverlapBegin(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult & SweepResult)
{
}

void AVRPlayer::OnOverlapEnd(AActor * OtherActor, UPrimitiveComponent * OtherComp, int32 OtherBodyIndex)
{
}

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRPlayer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRPlayer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

