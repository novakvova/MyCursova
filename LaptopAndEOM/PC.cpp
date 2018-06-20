#include "PC.h"



PC::PC()
{
}
PC::PC(string CPU, string Motheboard, int RAM, int HDD,
	int powerBlock, string format)
	:EOM(CPU, Motheboard, RAM, HDD)
{
	_powerBlock = powerBlock;
	_format = format;
}
void PC::ShowInfo()
{
	EOM::ShowInfo();
	cout << "\n";
	cout << "Power Block: " << _powerBlock << "\n";
	cout << "Format: " << _format;
}

PC::~PC()
{
}
