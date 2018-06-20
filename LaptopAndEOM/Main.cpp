#include<iostream>
using namespace std;
#include"List.h"
#include"Laptop.h"
#include"PC.h"
int main()
{
	List list;
	if (1)
	{
		EOM *eom = new Laptop("Intel i7 7700HQ", "Intel 520 pro", 32, 512, "17.3", 10000);
		list.Add(eom);
		//eom->ShowInfo();
	}
	if (1)
	{
		EOM *eom = new PC("Intel i7 7700", "Intel 520 pro", 32, 512, 750, "ATX");
		list.Add(eom);
		//eom->ShowInfo();
	}
	list.Show();
	system("pause");
	return 0;
}