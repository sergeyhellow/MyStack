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


void Queue::Add(int value) {};// �������� � �������
int Queue::Extract() { return 0; };//������� �� �������
void Queue::Clear() {};// �������� �������
void Queue::Print() {};//��������� 
bool Queue::IsEmpty() { return false; };
bool Queue::IsFull() { return false; };
int Queue::Size() { return 0; };