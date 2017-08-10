// Fill out your copyright notice in the Description page of Project Settings.

#include "Brick.h"


// Sets default values
ABrick::ABrick()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	BlockCollider = CreateDefaultSubobject<UBoxComponent>(TEXT("Collider"));
	BlockCollider->SetCollisionProfileName(TEXT("BlockAll"));
	RootComponent = BlockCollider;

	BlockMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Mesh"));
	BlockMesh->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<UStaticMesh> BoxVisual(TEXT("/Game/StarterContent/Shapes/Shape_Cube.Shape_Cube"));
	if (BoxVisual.Succeeded())
	{
		BlockMesh->SetStaticMesh(BoxVisual.Object);
		BlockMesh->SetWorldScale3D(FVector(1.0f));
	}

	BlockHealth = CreateDefaultSubobject<UHealthComponent>(TEXT("Health"));

	/*FScriptDelegate OnHitDelegate;
	OnHitDelegate.BindUFunction(this, "OnHit");
	BlockCollider->OnComponentHit.Add(OnHitDelegate);*/
}

// Called when the game starts or when spawned
void ABrick::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABrick::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

UHealthComponent* ABrick::GetHealthComponent()
{
	return BlockHealth;
}

void ABrick::Destroyed()
{
	UWorld* TheWorld = GetWorld();
	APaddlePlayerState* PlayerState = nullptr;

	if (TheWorld)
	{
		AGameStateBase* TheGameState = TheWorld->GetGameState();
		if (TheGameState)
		{
			APlayerState** PlayerStates = TheGameState->PlayerArray.GetData();
			APlayerState* FirstPlayerState = PlayerStates[0];
			if (FirstPlayerState)
			{
				PlayerState = (APaddlePlayerState*)FirstPlayerState;

				if (PlayerState)
				{
					PlayerState->ChangeScore(100);
				}
			}
		}
	}
	
	Super::Destroyed();
}

////If hit by a ball, destroy yourself
//void ABrick::OnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComponent, FVector NormalImpulse, const FHitResult& Hit)
//{
//	ABall* BallActor = (ABall*)OtherActor;
//
//	if (BallActor != nullptr)
//	{
//		//Destroy();
//		GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, GetName() + " hit by " + OtherActor->GetName());
//	}
//}


