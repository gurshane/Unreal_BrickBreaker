// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"

#include "GameFramework/GameModeBase.h"

#include "Blueprint/UserWidget.h"

#include "BrickBreakerBaseGameMode.generated.h"

/**
 * 
 */
UCLASS()
class BRICKBREAKER_API ABrickBreakerBaseGameMode : public AGameModeBase
{
	GENERATED_BODY()

public:

	

protected:

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "UI")
	TSubclassOf<UUserWidget> StartingWidget;
	

	void ActivateWidget(TSubclassOf<UUserWidget> Widget);
};
