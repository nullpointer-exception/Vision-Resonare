// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "VRPlayer.generated.h"
#include "Classes/Camera/CameraComponent.h"

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

	UFUNCTION(BlueprintCallable, Category = "Player")
		bool HandleCollision(USceneComponent* OtherComp);

	UFUNCTION(BlueprintCallable, Category = "Player")
		UCameraComponent* Camera;

	UFUNCTION(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		void OnOverlapBegin(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);

	UFUNCTION(EditDefaultsOnly, BlueprintReadWrite, Category = "Player")
		void OnOverlapEnd(class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex);

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
