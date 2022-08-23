
#ifndef __TREE_H__
#define __TREE_H__
#include "stdafx.h"
void test_tree();
// Элемент дерева - узел
class Node
{
public:
	Node* left;
	Node* right;
	Node* parent;
	int value;

	Node();
	Node(Node* parent, int value);
	~Node();
	void Print();
	void Add(int value);
	bool Delete(int value);
	int getSumm(bool summ);
};
// Бинарное дерево
class Tree
{
public:
	Node* root;

	Tree();
	~Tree();
	void Print();
	void Insert(int value);
	void Delete(int value);
	// Получить максимальное значение
	int GetMax1();
	int GetMax2();
	int GetMax3(Node* p_node);
	int GetMax2(Node* p_node);
	// Получить минимальное значение
	int GetMin();
	// Получить узел с максимальным значением
	Node* GetPtrMax(); 
	// Получить узел с иминмальным значением
	Node* GetPtrMin(); 
	int getSumm();
	int GetCount(Node* p_node);
	float getAverageSumm();
	int CountNode();


};
#endif
