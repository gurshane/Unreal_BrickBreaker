// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"

#include "GameFramework/Pawn.h"
#include "GameFramework/SpringArmComponent.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

#include "Camera/CameraComponent.h"

#include "PaddleMovementComponent.h"

#include "Paddle.generated.h"

UCLASS()
class BRICKBREAKER_API APaddle : public APawn
{
	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere, Category = "Paddle")
	UPaddleMovementComponent* PaddleMovementComponent;

	UPROPERTY(EditAnywhere, Category = "Paddle")
	UBoxComponent* PaddleCollider;

	UPROPERTY(EditAnywhere, Category = "Paddle")
	UStaticMeshComponent* PaddleMesh;

	UPROPERTY(EditAnywhere, Category = "Paddle")
	USpringArmComponent* PaddleCameraArm;

	UPROPERTY(EditAnywhere, Category = "Paddle")
	UCameraComponent* PaddleCam;

	UPROPERTY(EditAnywhere, Category = "Paddle")
	float cameraLagSpeed;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this pawn's properties
	APaddle();

	virtual UPawnMovementComponent* GetMovementComponent() const override;

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	float GetCameraLagSpeed();

	void SetCameraLagSpeed(float value);
};
