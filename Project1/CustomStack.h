
#ifndef __CUSTOM_STACK_H__
#define __CUSTOM_STACK_H__

#include "stdafx.h"

void test_stack();

class CustomStack
{
private:
	// ������� � ������ �������
	enum { EMPTY = -1, FULL = 20 };
	// ������ ��� �������� ������
	char st[FULL + 1];
	// ��������� �� ������� �����
	int top;
public:
	CustomStack();
	~CustomStack();
	void Print();
	void Push(char p_value); // ���������� ��������
	char Pop(); // ���������� ��������
	void DeleteDown();
	void Clear(); // ������� �����
	bool IsEmpty(); // �������� �� �������
	bool IsFull(); // �������� �� ���������������
	int  GetCount(); // ���-�� ���������
};

#endif
