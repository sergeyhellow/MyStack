
#ifndef __QUEUE__H__
#define __QUEUE__H__

#include "stdafx.h"

class Queue
{
private:
	int* Wait;          // �������
	int MaxQueueLength; // ������������ ������ �������
	int CurQueueLength; // �������      ������ �������
public:
	Queue(int max);
	~Queue();
	void Add(int value); // ��������
	void Add_last(int value); // ��������
	int  Extract(); // �������
	void Clear();   // ��������
	void Print();   // ����������
	bool IsEmpty(); // ������ �� �������
	bool IsFull();  // ������ �� �������
	int  Size();    // ������ �������
};

#endif