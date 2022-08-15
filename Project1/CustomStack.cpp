#include "CustomStack.h"



void test_stack() {

	srand(time(0));

	CustomStack stack;
	char value;
	while (!stack.IsFull())
	{
		value = 48 + rand() % 9;// обозначение символов из ASCII2
		stack.Push(value);

	}
	stack.Print();
	stack.Delete_first();
	cout << endl << endl;
	stack.Print();

	

	cout << endl << endl;


}




CustomStack::CustomStack() :top(EMPTY) {};


CustomStack::~CustomStack()
{
	cout << "CustomStack::~CustomStack()" << endl;
}


void CustomStack::Push(char P_value)

{
	if (!IsFull()) 
	{
		st[++top] = P_value;
	}
	//else 
	//{
	//	cout << "Stack is full!";
	//}
	
	
};

char CustomStack::Pop()
{
	if (!IsEmpty())
	{
		return st[top--];
	}
	else return 0;

};

void CustomStack::Clear()    { top = EMPTY; };
bool CustomStack::IsEmpty()  { return top == EMPTY; };
bool CustomStack::IsFull()   { return top == FULL; };
int CustomStack::GetCount()   { return top + 1; };



void CustomStack::Delete_first()
{
	for (int i = 0; i < GetCount(); i++)
	{
		st[i] = st[i + 1]; 
	}
	top--;
};


void CustomStack::Print() 
{
	for (int i = 0; i < GetCount(); i++)
	{
		cout << st[i] << ' ';
	}
}
