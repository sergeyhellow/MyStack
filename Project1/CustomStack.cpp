#include "CustomStack.h"

void test_stack()
{
	srand(time(0));
	CustomStack stack;
	char value;
	// Пока стек не заполнен
	while (!stack.IsFull())
	{
		value = 48 + rand() % 10;
		stack.Push(value);
	}
	stack.Push('7');
	stack.Print();
	stack.DeleteDown();
	stack.Print();
	// Пока стек не освободился
	while (value = stack.Pop())
	{
		//cout << value << " ";
		stack.Print();
	}
	cout << endl << endl;
}

CustomStack::CustomStack() : top(EMPTY) { }
CustomStack::~CustomStack() { }
void CustomStack::Print()
{
	for (int i = 0; i < GetCount(); i++)
		cout << st[i] << ' ';
	cout << endl;
}
void CustomStack::DeleteDown()
{
	for (int i = 0, a = top--; i <= top; i++)
		st[i] = st[i + 1];
}
void CustomStack::Push(char p_value)
{
	if (!IsFull()) st[++top] = p_value;
}
char CustomStack::Pop()
{
	if (!IsEmpty()) return st[top--];
	else return 0;
}
void CustomStack::Clear()    { top = EMPTY; }
bool CustomStack::IsEmpty()  { return top == EMPTY; }
bool CustomStack::IsFull()   { return top == FULL;  }
int  CustomStack::GetCount() { return top + 1;      }