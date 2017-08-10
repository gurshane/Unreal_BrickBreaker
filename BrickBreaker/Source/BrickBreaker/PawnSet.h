// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"

#include "GameFramework/Actor.h"

#include "PawnSet.generated.h"

UCLASS()
class BRICKBREAKER_API APawnSet : public AActor
{
	GENERATED_BODY()
	
public:	

	// Sets default values for this actor's properties
	UPROPERTY(EditAnywhere, Category = "Pawn Set")
	TArray<ABrick*> Bricks;

	APawnSet();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	
	
};
