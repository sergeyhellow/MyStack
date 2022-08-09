#include "Item.h"
#include "List.h"


List::List() : first(nullptr), last(nullptr)
{
	cout << "List()" << endl;
}
List::~List()
{
	if (first) {// добавить

		while (first->prev)
		{

			first = first->prev;
			delete first->next;

		}

		delete first;
	}
	else return; // добавить
};



void List::print()
{
	Item* cur = first;
	while (cur)
	{
		cur->print();
		cur = cur->prev;
	}
}


void List::push_back(Item* item)
{
	if (item == nullptr) return;

	if (last) // if (last != nullptr)
	{
		item->next = last;
		last->prev = item;
		last = item;
	}
	else
	{
		last = item;
		first = item;
	}
};

void List::push_begin(Item* item)
{

	if (item == nullptr) return;
	if (first)

	{
		item->next = nullptr;
		first->next = item;
		item->prev = first;
		first = item;
	}

	else
	{
		last = item;
		first = item;
	}
};

void List::add_item_in_back()
{
	if (first == nullptr && last == nullptr)
	{
		last = new Item();
		first = last;
	}
	if (first == last)
	{
		Item* current = new Item();
		current->next = last;
		first->prev = current;
		last = current;
	}
	else
	{

		Item* current = new Item();
		current->next = last;
		last->prev = current;
		last = current;
	}
}

