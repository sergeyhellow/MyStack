#include "Queue.h"


Queue:: Queue (int max) 
{
	MaxQueueLength = max;
	Wait = new int[MaxQueueLength];
	CurQueueLength = 0;

};

Queue:: ~Queue()
{
	delete[] Wait;
};


void Queue::Add(int value) {};// добавить в очередь
int Queue::Extract() { return 0; };//извлечь из очереди
void Queue::Clear() {};// очистить очередь
void Queue::Print() {};//напечатть 
bool Queue::IsEmpty() { return false; };
bool Queue::IsFull() { return false; };
int Queue::Size() { return 0; };