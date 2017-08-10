// Fill out your copyright notice in the Description page of Project Settings.

#include "Paddle.h"


// Sets default values
APaddle::APaddle()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	PaddleCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("COLLIDER"));
	RootComponent = PaddleCollider;
	PaddleCollider->SetCollisionProfileName(TEXT("Pawn"));

	PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MESH"));
	PaddleMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BoxVisual(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (BoxVisual.Succeeded())
	{
		PaddleMesh->SetStaticMesh(BoxVisual.Object);
		PaddleMesh->SetWorldScale3D(FVector(1.0f));
	}

	PaddleMovementComponent = CreateDefaultSubobject<UPaddleMovementComponent>(TEXT("Movement"));
	PaddleMovementComponent->UpdatedComponent = RootComponent;

	PaddleCameraArm = CreateDefaultSubobject<USpringArmComponent>(TEXT("CameraArm"));
	PaddleCameraArm->TargetArmLength = 1200.0f;
	PaddleCameraArm->bEnableCameraLag = false;
	PaddleCameraArm->CameraLagSpeed = cameraLagSpeed;
	//PaddleCameraArm->SetupAttachment(RootComponent);

	PaddleCam = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	PaddleCam->SetupAttachment(PaddleCameraArm, USpringArmComponent::SocketName);
	PaddleCam->bAutoActivate = true;

	AutoPossessPlayer = EAutoReceiveInput::Player0;
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

UPawnMovementComponent* APaddle::GetMovementComponent() const
{
	return PaddleMovementComponent;
}

