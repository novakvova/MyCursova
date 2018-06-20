#pragma once
#include"EOM.h"

class PC : public EOM
{
private:
	int _powerBlock;
	string _format;//(ATX, miniATX, microATX)
public:
	PC();
	PC(string, string, int, int, int, string);
	virtual void ShowInfo();
	~PC();
};

