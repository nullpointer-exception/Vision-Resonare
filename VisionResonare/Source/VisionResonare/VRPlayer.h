// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Classes/Camera/CameraComponent.h"
#include "Classes/Engine/Canvas.h"
#include "Classes/GameFramework/PlayerController.h"
#include "Classes/GameFramework/Actor.h"
#include "Classes/Components/CapsuleComponent.h"
#include "HeadMountedDisplay/Public/MotionControllerComponent.h"
#include "VRPlayer.generated.h"

UCLASS()
class VISIONRESONARE_API AVRPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPlayer();

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		UStaticMeshComponent* LeftHand;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		UStaticMeshComponent* RightHand;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
		UCapsuleComponent* Boddy;

	UFUNCTION(BlueprintCallable, Category = "Player")
		bool HandleCollision(USceneComponent* OtherComp);


	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
		UCameraComponent* Camera;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		UCanvas* Canvas;

	UPROPERTY(VisibleAnywhere)
		UMotionControllerComponent* MotionController;

	UPROPERTY(EditDefaultsOnly)
		class UHapticFeedbackEffect_Base* HapticEffect;


	UFUNCTION(BlueprintCallable, Category = "Player")
		void ClientPlaySoundAtLocation
		(
			class USoundBase * Sound,
			FVector Location,
			float VolumeMultiplier,
			float PitchMultiplier
		);

	UFUNCTION(BlueprintCallable, Category = "Player")
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherACtor);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	bool PlayerDead = false;

	inline void TakeDamage(int _damage);

private:
	int m_health = 100;

};
