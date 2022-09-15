// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PaperCharacter.h"
#include "CPP_player_character.generated.h"

UENUM(BlueprintType)
enum animation_state
{
	Idle UMETA(DisplayBane = "Idle"),
	Run UMETA(DisplayBane = "Run"),
	Death UMETA(DisplayBane = "Death"),
	Start_Jump UMETA(DisplayBane = "Start_Jump"),
	End_Jump UMETA(DisplayBane = "End_jump"),
	Dash UMETA(DisplayBane = "Dash"),
	Falling UMETA(DisplayBane = "Falling")
};

UCLASS()
class HYDROPHOBIA_API ACPP_player_character : public APaperCharacter
{
	GENERATED_BODY()

public:
	
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	// CPP variables

	// Animation
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Animations)
		TEnumAsByte<animation_state> animation_state;
	
	// Character
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isMoving;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isJumping;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isAlive = true;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isLanding;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isFalling;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Character)
		bool isDashing;

	// Win Conditions
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Win)
		bool hasChips;
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = Win)
		int chips;
	
	// Respawning
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Respawning)
		int lives = 3;
	UPROPERTY(VisibleDefaultsOnly, BlueprintReadWrite, Category = Respawning)
		FVector respawn_location;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Respawning)
	int time_penalty = 20;

	// Dash
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Dash)
		float dash_delay = 1;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Dash)
		float dash_force = 2000;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = Dash)
		bool can_dash = true;
private:
	
	// CPP functions for movement
	UFUNCTION()
		void move_left(float Value);
	UFUNCTION()
		void move_right(float Value);
};
