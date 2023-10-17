## Задача

> Реализовать N-дерево и найти поддеревья с максимальным и минимальным соотношением (высота / число листьев).


## Краткое описание всех основных классов и функций, содержащихся в программе:
Класс "Tree" состоит из методов:
```C++
- Node* inputNode() - заполнение дерева
- void computeRatio(Node*, double&, double&) - вычисление соотношения для каждого поддерева
- int getHeight(Node*) - метод, который возвращает высоту поддерева
- int getLeaves(Node*) - метод, который возвращает количество листьев поддерева
- void displayTree(Node*, int) - вывод дерева
- Tree(bool) - конструткор с флагом в качестве параметра для определения считывания с клавиатуры
- void writeToFile(Node*, std::ofstream&) - запись дерева в файл
- Node* readFromFile(std::ifstream&) - чтение дерева из файла
- void saveToFile(const std::string&)
- void loadFromFile(const std::string&)

```
Структура "Node" состоит из полей:
```C++
- int data - значение узла
- int countChildren - количество дочерних элементов
- Node** children - двумерный массив
- Node(int value, int count) - конструктор с параметрами
```
Также реализовано меню: 
```C++
void menu()
{
	std::cout << "1. Ввести дерево с клавиатуры \n";
	std::cout << "2. Записать дерево в файл \n";
	std::cout << "3. Считать дерево из файла \n";
	std::cout << "4. Выход \n";
}
```
## Скриншоты работы программы:
<div align="center">
	<p> В качестве примера рассмотрим следующее дерево: </p>
	<img width="50%" src="images/example.jpg"><br>
	<p>Заполнение дерева: </p>
	<img width="40%" src="images/inputNodes.png"><br>
	<p>Вывод дерева и соотношения каждого поддерева: </p>
	<img width="40%" src="images/output.png">
</div>
