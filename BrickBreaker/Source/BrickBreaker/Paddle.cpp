// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"

// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	paddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	paddleMesh->SetupAttachment(RootComponent);
	paddleMesh->bCastDynamicShadow = false;
	paddleMesh->CastShadow = false;
	RootComponent = paddleMesh;

	paddleCam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	paddleCam->SetupAttachment(RootComponent);
	paddleCam->SetRelativeLocation(FVector(-200.0f, 0.0f, 0.0f));
	paddleCam->bUseControllerViewRotation = false;


	paddleCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	paddleCollider->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void APaddle::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APaddle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APaddle::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

