// Fill out your copyright notice in the Description page of Project Settings.

#include "PaddlePlayerState.h"

void APaddlePlayerState::ChangeScore(int32 amount)
{
	this->PlayerScore += amount;
}

int32 APaddlePlayerState::GetScore()
{
	return this->PlayerScore;
}


