#include <iostream>
#include "Stop.h"
#include <windows.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Stop a;
	cout << "Введите среднее время появления пассажира на остановке: ";
	cin >> a.t_sr_pass;
	cout << "Введите среднее время появления маршрутки: ";
	cin >> a.t_sr_marsh;
	cout << "Введите конечная ли остановка или нет: 1-Да,0-Нет ";
	cin >> a.EndStop;
	if (a.EndStop) 
	{

		if ((a.t_sr_marsh <= 15 / a.t_sr_pass) && (a.t_sr_marsh <= a.MaxSizeStop / a.t_sr_pass)) 
		{
			cout << "Количество маршруток на маршруте достаточное";
		}
		else 
		{ 
			cout << "Нужно больше маршруток"; 
		}
	}
	else 
	{
		if((a.t_sr_marsh <= a.NestVMarsh() / a.t_sr_pass) && (a.t_sr_marsh <= a.MaxSizeStop / a.t_sr_pass)) 
		{
			cout << "Количество маршруток на маршруте достаточное";
		}
		else 
		{
			cout << "Нужно больше маршруток";
		}
	}
	cout << endl;
	cout << "Среднее время ожидания пассажира: " << a.DeltaTime(a.t_sr_pass) << " минут";


}