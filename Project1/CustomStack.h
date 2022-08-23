
#ifndef __CUSTOM_STACK_H__
#define __CUSTOM_STACK_H__

#include "stdafx.h"

void test_stack();

class CustomStack
{
private:
	// Верхняя и нижняя границы
	enum { EMPTY = -1, FULL = 20 };
	// Массив для хранения данных
	char st[FULL + 1];
	// Указатель на вершину стека
	int top;
public:
	CustomStack();
	~CustomStack();
	void Print();
	void Push(char p_value); // Добавление элемента
	char Pop(); // Извлечение элемента
	void DeleteDown();
	void Clear(); // Очистка стека
	bool IsEmpty(); // Проверка на пустоту
	bool IsFull(); // Проверка на переполненность
	int  GetCount(); // Кол-во элементов
};

#endif
