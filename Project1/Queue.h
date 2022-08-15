#ifndef  _Queue_H_
#define  _Queue_H_

#include "stdafx.h"
class Queue 
{
private:
	int* Wait; //�������
	int MaxQueueLength;//���� ������ �������
	int CurQueueLength;//������� ������ �������



	public:
	Queue(int max);
	~Queue();
	void Add(int value);// �������� � �������
	int Extract();//������� �� �������
	void Clear();// �������� �������
	void Print();//��������� 
	bool IsEmpty();
	bool IsFull();
	int Size();

};








#endif // ! _Queue_H_
