// Дано N-дерево. Найти поддеревья с максимальным и минимальным соотношением (высота / число листьев).
// *****************************************************************************************************

#include "Header.h"

int main()
{
	setlocale(LC_CTYPE, "rus");
	menu();
	int variant;
	std::cout << ">>";
	std::cin >> variant;
	if (variant == 1)
	{
		system("cls");
		Tree tree(true);
		tree.display();
		std::cout << "--------------------------------------------------- \n";
		tree.findRatios();
	}
	if (variant == 2)
	{
		system("cls");
		Tree tree(true);
		tree.saveToFile("file.txt");
	}
	if (variant == 3)
	{
		system("cls");
		Tree tree(false);
		tree.loadFromFile("file.txt");
		tree.display();
	}
	else
	{
		exit(0);
	}
	return 0;
}