// Fill out your copyright notice in the Description page of Project Settings.

#include "BrickBreakerBaseGameMode.h"


void ABrickBreakerBaseGameMode::BeginPlay()
{
	Super::BeginPlay();

	ActivateWidget(StartingWidget);
}

void ABrickBreakerBaseGameMode::ActivateWidget(TSubclassOf<UUserWidget> Widget)
{
	UUserWidget* MyWidget = CreateWidget<UUserWidget>(GetWorld(), Widget);
	MyWidget->AddToViewport();
}
