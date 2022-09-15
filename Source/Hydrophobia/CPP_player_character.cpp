// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_player_character.h"

void ACPP_player_character::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
	PlayerInputComponent->BindAxis(TEXT("move_left"), this, &ACPP_player_character::move_left);
	PlayerInputComponent->BindAxis(TEXT("move_right"), this, &ACPP_player_character::move_right);
}


void ACPP_player_character::move_left(float Value)
{
	AddMovementInput(FVector(1,0,0),Value);
}

void ACPP_player_character::move_right(float Value)
{
	
	AddMovementInput(FVector(1,0,0),Value);
}



