// Fill out your copyright notice in the Description page of Project Settings.


#include "CPP_timer.h"

void UCPP_timer::increase_time()
{
	t_milliseconds += 1;
	if(t_milliseconds >= 100)
	{
		t_milliseconds = 0;
		t_seconds += 1;
		if(t_seconds >= 60)
		{
			t_seconds = t_seconds - 60;
			t_minutes += 1; 
		}
	}
}

