
#ifndef __CUSTOM_STACK_H__
#define __CUSTOM_STACK_H__

#include "stdafx.h"

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


	void push_up();
	void delete_up();
	void delete_index(int index, CustomStack& stack);
	void swap_elem(int index_up_elem, int index_down_elem, CustomStack& stack);
	void reverse(CustomStack& stack);
	void clear(CustomStack& stack);
	CustomStack Copy ();
	void del_copy_element(CustomStack &stack);
	void find_in(CustomStack& stack, int num);

	





};

#endif