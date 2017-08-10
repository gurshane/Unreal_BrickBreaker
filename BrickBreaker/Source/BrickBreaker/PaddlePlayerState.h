// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/PlayerState.h"

#include "PaddlePlayerState.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_API APaddlePlayerState : public APlayerState
{
	GENERATED_BODY()
	
	
public:

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Player state")
	int32 PlayerScore;

	void ChangeScore(int32 amount);
	
	int32 GetScore();
};
