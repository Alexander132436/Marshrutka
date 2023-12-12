#pragma once
#include <iostream>
class Stop
{
public:
	int MaxSizeStop = 15;
	int SizeStop;
	int t_sr_pass;
	int t_sr_marsh;
	bool EndStop=true;

	Stop()
	{
		SizeStop = 0;
		t_sr_pass = 0;
		t_sr_marsh = 0;
	}
	
	//Среднее время пребывания пассажира на остановке
	double DeltaTime(int t_sr_pass)
	{
		return (MaxSizeStop * t_sr_pass) / 2;
	}
	//Количество свободных мест в маршрутке
	int NestVMarsh() 
	{
		srand(time(NULL));
		return rand() % 15 + 1;
	}
	
};

