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

	Boddy = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Boddy"));
	Boddy->SetupAttachment(RootComponent);

	Camera_Normal = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Normal"));
	Camera_Normal->SetupAttachment(RootComponent);

	Camera_Bat = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Bat"));
	Camera_Bat->SetupAttachment(RootComponent);

	Camera_Blind = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera Blind"));
	Camera_Blind->SetupAttachment(RootComponent);
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

// Called when the game starts or when spawned
void AVRPlayer::BeginPlay()
{
	Super::BeginPlay();
	
}

inline void AVRPlayer::TakeDamage(int _damage)
{
	m_health -= _damage;

	if (m_health < 0)
		m_health = 0;
	
	if (m_health == 0)
		PlayerDead = true;
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

