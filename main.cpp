#include <iostream>
#include "Stop.h"
#include <windows.h>

using namespace std;

int main() 
{
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	Stop a;
	cout << "������� ������� ����� ��������� ��������� �� ���������: ";
	cin >> a.t_sr_pass;
	cout << "������� ������� ����� ��������� ���������: ";
	cin >> a.t_sr_marsh;
	cout << "������� �������� �� ��������� ��� ���: 1-��,0-��� ";
	cin >> a.EndStop;
	if (a.EndStop) 
	{

		if ((a.t_sr_marsh <= 15 / a.t_sr_pass) && (a.t_sr_marsh <= a.MaxSizeStop / a.t_sr_pass)) 
		{
			cout << "���������� ��������� �� �������� �����������";
		}
		else 
		{ 
			cout << "����� ������ ���������"; 
		}
	}
	else 
	{
		if((a.t_sr_marsh <= a.NestVMarsh() / a.t_sr_pass) && (a.t_sr_marsh <= a.MaxSizeStop / a.t_sr_pass)) 
		{
			cout << "���������� ��������� �� �������� �����������";
		}
		else 
		{
			cout << "����� ������ ���������";
		}
	}
	cout << endl;
	cout << "������� ����� �������� ���������: " << a.DeltaTime(a.t_sr_pass) << " �����";


}