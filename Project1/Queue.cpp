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
	// ���� � ������� ���� ��������� �����
	if (!IsFull())
	{
		// ����� � �������
		Wait[CurQueueLength++] = value;
	}	
}
int Queue::Extract()
{
	// ���� ������� �� �����
	if (!IsEmpty())
	{
		// ��������� ������ ������� �� ��������� ����������
		int temp = Wait[0];
		// �������� ������� �� 1
		for (int i = 0; i < CurQueueLength - 1; i++)
			Wait[i] = Wait[i + 1];
		// ��������� �������� ���-�� ��������� � ������� �� 1
		CurQueueLength--;
		// ���������� ���������� ��������� ����������
		return temp;
	}
}
void Queue::Clear()
{ 
	// ����������� "�������" �������
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
	// ���� � ������� ���� ��������� �����
		 // ���� � ������� ���� ��������� �����

	if (!IsFull())

	{
		// ����� � �������
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