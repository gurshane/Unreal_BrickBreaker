// Fill out your copyright notice in the Description page of Project Settings.

#include "HealthComponent.h"


// Sets default values for this component's properties
UHealthComponent::UHealthComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}

// Called every frame
void UHealthComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (currentHealth == 0)
	{
		AActor* Owner = GetOwner();
		if (Owner != nullptr)
		{
			if (!Owner->IsPendingKill())
			{
				GetOwner()->Destroy();
			}
		}
	}
}

void UHealthComponent::TakeDamage(int32 amount)
{
	currentHealth = FMath::Clamp(currentHealth - amount, 0, maxHealth);
}

