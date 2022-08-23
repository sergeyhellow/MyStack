
#ifndef __QUEUE__H__
#define __QUEUE__H__

#include "stdafx.h"

class Queue
{
private:
	int* Wait;          // Очередь
	int MaxQueueLength; // Максимальный размер очереди
	int CurQueueLength; // Текущий      размер очереди
public:
	Queue(int max);
	~Queue();
	void Add(int value); // Добавить
	void Add_last(int value); // Добавить
	int  Extract(); // Извлечь
	void Clear();   // Очистить
	void Print();   // Напечатать
	bool IsEmpty(); // Пустая ли очередь
	bool IsFull();  // Полная ли очередь
	int  Size();    // Размер очереди
};

#endif