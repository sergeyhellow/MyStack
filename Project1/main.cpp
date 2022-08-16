#include "stdafx.h"
#include "Item.h"
#include "List.h"
#include "CustomStack.h"
#include <iostream>
#include <time.h>
#include "Queue.h"
#include "Tree.h"
//
// Переменная - именованная область памяти
//   хранящая данные опеределённого типа.
//
using namespace std;

#define PI 3.1415 // это макросы
#define PI_NAME "number pi: "
#define m_sum(a,b) a + b
#define m_max(a,b) (a > b ? a : b)

class TObject
{
public:
	int value;
	int priority;
	bool status;
	TObject() :value(0), priority(0), status(false) {}
	

};



int main()
{

	test_tree();


	return 0;
}