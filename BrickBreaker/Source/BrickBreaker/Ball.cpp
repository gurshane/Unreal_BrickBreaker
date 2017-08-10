// Fill out your copyright notice in the Description page of Project Settings.

#include "Ball.h"

/*


UStaticMeshComponent* BallMesh;

USphereComponent* SphereCollider;

UArrowComponent* Arrow;



*/


// Sets default values
ABall::ABall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SphereCollider = CreateDefaultSubobject<USphereComponent>(TEXT("Collider"));
	RootComponent = SphereCollider;
	SphereCollider->SetRelativeLocation(FVector(100.0f, 0.0f, 0.0f));
	SphereCollider->SetRelativeRotation(FRotator(0.0f, 90.0f, 0.0f));

	/*FScriptDelegate ComponentFunction;
	ComponentFunction.BindUFunction(this, "OnHit");
	SphereCollider->OnComponentHit.Add(ComponentFunction);*/

	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	BallMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> SphereVisual(TEXT("/Game/StarterContent/Shapes/Shape_Sphere.Shape_Sphere"));
	if (SphereVisual.Succeeded())
	{
		BallMesh->SetStaticMesh(SphereVisual.Object);
		BallMesh->SetWorldScale3D(FVector(0.75f));
	}

	Arrow = CreateDefaultSubobject<UArrowComponent>(TEXT("Arrow"));
	Arrow->SetupAttachment(RootComponent);
	Arrow->ArrowSize = 4.0f;
	Arrow->bHiddenInGame = false;

}

// Called when the game starts or when spawned
void ABall::BeginPlay()
{
	Super::BeginPlay();

	InitialRotation = GetActorRotation();
	InitialPosition = GetActorLocation();
	
}

// Called every frame
void ABall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ABall::Respawn()
{
	RootComponent->SetRelativeLocation(InitialPosition);
	RootComponent->SetRelativeRotation(InitialRotation);
}

//void ABall::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//	if (OtherActor->IsA(ABrick::StaticClass()))
//{
//	ABrick* Brick = (ABrick*)OtherActor;
//	if (Brick != nullptr)
//	{
//		UHealthComponent* BrickHealth = Brick->GetHealthComponent();
//		if (BrickHealth != nullptr)
//		{
//			BrickHealth->TakeDamage(1);
//		}
//	}
//}
//}


