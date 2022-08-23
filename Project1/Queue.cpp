#include "Queue.h"

Queue::Queue(int max)
{ 
	MaxQueueLength = max;
	Wait = new int[MaxQueueLength];
	CurQueueLength = 0;
}
Queue::~Queue()
{
	delete[] Wait;
}
void Queue::Add(int value)
{
	// Если в очереди есть свободное место
	if (!IsFull())
	{
		// Встаём в очередь
		Wait[CurQueueLength++] = value;
	}	
}
int Queue::Extract()
{
	// Если очередь не пуста
	if (!IsEmpty())
	{
		// Сохраняем начало очереди во временную переменную
		int temp = Wait[0];
		// Сдвигаем очередь на 1
		for (int i = 0; i < CurQueueLength - 1; i++)
			Wait[i] = Wait[i + 1];
		// Уменьшаем итоговое кол-во элементов в очереди на 1
		CurQueueLength--;
		// Возвращаем сохранённую временную переменную
		return temp;
	}
}
void Queue::Clear()
{ 
	// Эффективная "очистка" очереди
	CurQueueLength = 0;
}
void Queue::Print()
{
	for (int i = 0; i < CurQueueLength; i++)
		cout << Wait[i] << ' ';
	cout << endl;
}
bool Queue::IsEmpty() { return CurQueueLength == 0; }
bool Queue::IsFull() { return CurQueueLength == MaxQueueLength; }
int Queue::Size() { return CurQueueLength; }

void Queue::Add_last(int value)
{
	// Если в очереди есть свободное место
		 // Если в очереди есть свободное место

	if (!IsFull())

	{
		// Встаём в очередь
		Wait[CurQueueLength++] = value;
	}

	else
	{
		for (int i = 0; i < CurQueueLength - 1; i++)
		Wait[i] = Wait[i + 1];
		CurQueueLength--;
		Wait[CurQueueLength++] = value;

	}
}