#include "Tree.h"

void test_tree()
{
	cout << "test_tree()" << endl;
	Tree* tree1 = new Tree();
	for(int i=0; i<10; i++)
		tree1->Insert(rand()%10);
	cout << endl;
	tree1->Print();

	cout //<< tree1->GetMax1() << " "
		 //<< tree1->GetMax2() << " "
		 //<< tree1->GetMax3(tree1->root->left->right) << " "
		 << "summ = " << tree1->getSumm() << " "
		<< "Average  = " << tree1->getAverageSumm() << " "
		<< "count  = " << tree1->CountNode() << " "
		 << endl;

	
	delete tree1;
}
Node::Node() : left(nullptr), right(nullptr), parent(nullptr), value(0) { }
Node::Node(Node* parent, int value)
  : left(nullptr), right(nullptr), parent(parent), value(value) { }
Node::~Node()
{
	if (left) delete left;
	if (right) delete right;
	cout << "~Node() value:" << value << endl;
}
void Node::Print()
{
	cout << value << " left=";
	if (left)
		cout << left->value;
	else
		cout << "nullptr";
	cout << " right=";
	if (right)
		cout << right->value;
	else
		cout << "nullptr";
	cout << endl;
	if (left) left->Print();
	if (right) right->Print();
}
void Node::Add(int value)
{
	if (this->value > value)
	{
		if (left) // Если существует левая ветка
			left->Add(value);
		else // Иначе не существует левая ветка
			left = new Node(this, value);
	}
	else if (this->value < value)
	{
		if (right) // Если существует правая ветка
			right->Add(value); 
		else // Иначе не существует правая
			right = new Node(this, value);
	}
	else
	{
		//cout << "Node exists! (value:" << value << ")" << endl;
	}
}
bool Node::Delete(int value)
{
	return false;
}

Tree::Tree() : root(nullptr) { }
Tree::~Tree() { if (root) delete root; }
void Tree::Print()
{
	if (root)
		root->Print();
}
void Tree::Insert(int value)
{
	if (root)
		root->Add(value);
	else
		root = new Node(nullptr, value);
}
void Tree::Delete(int value)
{
	// Если есть корень древа
	if (root)
	{
		// Если пришла команда на удаление узла
		if (root->Delete(value) == true)
		{
			delete root; // удаляем его
			root = nullptr; // чистим ссылку на корень
		}
	}
}
// Функция возвращает максимальное значение
int Tree::GetMax1()
{
	Node* cur = root;
	// Если есть корневой узел
	if (root)
	{
		// До тех пор пока существует узел
		while (cur)
		{
			// Если у узла есть правый узел
			if (cur->right)
				// Текущим узелом становится правый узел 
				cur = cur->right;
			// Иначе у ущла нет правого узла
			else
				// Значит это узел с максимальным значением
				// Вернём значение этого узла
				return cur->value;
		}
	}
	// Иначе нет корневого узла
	else
	{
		return 0;
	}
}
int Tree::GetMax2()
{
	return GetMax2(root);
}
// Найдёт максимальное значение относительно входящего узла
int Tree::GetMax2(Node* p_node)
{
	if (p_node)
		if (p_node->right)
			return GetMax2(p_node->right);
		else
			return p_node->value;
	else
		return 0;
}
// Функция вернёт максимальное значение из древа по ЛЮБОМУ входящему узлу
int Tree::GetMax3(Node* p_node)
{
	// Если входящего элемента нет - вернём 0
	if (!p_node) return 0;
	Node* cur = p_node;
	// до тех пор, пока существует родительский узел
	while (cur->parent)
		cur = cur->parent;
	// В этом месте cur == root
	return GetMax2(cur);
}
int Tree::GetMin() { return 0; }
Node* Tree::GetPtrMax() { return nullptr; }
Node* Tree::GetPtrMin() { return nullptr; }
int Node::getSumm(bool summ)
{
	int sum_r = 0;
	int sum_l = 0;
	if (right) sum_r = right->getSumm(summ);
	if (left) sum_l = left->getSumm(summ);

	return sum_r + sum_l + (summ==true?value:1);
}
float Tree::getAverageSumm()
{
	if (root)
		return float (root->getSumm(true)) / root->getSumm(false);
	return 0;
}

int Tree::getSumm()
{
	if (root)
		return root->getSumm(true);
	return 0;
}


int Tree:: CountNode() 
{
	if (root)
		return root->getSumm(false);
	return 0;
};

void Tree::  Save_tree()
{

}


void Node::Save_Node()
{
	cout << value << " left=";
	if (left)


		cout << left->value;
	else
		cout << "nullptr";
	cout << " right=";
	if (right)
		cout << right->value;
	else
		cout << "nullptr";
	cout << endl;
	if (left) left->Print();
	if (right) right->Print();
}