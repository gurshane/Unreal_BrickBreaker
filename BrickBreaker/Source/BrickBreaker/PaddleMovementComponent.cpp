// Fill out your copyright notice in the Description page of Project Settings.

#include "PaddleMovementComponent.h"


void UPaddleMovementComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (!PawnOwner || !UpdatedComponent || ShouldSkipUpdate(DeltaTime))
	{
		return;
	}

	FVector MovementInput = ConsumeInputVector().GetClampedToMaxSize(1.0f) * DeltaTime * paddleSpeed;

	if (!MovementInput.IsNearlyZero())
	{
		FHitResult Hit;

		SafeMoveUpdatedComponent(MovementInput, UpdatedComponent->GetComponentRotation(), true, Hit);

		if (Hit.IsValidBlockingHit())
		{
			SlideAlongSurface(MovementInput, 1.0f - Hit.Time, Hit.Normal, Hit);
		}
	}
}

