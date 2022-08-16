#ifndef __TREE_H__
#define __TREE_H__
#include "stdafx.h"

void test_tree();
class Branch
{
public:
	Branch* left;
	Branch* right;
	Branch* parent;
	int value;
	


	Branch();
	Branch(Branch* _parent, int _value);
	~Branch();

	void print();
	void Add(int value);
	bool Delete(int value);
};



class Tree
{
public:
	Branch* root;//root - это корень
	Tree();
	~Tree();

	void Print();
	void Insert(int value);
	void Delete(int value);
	

};


#endif //__TREE_H__