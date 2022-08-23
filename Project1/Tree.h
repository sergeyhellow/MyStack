
#ifndef __TREE_H__
#define __TREE_H__
#include "stdafx.h"
void test_tree();
// ������� ������ - ����
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
// �������� ������
class Tree
{
public:
	Node* root;

	Tree();
	~Tree();
	void Print();
	void Insert(int value);
	void Delete(int value);
	// �������� ������������ ��������
	int GetMax1();
	int GetMax2();
	int GetMax3(Node* p_node);
	int GetMax2(Node* p_node);
	// �������� ����������� ��������
	int GetMin();
	// �������� ���� � ������������ ���������
	Node* GetPtrMax(); 
	// �������� ���� � ����������� ���������
	Node* GetPtrMin(); 
	int getSumm();
	int GetCount(Node* p_node);
	float getAverageSumm();
	int CountNode();


};
#endif
