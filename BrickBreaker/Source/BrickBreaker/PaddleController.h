// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaddlePlayerState.h"
#include "EngineUtils.h"

#include "GameFramework/PlayerController.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PawnMovementComponent.h"
#include "GameFramework/GameStateBase.h"

#include "Engine/Engine.h"

#include "PaddleController.generated.h"

UCLASS()
class BRICKBREAKER_API APaddleController : public APlayerController
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = " Paddle Stuff")
	APaddlePlayerState* MyPlayerState;

	//UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Paddle Stuff")
	//APawnSet* LevelPawnSet

	void HorizontalMovement(float value);
/*
	void SpawnBricks();*/

protected:

	virtual void BeginPlay() override;

	virtual void SetupInputComponent() override;

};
