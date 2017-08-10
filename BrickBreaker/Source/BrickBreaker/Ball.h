// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ConstructorHelpers.h"
#include "BallMovement.h"
#include "Brick.h"
#include "Paddle.h"

#include "Engine/Engine.h"

#include "GameFramework/Actor.h"

#include "Components/StaticMeshComponent.h"
#include "Components/SphereComponent.h"
#include "Components/ArrowComponent.h"

#include "Ball.generated.h"

UCLASS()
class BRICKBREAKER_API ABall : public AActor
{
	GENERATED_BODY()
	
public:	

	UPROPERTY(EditAnywhere, Category = "Ball")
	UStaticMeshComponent* BallMesh;

	UPROPERTY(EditAnywhere, Category = "Ball")
	USphereComponent* SphereCollider;

	UPROPERTY(EditAnywhere, Category = "Ball")
	UArrowComponent* Arrow;

	UPROPERTY()
	FRotator InitialRotation;

	UPROPERTY()
	FVector InitialPosition;

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:

	// Sets default values for this actor's properties
	ABall();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	UFUNCTION(BlueprintCallable)
	void Respawn();

	/*UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);
	*/
};
