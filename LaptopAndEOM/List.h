#pragma once
#include"EOM.h"

class List
{
private:
	struct Node
	{
		EOM *data;
		Node * next;
	};
	Node * _head;
	
public:
	List();
	void Add(EOM *);
	void Show();
	~List();
};

