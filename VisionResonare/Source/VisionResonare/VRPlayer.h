// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "Camera/CameraComponent.h"
#include "Engine/Canvas.h"
#include "GameFramework/PlayerController.h"
#include "Components/CapsuleComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Public/MotionControllerComponent.h"
#include "VisionResonare/RightController.h"
#include "VisionResonare/LeftController.h"
#include "VRPlayer.generated.h"

UCLASS()
class VISIONRESONARE_API AVRPlayer : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	AVRPlayer();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent);

public:
	void Save();
	void Load();

	//Config
	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ARightController> RightControllerClass;

	UPROPERTY(EditDefaultsOnly)
		TSubclassOf<ALeftController> LeftControllerClass;

	//Components
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
		USceneComponent* VRRoot;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
		UCameraComponent* Camera;

	//Referces
	UPROPERTY()
		ARightController* RightController;

	UPROPERTY()
		ALeftController* LeftController;
};
