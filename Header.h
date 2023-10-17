#pragma once
#include <iostream>
#include <fstream>
//-------------------------
//��������� ��� �������� ���� ������
struct Node {
	int data;				//�������� ����
	int countChildren;		//���������� �������� ���������
	Node** children;		
	//����������� � �����������
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
//����� ��� �������� ������
class Tree {
private:
	Node* root;				
	//�������� ������ inputNode
	Node* inputNode();		
	//�������� ������ computeRatio
	void computeRatio(Node*, double&, double&);
	//�������� ������ getHeight ��� ��������� ������ ������
	int getHeight(Node*);
	//�������� ������ getLeaves ��� ��������� ���������� �������
	int getLeaves(Node*);
	//�������� ������ ������ ������ �� �����
	void displayTree(Node*, int);
	//�������� ������ ��� ������ ������ � ����
	void writeToFile(Node*, std::ofstream&);
	//�������� ������ ��� ������ �� �����
	Node* readFromFile(std::ifstream&);
public:
	//�����������
	Tree(bool);
	//�������� ������� ������� ��� ������ ������
	void display();
	//�������� ������� ��� ���������� ���������
	void findRatios();
	//�������� ������ ��� ���������� ������ � ����
	void saveToFile(const std::string&);
	//�������� ������ ��� �������� ������ �� �����
	void loadFromFile(const std::string&);
};

//-------------------------
//�������� ������� ��� ���� 
void menu();
