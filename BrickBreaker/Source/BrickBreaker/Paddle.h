// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "GameFramework/Pawn.h"
#include "Paddle.generated.h"

UCLASS()
class BRICKBREAKER_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APaddle();

	UPROPERTY(EditAnywhere)
	class UCameraComponent* paddleCam;

	UPROPERTY(EditAnywhere)
	UStaticMeshComponent* paddleMesh;

	UPROPERTY()
	class UBoxComponent* paddleCollider;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void MovePaddle(float Value);
	
};
