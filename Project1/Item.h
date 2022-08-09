
#ifndef __ITEM_H__
#define __ITEM_H__

#include <iostream>
using namespace std;

typedef unsigned long int DOCUMENT_ID;
typedef std::string       DOCUMENT_NAME;
typedef std::string       DOCUMENT_DATE;
typedef std::string       DOCUMENT_BODY;

typedef std::string       REFBOOK_NAME;

template<class T>
struct SubItem
{
	T value;

	SubItem()
	{

	}
	void setValue(T value)
	{
		this->value = value;
	}
	T getValue()
	{
		return value;
	}
};

struct Document
{
	SubItem<DOCUMENT_ID>   doc_id;
	SubItem<DOCUMENT_NAME> doc_name;
	SubItem<DOCUMENT_DATE> doc_date;
	SubItem<DOCUMENT_BODY> doc_body;

	Document(DOCUMENT_ID   doc_id,
		DOCUMENT_NAME doc_name,
		DOCUMENT_DATE doc_date,
		DOCUMENT_BODY doc_body)
	{
		this->doc_id.setValue(doc_id);
		this->doc_name.setValue(doc_name);
		this->doc_date.setValue(doc_date);
		this->doc_body.setValue(doc_body);
	}
};

class Item
{
private:
	std::string name;
	//SubItem<>
public:
	Item* next;
	Item* prev;
	Item();
	Item(std::string name);
	~Item();
	void print();
};

#endif