// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PawnMovementComponent.h"
#include "PaddleMovementComponent.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_API UPaddleMovementComponent : public UPawnMovementComponent
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, Category = "Paddle")
	float paddleSpeed;
	
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction) override;
	
};
