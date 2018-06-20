#pragma once
#include<iostream>
#include<string>
using namespace std;
class EOM
{
private:
	string _CPU;
	string _Motheboard;
	int _RAM;
	int _HDD;
public:
	EOM();
	EOM(string, string, int, int);
	virtual void ShowInfo();
	virtual ~EOM();
};

