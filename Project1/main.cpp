#include "stdafx.h"
#include "Item.h"
#include "List.h"
#include "CustomStack.h"
#include "Queue.h"
#include "Tree.h" // Бинарное дерево
#include "TText.h" // Для работы с файлами

//
// Переменная - именованная область памяти
//   хранящая данные опеределённого типа.
//

//
// 22.08.2022
// 1. [ОБЯЗАТЕЛЬНОЕ] Сохранить значения узлов древа в текстовый файл.
// 2. [ПО ЖЕЛАНИЮ] Загрузить древо из файла (имитация сериализации).
// 

class TObject
{
public:
	int value; // Хранимое значение
	int priority; // Приоритет
	TObject() : value(0), priority(0) { }
};

int main()
{

	srand(time(0));
	test_tree();
	
	/*Queue* Qu = new Queue(30);
	int* arr= new int[3];
	int	count=0;
		
	while (!(arr[0] ==7&& arr[1] == 7 && arr[2] == 7))

	{
		for (int i = 0; i<3;i++)
		Qu->Add_last(arr[i] = rand() % 8);
		
		count++;
		
		for (int i = 0; i < 3; i++)
		cout << " = " << arr[i];
		cout << endl;
	}

	std:: cout << count << endl;

	Qu->Print();
	cout << endl;*/
	
	
		
	
	

	//test_text();
	/*
	std::vector<TObject*> vec;
	for (int i = 0; i < 10; i++)
	{
		TObject* obj = new TObject();
		obj->value = i;
		obj->priority = rand() % 10;
		vec.push_back(obj);
	}
	std::vector<TObject*> vec2(vec);

	// Петаем приоритет элементов
	cout << "priority: ";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i]->priority << ' ';
	cout << endl;
	
	//========================
	int count = 0;
	for (int i = 0; i < vec.size()-1; i++)
	{
		for (int j = 0; j < vec.size()-1; j++)
		{
			if (vec[j]->priority > vec[j+1]->priority)
			{
				
				TObject* temp = vec[j];
				vec[j] = vec[j+1];
				vec[j+1] = temp;
				count++;
			}
		}
	}
	cout << "count = " << count << endl;
	cout << "priority: ";
	for (int i = 0; i < vec.size(); i++)
		cout << vec[i]->priority << ' ';
	cout << endl;

	cout << "2 priority: ";
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i]->priority << ' ';
	cout << endl;

	count = 0;
	for (int i = 0; i < vec2.size()-1; i++)
	{
		for (int j = i + 1; j < vec2.size(); j++)
		{
			if (vec2[i]->priority > vec2[j]->priority)
			{
				TObject* temp = vec2[j];
				vec2[j] = vec2[i];
				vec2[i] = temp;
				count++;
			}
		}
	}
	cout << "count = " << count << endl;
	
	cout << "2 priority: ";
	for (int i = 0; i < vec2.size(); i++)
		cout << vec2[i]->priority << ' ';
	cout << endl;
	//test_stack();
	*/
	return 0;
}

/*
DOCUMENT_NAME doc_name1 = "INN";
	std::string   doc_name2 = "SNILS";
	REFBOOK_NAME  ref_name3 = "POLIS";

	SubItem<DOCUMENT_ID>   doc_id;
	SubItem<DOCUMENT_NAME> doc_name;
	SubItem<DOCUMENT_DATE> doc_date;

	Document doc_inn  (1, "INN",   "2000-05-07", "35250090473 ФИО ...");
	Document doc_snils(2, "SNILS", "2015-05-07", "0000000000");
	Document doc_polis(3, "POLIS", "1999-01-01", ".......");

	cout << doc_inn.doc_body.getValue() << endl;

	List* list = new List();
	for (int i = 0; i < 30; ++i)
	{
		Item* it = new Item("Ms." + to_string(i));
		list->push_back(it);
	}
	list->print();
	cout << endl;
	delete list;
*/

/*
List::List() : first(nullptr), last(nullptr)
{
	cout << "List()" << endl;
}
List::~List()
{
	while (first->prev)
	{
		first = first->prev;
		delete first->next;
	}
	delete first;
}
void List::print()
{
	Item* cur = first;
	while (cur)
	{
		cur->print();
		cur = cur->prev;
	}
}
void List::add_Item_in_back()
{
	if (first == nullptr && last == nullptr)
	{
		last = new Item();
		first = last;
	}
	if (first == last)
	{
		Item* current = new Item();
		current->next = last;
		first->prev = current;
		last = current;
	}
	else
	{
		Item* current = new Item();
		current->next = last;
		last->prev = current;
		last = current;
	}
}
*/

/*
class List
{
private:
	Item* first;
	Item* last;
public:
	List();
	~List();
	void print();
	void add_Item_in_back();
	void create_back()
	{

	}
	void push_back(Item* item)
	{
		if (item == nullptr) return;

		if (last) // if (last != nullptr)
		{
			item->next = last;
			last->prev = item;
			last = item;
		}
		else
		{
			last = item;
			first = item;
		}
	}
	void push_begin(Item* item)
	{

	}
};
*/

