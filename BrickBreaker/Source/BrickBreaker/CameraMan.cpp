// Fill out your copyright notice in the Description page of Project Settings.

#include "CameraMan.h"


// Sets default values
ACameraMan::ACameraMan()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void ACameraMan::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ACameraMan::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

