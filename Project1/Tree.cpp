#include "Tree.h"

void test_tree()
{
	cout << "test tree" << endl;
	Tree* tree1 = new Tree();
}



Branch::Branch() :left(nullptr), right(nullptr), parent(nullptr), value(0) {};
Branch::Branch (int _value)  { left = nullptr; right = nullptr; parent = nullptr; value = _value; };
Branch:: ~Branch() {};

void Branch::print()
{
	cout << value << endl;
	if (left)left->print();
	if (right)right->print();

}


Tree::Tree() :root(nullptr) {};
Tree::~Tree() {};




void Tree:: Print()
{
	if (root)
		root->print();
}


void Tree::Insert(int value) 
{
	if (root) 
	{

	}
	else 
	{
		root = new Branch();
	}

}