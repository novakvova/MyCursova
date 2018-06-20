#include "EOM.h"


EOM::EOM()
{
}
EOM::EOM(string CPU, string Motheboard, int RAM, int HDD)
{
	_CPU = CPU;
	_Motheboard = Motheboard;
	_RAM = RAM;
	_HDD = HDD;
}
void EOM::ShowInfo()
{
	cout << "CPU: " << _CPU << "\n";
	cout << "Motheboard: " << _Motheboard << "\n";
	cout << "RAM: " << _RAM << "\n";
	cout << "HDD: " << _HDD;
}
EOM::~EOM()
{
}
