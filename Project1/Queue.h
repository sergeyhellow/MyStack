#ifndef  _Queue_H_
#define  _Queue_H_

#include "stdafx.h"
class Queue 
{
private:
	int* Wait; //очередь
	int MaxQueueLength;//макс размер очереди
	int CurQueueLength;//Текущий размер очереди



	public:
	Queue(int max);
	~Queue();
	void Add(int value);// добавить в очередь
	int Extract();//извлечь из очереди
	void Clear();// очистить очередь
	void Print();//напечатть 
	bool IsEmpty();
	bool IsFull();
	int Size();

};








#endif // ! _Queue_H_
