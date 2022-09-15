// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "CPP_timer.generated.h"

/**
 * 
 */
UCLASS()
class HYDROPHOBIA_API UCPP_timer : public UUserWidget
{
	GENERATED_BODY()
public:

	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, Category = Timer)
	int t_milliseconds;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, Category = Timer)
	int t_seconds;
	UPROPERTY(VisibleDefaultsOnly,BlueprintReadWrite, Category = Timer)
	int t_minutes;

	// Increases timer by milliseconds, seconds, and minutes
	UFUNCTION(BlueprintCallable)
	void increase_time();
};
