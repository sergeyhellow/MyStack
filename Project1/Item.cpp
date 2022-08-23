#include "Item.h"

Item::Item()
	: next(nullptr)
	, prev(nullptr)
	, name("no_name")
{
	cout << "Item()" << endl;
}
Item::Item(std::string name)
	: next(nullptr)
	, prev(nullptr)
	, name(name)
{
	cout << "Item(" 
		 << name
		 << ")"
		 << endl;
}
Item::~Item()
{
	cout << "~Item("
		 << name
		 << ")\n";
}
void Item::print()
{
	cout << name << " <-> ";
}
