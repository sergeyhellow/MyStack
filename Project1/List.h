#include <iostream>
#include "Item.h"

#ifndef __LIST_H__

#define __LIST_H__
using namespace std;
class List
{
private:
	Item* first;
	Item* last;
public:
	List();
	~List();
	void print();
	void add_item_in_back();
	void create_back();
	void push_back(Item* item);
	void push_begin(Item* item);

};


#endif

