// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle.h"
#include "Camera/CameraComponent.h"
#include "Components/StaticMeshComponent.h"
#include "Components/BoxComponent.h"
#include "Components/InputComponent.h"
#include "Runtime/CoreUObject/Public/UObject/ConstructorHelpers.h"


// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	paddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	paddleMesh->SetupAttachment(RootComponent);
	paddleMesh->bCastDynamicShadow = false;
	paddleMesh->CastShadow = false;
	
	static ConstructorHelpers::FObjectFinder<UStaticMesh> BoxVisualAsset(TEXT("StaticMesh/Engine/BasicShapes/Cube.Cube"));
	if (BoxVisualAsset.Succeeded())
	{
		paddleMesh->SetStaticMesh(BoxVisualAsset.Object);
	}
	else
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Problem getting box mesh"));
	}
	RootComponent = paddleMesh;

	paddleCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	paddleCollider->SetupAttachment(RootComponent);
	paddleCollider->InitBoxExtent(FVector(1.0f, 4.0f, 1.0f));

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

	PlayerInputComponent->BindAxis("HorizontalMovement", this, &APaddle::MovePaddle);

	PlayerInputComponent->BindAction("Fire", IE_Pressed, this, &APaddle::Fire);
}

void APaddle::MovePaddle(float value)
{
	AddMovementInput(FVector(0.0f, 1.0f, 0.0f), value, false);
}

void APaddle::Fire()
{
	if (GEngine)
	{
		GEngine->AddOnScreenDebugMessage(-1, 5.0f, FColor::Red, TEXT("Fire!"));
	}
}

