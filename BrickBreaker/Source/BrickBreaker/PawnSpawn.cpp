// Fill out your copyright notice in the Description page of Project Settings.

#include "PawnSpawn.h"


// Sets default values
APawnSpawn::APawnSpawn()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APawnSpawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APawnSpawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

