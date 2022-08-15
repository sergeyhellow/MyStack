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

int Queue::Extract ()
{
	//если очередь не пустая
	if (!IsEmpty()) 
	{
		int temp = Wait[0];
	//	сдвигаем очередь 
		for (int i = 0; i <CurQueueLength-1; i++)
		{
			Wait[i] = Wait[i + 1];
						
		}
		CurQueueLength--;
		return  temp;
	}
};

void Queue::Add(int value)
{
	if(!IsFull())
	Wait[CurQueueLength++] = value;
};  

void Queue::Clear()
{
	CurQueueLength = 0;
};// очистить очередь
void Queue::Print()
{
	for (int i = 0; i < CurQueueLength; i++) 
	{
		cout << Wait[i]<< ' ';
		cout << endl;
	}

};//напечатть 
bool Queue::IsEmpty() { return false; };
bool Queue::IsFull() { return false; };
int Queue::Size() { return 0; };