// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Classes/InputCoreTypes.h"
#include "Public/MotionControllerComponent.h"
#include "UObject/NameTypes.h"
#include "Components/SceneComponent.h"
#include "LeftController.generated.h"

UCLASS()
class VISIONRESONARE_API ALeftController : public AActor
{
	GENERATED_BODY()

	//Motion controller
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UMotionControllerComponent* LeftController;
public:
	// Sets default values for this actor's properties
	ALeftController();
	//Motion controller
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
		class UMotionControllerComponent* LeftController;

	void SetHand() { LeftController->MotionSource; }

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:
	// Called every frame
	virtual void Tick(float DeltaTime) override;

public:
	//Components
	//UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Player")
	//	UMotionControllerComponent* LeftController;

	UFUNCTION(BlueprintCallable, Category = "Player")
		void ActorBeginOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UFUNCTION(BlueprintCallable, Category = "Player")
		void ActorEndOverlap(AActor* OverlappedActor, AActor* OtherActor);

	UPROPERTY(EditDefaultsOnly)
		UHapticFeedbackEffect_Base* HapticEffect;
};
