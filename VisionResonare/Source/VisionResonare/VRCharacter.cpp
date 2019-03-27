// Fill out your copyright notice in the Description page of Project Settings.

#include "VRCharacter.h"
#include "Camera/CameraComponent.h"

// Sets default values
AVRCharacter::AVRCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	m_Camera = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	m_Camera->SetupAttachment(GetRootComponent());
}

// Called when the game starts or when spawned
void AVRCharacter::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AVRCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AVRCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAxis(TEXT("forward"), this, &AVRCharacter::MoveForward);
	PlayerInputComponent->BindAxis(TEXT("right"), this, &AVRCharacter::MoveRight);
}

void AVRCharacter::MoveForward(float _throttle)
{
	AddMovementInput(_throttle * m_Camera->GetForwardVector());
}

void AVRCharacter::MoveRight(float _throttle)
{
	AddMovementInput(_throttle * m_Camera->GetRightVector());
}

