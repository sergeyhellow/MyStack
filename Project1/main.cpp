#include "stdafx.h"
#include "Item.h"
#include "List.h"
#include "CustomStack.h"
#include <iostream>
#include <time.h>


//
// Переменная - именованная область памяти
//   хранящая данные опеределённого типа.
//
using namespace std;

#define PI 3.1415 // это макросы
#define PI_NAME "number pi: "
#define m_sum(a,b) a + b
#define m_max(a,b) (a > b ? a : b)

int main()
{
	
	test_stack();
	cout << endl << endl;

	

	return 0;
}