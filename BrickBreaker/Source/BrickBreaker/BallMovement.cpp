// Fill out your copyright notice in the Description page of Project Settings.

#include "BallMovement.h"

// Sets default values for this component's properties
UBallMovement::UBallMovement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	ballAcceleration = 1.0f;
	ballDeceleration = -1.0f;
	// ...
}

// Called every frame
void UBallMovement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	AActor* MyOwner = GetOwner();

	if (MyOwner && MyOwner != nullptr)
	{
		FVector MoveDirection = MyOwner->GetActorForwardVector();
		FVector CurrentPosition = MyOwner->GetActorLocation();
		
		FHitResult* MovementResult = new FHitResult();


		//SetActorLocation moves the actor and if it returns false then the sweep check hit something so we "bounce"
		if ((MyOwner->SetActorLocation(CurrentPosition + MoveDirection * DeltaTime * ballSpeed /** ballAcceleration*/, true, MovementResult, ETeleportType::None)) == false)
		{
			FRotator CurrentRotation = MyOwner->GetActorRotation();
			float currentPitch = FMath::Abs(CurrentRotation.Pitch);
			if (currentPitch > 180.0f)
			{
				currentPitch -= 180.0f;
			}
			float nextPitch = currentPitch + FMath::RandRange(-180.0f, 180.0f) + (180.0f - 2.0f * currentPitch);
			//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Red, FString::SanitizeFloat(nextPitch));
			MyOwner->SetActorRelativeRotation(FRotator(nextPitch, -90.0f, 0.0f));

			//ball should accumulate some "bounce"
			//ballAcceleration += bounceModifier;

			if (MovementResult)
			{
				AActor* OtherActor = MovementResult->GetActor();
				if (OtherActor)
				{
					if (OtherActor->IsA(ABrick::StaticClass()))
					{

						ABrick* Brick = (ABrick*)OtherActor;
						if (Brick != nullptr && !Brick->IsPendingKill())
						{
							UHealthComponent* BrickHealth = Brick->GetHealthComponent();
							if (BrickHealth != nullptr)
							{
								BrickHealth->TakeDamage(1);
							}
						}
					}
				}
			}
			
			
		}
		

		////if the ball has recently bounced, reduce its acceleration over time
		//if (ballAcceleration > 1.0f)
		//{
		//	ballAcceleration = FMath::Clamp(ballAcceleration - (ballDeceleration * (ballAcceleration/ballDeceleration) * DeltaTime), 1.0f, 2000.0f);
		//}

	}
	// ...
}

