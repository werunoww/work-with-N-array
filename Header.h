#pragma once
#include <iostream>
#include <fstream>
//-------------------------
//Структура для описания узла дерева
struct Node {
	int data;				//значение узла
	int countChildren;		//количество дочерних элементов
	Node** children;		
	//Конструктор с параметрами
	Node(int value, int count) : data(value), countChildren(count) 
	{
		if (count > 0)						
		{
			children = new Node*[count];
		}
		else
		{
			children = nullptr;
		}
	}
};

//-------------------------
//Класс для описания дерева
class Tree {
private:
	Node* root;				
	//прототип метода inputNode
	Node* inputNode();		
	//прототип метода computeRatio
	void computeRatio(Node*, double&, double&);
	//прототип метода getHeight для получения высоты дерева
	int getHeight(Node*);
	//прототип метода getLeaves для получения количества листьев
	int getLeaves(Node*);
	//прототип метода вывода дерева на экран
	void displayTree(Node*, int);
	//прототип метода для записи дерева в файл
	void writeToFile(Node*, std::ofstream&);
	//прототип метода для чтения из файла
	Node* readFromFile(std::ifstream&);
public:
	//конструктор
	Tree(bool);
	//прототип внешней функции для вывода дерева
	void display();
	//прототип функции для нахождения отношения
	void findRatios();
	//прототип метода для сохранения дерева в файл
	void saveToFile(const std::string&);
	//прототип метода для выгрузки дерева из файла
	void loadFromFile(const std::string&);
};

//-------------------------
//прототип функции для меню 
void menu();
