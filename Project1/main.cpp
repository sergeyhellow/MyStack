#include "stdafx.h"
#include "Item.h"
#include "List.h"
#include "io.h"
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

struct SubTree
{

	int value;
	SubTree* next;
	SubTree() : value(0), next(nullptr) {}
};




class MiniTree
{
public:
	//string name; //имя
	char name[10];
	int age; //возраст
	SubTree* subTree;
	//MiniTree(string name, int age): name(name), age(age)  {}
	MiniTree () : subTree(nullptr) {}

};





int main()
{
	//int res = rename("tree1.txt", "files/tree3.txt");
	//cout << "res = " << res << endl;

	//res = remove("files/tree3.txt"); // удаление файла
	//cout << "res = " << res << endl;

	//char path[70];

	//	
	//cout << "Укажите путь к файлу:  ";
	//cin >> path;
	//char mask[15];
	//cout << "Укажите маску к файлу (*.* или *.txt ) ";
	//cin >> mask;


	// совединив две строки получим результат
	// то есть что и где хочет найти пользовватель

	FILE* f;
	fopen_s(&f, "tree1.txt", "a");
	fclose(f);

	struct _finddata_t c_file;

	intptr_t hFile; // тоже самое что инт
	hFile = _findfirst("*.cpp", &c_file);

	cout    << "c_file.attrib: "	  << c_file.attrib		<< "\n"
			<< "c_file.name: "		  << c_file.name		<< "\n"
			<< "c_file.size: "		  << c_file.size		<< "\n"
			
		;

	hFile = _findnext(hFile, &c_file);
	 cout	<< "c_file.attrib: "	<< c_file.attrib << "\n"
			<< "c_file.name: "		<< c_file.name <<	"\n"
			<< "c_file.size: "		<< c_file.size <<	"\n"
		 ;




	/*SubTree sub_tree1;
	sub_tree1.value = 10;


	MiniTree mini_tree1;
	mini_tree1.subTree = &sub_tree1;
	mini_tree1.age = 15;
	cout << "name ";
	cin >> mini_tree1.name;

	cout << "&sub_tree1 = " << &sub_tree1 << " sub_tree1.value = " << sub_tree1.value << endl;

	FILE* f;

	fopen_s(&f, "tree1.txt", "w");
	fwrite(&mini_tree1, sizeof(MiniTree), 1, f);
	fclose(f); 

	*/

	/*

	SubTree sub_tree1;
	sub_tree1.value ;


	MiniTree mini_tree1;
	mini_tree1.subTree = &sub_tree1;
	mini_tree1.age = 0;
	
	FILE* f;

	fopen_s(&f, "tree1.txt", "w");
	fread(&mini_tree1, sizeof(MiniTree), 1, f);
	fclose(f);

	cout <<"mini_tree1.name = " << mini_tree1.name
		 << "mini_tree1.age = " << mini_tree1.age
	     << "mini_tree1.subtree = " << mini_tree1.age
		 << "&sub_tree1 = "      << &sub_tree1 
		 << "sub_tree1.value = " << sub_tree1.value << endl;

	*/


	/*
	
	MiniTree tree1;
	cout << "name " << endl;
	cin >> tree1.name;
	tree1.age = 15;
	
	FILE* f; 
	
	fopen_s(&f, "tree1.txt", "w");
	fwrite(&tree1, sizeof(MiniTree), 1, f);
	fclose(f);*/


	/*
	MiniTree tree2;
	
	FILE* f2;
	fopen_s(&f2, "tree1.txt", "r");
	fread(&tree2, sizeof(MiniTree), 1, f2);
	
	fclose(f2);

	cout << "name " << tree2.name << " age " << tree2.age << endl;
	
	*/



	srand(time(0));
//test_tree();
	
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
	cout << endl;
	
	delete arr;
	delete Qu;*/
		
	


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

