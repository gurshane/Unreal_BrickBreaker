// Fill out your copyright notice in the Description page of Project Settings.

#include "PaddleController.h"

void APaddleController::BeginPlay()
{
	Super::BeginPlay();

	UWorld* TheWorld = GetWorld();

	if (TheWorld)
	{
		AGameStateBase* TheGameState = TheWorld->GetGameState();
		if (TheGameState)
		{
			APlayerState** PlayerStates = TheGameState->PlayerArray.GetData();
			APlayerState* FirstPlayerState = PlayerStates[0];
			if (FirstPlayerState)
			{
				MyPlayerState = (APaddlePlayerState*)FirstPlayerState;
			}
		}
	}

}

void APaddleController::SetupInputComponent()
{
	Super::SetupInputComponent();

	InputComponent->BindAxis("HorizontalMovement", this, &APaddleController::HorizontalMovement);
}

void APaddleController::HorizontalMovement(float value)
{
	APawn* MyPawn = GetPawn();

	if (MyPawn && MyPawn != nullptr)
	{
		UPawnMovementComponent* PawnMovementComponent = MyPawn->GetMovementComponent();

		if (PawnMovementComponent && PawnMovementComponent != nullptr)
		{
			PawnMovementComponent->AddInputVector(MyPawn->GetActorRightVector() * value);
		}
	}
}
//
//void APaddleController::SpawnBricks()
//{
//	
//}

