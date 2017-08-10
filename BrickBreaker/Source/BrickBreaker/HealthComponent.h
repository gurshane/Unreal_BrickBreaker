// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Brick.h"

#include "Components/ActorComponent.h"

#include "HealthComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class BRICKBREAKER_API UHealthComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	
	UPROPERTY(EditAnywhere, Category = "Health Properties")
	int32 currentHealth;

	UPROPERTY(EditAnywhere, Category = "Health Properties")
	int32 maxHealth;

	// Sets default values for this component's properties
	UHealthComponent();
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	void TakeDamage(int amount);
	
};
