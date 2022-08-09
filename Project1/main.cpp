#include "stdafx.h"
#include "Item.h"
#include "List.h"
#include "CustomStack.h"
#include <iostream>


//
// Переменная - именованная область памяти
//   хранящая данные опеределённого типа.
//
using namespace std;

#define PI 3.1415
#define PI_NAME "number pi: "
#define m_sum(a,b) a + b
#define m_max(a,b) (a > b ? a : b)

int main()
{
	//CustomStack stack;

	std::cout << PI_NAME << PI << " " << m_sum(1, 2) << " " << m_max(7, 7.1) << endl;

	//return 0;



	DOCUMENT_NAME doc_name1 = "INN";
	std::string   doc_name2 = "SNILS";
	REFBOOK_NAME  ref_name3 = "POLIS";

	SubItem<DOCUMENT_ID>   doc_id;
	SubItem<DOCUMENT_NAME> doc_name;
	SubItem<DOCUMENT_DATE> doc_date;

	Document doc_inn(1, "INN", "2000-05-07", "35250090473 ФИО ...");
	Document doc_snils(2, "SNILS", "2015-05-07", "0000000000");
	Document doc_polis(3, "POLIS", "1999-01-01", ".......");

		
	//std::cout << doc_inn.doc_body.getValue() << endl;
	List* list = new List();
	

	

	list->print();
	std::cout << endl;
	delete list;

	return 0;
}