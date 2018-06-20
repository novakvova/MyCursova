#include "Laptop.h"



Laptop::Laptop()
{
}
Laptop::Laptop(string CPU, string Motheboard, int RAM, int HDD, 
	string display, int battery)
	:EOM(CPU, Motheboard, RAM, HDD)
{
	_display = display;
	_battery = battery;
}
void Laptop::ShowInfo()
{
	EOM::ShowInfo();
	cout << "\n";
	cout << "Display: " << _display << "\n";
	cout << "Battery: " << _battery;
}

Laptop::~Laptop()
{
}
