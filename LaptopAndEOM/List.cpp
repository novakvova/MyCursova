#include "List.h"



List::List()
{
	_head = NULL;
}
void List::Add(EOM *eom)
{
	Node *last = _head;
	if (last == NULL)
	{
		Node* item = new Node;
		item->data = eom;
		item->next = _head;
		_head = item;
		return;
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	Node*item = new Node;
	item->data = eom;
	item->next = NULL;
	last->next = item;
}
void List::Show()
{
	Node*item = _head;
	while (item != NULL)
	{
		cout << "--------------------------------------\n";
		item->data->ShowInfo();
		cout << endl;
		
		item = item->next;
	}
}
List::~List()
{
}
