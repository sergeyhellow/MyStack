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
	Branch(int _value);
	~Branch();

	void print();

};



class Tree
{
public:
	Branch* root;//root - ��� ������
	Tree();
	~Tree();

	void Print();
	void Insert(int value);
	

};


#endif //__TREE_H__