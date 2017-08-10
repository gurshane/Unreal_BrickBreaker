// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"

#include "Components/ActorComponent.h"

#include "GameFramework/Actor.h"

#include "Engine/Engine.h"

#include "BallMovement.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKBREAKER_API UBallMovement : public UActorComponent
{
	GENERATED_BODY()

public:	

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float ballSpeed;

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float ballAcceleration;

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float ballDeceleration;

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float bounceModifier;

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float timeSinceLastBounce;

	UPROPERTY(EditAnywhere, Category = "Movement Properties")
	float timeUntilNextBounce;

	bool canBounce;

	// Sets default values for this component's properties
	UBallMovement();

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

		
	
};
