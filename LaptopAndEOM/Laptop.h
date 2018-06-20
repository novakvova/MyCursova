#pragma once
#include"EOM.h"
class Laptop : public EOM
{
private:
	string _display;
	int _battery;
public:
	Laptop();
	Laptop(string, string, int, int, string, int);
	virtual void ShowInfo();
	~Laptop();
};

