#include "Tree.h"

void test_tree()
{
	cout << "test tree" << endl;
	Tree* tree1 = new Tree();
	for (int i=0; i < 5; i++) 
	{
		tree1->Insert(rand() % 50);
	}
	
	tree1->Print();
	delete tree1;
}



Branch::Branch() :left(nullptr), right(nullptr), parent(nullptr), value(0) {};
Branch::Branch (Branch* _parent, int _value)  {
	left = nullptr; 
	right = nullptr; 
	parent = _parent;
	value = _value;


};
Branch:: ~Branch() 
{
	
	if (left) delete left;
	if (right) delete right;
	cout << "~Branch() value" << value << endl;

};


void Branch:: Add(int _value)
{

	if (this->value < _value)
	{
		if (left) // если существует левая ветка
		{
			left->Add(_value);
		}
		else 
		{
			left = new Branch (this, _value);
		}

	}
	else if (this->value > _value) 
	{
		if (right) right->Add(_value);
		else right = new Branch (this, _value);
	}
	else 
	{
		cout << "Node exist! (value" << value << ")" << endl;
	}

};
void Branch::print()
{
	cout << value<<" left=";
	if (left) cout << left->value;
	else
		cout << "nullpt ";
	    cout <<  " right=";
	if (right) cout << right->value;
	else
	cout << "nullptr ";
		
	cout << endl;
	if (left)left->print();
	if (right)right->print();

}
bool Branch::Delete(int value) 
{
	return false;
};




Tree::Tree() :root(nullptr) {};
Tree::~Tree() { if (root) delete root; };




void Tree:: Print()
{
	if (root)
		root->print();
}


void Tree::Insert(int value) 
{
	if (root) 
	{
		root->Add(value);
	}
	else 
	{
		root = new Branch(nullptr, value);
	}

}
void Tree::Delete(int value) 
{
	if (root)
	{
		// если пришла команда на удаление узла
		if (root->Delete(value) == true)
		{
			delete root;
			root = nullptr;
		}
	}
};