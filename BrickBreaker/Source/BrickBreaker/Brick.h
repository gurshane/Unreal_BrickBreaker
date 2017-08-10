// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Ball.h"
#include "ConstructorHelpers.h"
#include "HealthComponent.h"
#include "GameFramework/GameModeBase.h"
#include "PaddlePlayerState.h"
#include "Engine.h"

#include "GameFramework/Actor.h"

#include "Components/BoxComponent.h"
#include "Components/StaticMeshComponent.h"

#include "Brick.generated.h"

UCLASS()
class BRICKBREAKER_API ABrick : public AActor
{
	GENERATED_BODY()
	
public:	
	
	//mesh
	UPROPERTY(EditAnywhere, Category = "Block Properties")
	UStaticMeshComponent* BlockMesh;

	UPROPERTY(EditAnywhere, Category = "Block Properties")
	UBoxComponent* BlockCollider;

	UPROPERTY(EditAnywhere, Category = "Block Properties")
	class UHealthComponent* BlockHealth;

	/*UFUNCTION()
	void OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit);

*/
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	

	// Sets default values for this actor's properties
	ABrick();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	virtual void Destroyed() override;

	UHealthComponent* GetHealthComponent();
};
