#include <iostream>
using namespace std;

#include <list>
#include <stack>
#include <queue>

#include "Object.h"
#include "Sphere.h"
#include "Number.h"
#include "Figure.h"
#include "Square.h"
#include "Circle.h"
#include "Triangle.h"
#include "Collection.h"
#include "MyStack.h"
#include "ArrayReader.h"
#include "UserInput.h"
#include "StringParser.h"
#include "MyStack.h"

void Lab1();
void Lab2();
void Lab3();
void Lab4();
void Lab5();
void Lab6();
void Lab7();
void Lab8();

int main() {
	bool isRunning = true;
	int choice = 0;

	do
	{
		system("cls");
		cout << "1. Lab1" << endl;
		cout << "2. Lab2" << endl;
		cout << "3. Lab3" << endl;
		cout << "4. Lab4" << endl;
		cout << "5. Lab5" << endl;
		cout << "6. Lab6" << endl;
		cout << "7. Lab7" << endl;
		cout << "8. Lab8" << endl;
		cout << endl;
		cout << "0. Exit" << endl;
		cout << "Your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 0:
			isRunning = false;
			break;
		case 1:
			Lab1();
			break;
		case 2:
			Lab2();
			break;
		case 3:
			Lab3();
			break;
		case 4:
			Lab4();
			break;
		case 5:
			Lab5();
			break;
		case 6:
			Lab6();
			break;
		case 7:
			Lab7();
			break;
		case 8:
			Lab8();
			break;
		}
	} while (isRunning);

	return 0;
}

void Lab1()
{
	system("cls");
	Object obj("Boll", "Green", 5, 5);
	obj.Output();
	cout << endl;
	obj.Input();
	cout << endl;
	obj.Output();
	cout << endl;
	obj.setName("X");
	cout << "Name: " << obj.getName() << endl;
	system("pause");
}

void Lab2()
{
	system("cls");
	Object obj("Object", "White", 55, 33);
	Sphere sphere("Sphere", "Green", 5, 55, 25);
	obj.Output();
	cout << endl;
	sphere.Output();
	sphere.setRadius(999);
	cout << endl;
	sphere.Output();
	system("pause");
}

void Lab3()
{
	system("cls");
	Number num1 = 5;
	Number num2 = 10;

	cout << "num1 + num2 = " << num1 << " + " << num2 << " = " << num1 + num2 << endl;
	cout << "num1 - num2 = " << num1 << " - " << num2 << " = " << num1 - num2 << endl;
	cout << "num1 * num2 = " << num1 << " * " << num2 << " = " << num1 * num2 << endl;
	cout << "num1 / num2 = " << num1 << " / " << num2 << " = " << num1 / num2 << endl;

	cout << endl;

	cout << "num1++ = " << num1++ << endl;
	cout << "num2-- = " << num2-- << endl;

	cout << endl;

	cout << "++num1 = " << ++num1 << endl;
	cout << "--num2 = " << --num2 << endl;

	cout << endl;

	cout << "(num1 == num2) ==> (" << num1 << " == " << num2 << ") ==> " << (num1 == num2) << endl;
	cout << "(num1 >= num2) ==> (" << num1 << " >= " << num2 << ") ==> " << (num1 >= num2) << endl;
	cout << "(num1 <= num2) ==> (" << num1 << " <= " << num2 << ") ==> " << (num1 <= num2) << endl;

	cout << endl;

	Number num3 = 0;
	cout << "Num3 = " << num3 << endl;
	num3 = 5;
	cout << "(5) Num3 = " << num3 << endl;

	system("pause");
}

void Lab4()
{
	system("cls");

	Square square;
	square.setPosition(5, 5);
	square.setScale(2, 2);

	cout << "Position: "	<< square.getPositionX()	<< " " << square.getPositionY() << endl;
	cout << "Scale: "		<< square.getScaleX()		<< " " << square.getScaleY()	<< endl;
	cout << "Square Area: " << square.FindArea()		<< endl;

	cout << endl;

	Circle circle(5);
	circle.setPosition(3, 3);
	circle.setScale(10, 10);

	cout << "Position: "	<< circle.getPositionX()	<< " " << circle.getPositionY() << endl;
	cout << "Scale: "		<< circle.getScaleX()		<< " " << circle.getScaleY()	<< endl;
	cout << "Radius: "		<< circle.getRadius()		<< endl;
	cout << "Circle Area: " << circle.FindArea()		<< endl;

	cout << endl;

	Triangle triangle(5, 10);
	triangle.setPosition(10, 10);
	triangle.setScale(7, 7);

	cout << "Position: "	<< triangle.getPositionX()	<< " " << triangle.getPositionY() << endl;
	cout << "Scale: "		<< triangle.getScaleX()		<< " " << triangle.getScaleY()	<< endl;
	cout << "Bottom: "		<< triangle.getBottom()		<< endl;
	cout << "H: "			<< triangle.getH()			<< endl;
	cout << "Triangle Area: " << triangle.FindArea()	<< endl; 

	AddFigure(getFigures(), square);
	AddFigure(getFigures(), circle);
	AddFigure(getFigures(), triangle);

	cout << endl;

	PrintFigures(getFigures());

	system("pause");
}

void Lab5() {
	system("cls");

	Collection<int> collection;
	collection.push_back(5);
	collection.push_back(10);
	collection.push_back(15);

	cout << "collection.length() => " << collection.getLength() << endl;
	cout << endl;

	collection.print();

	collection.erase(5);

	cout << endl;
	cout << "collecttion.erase(5) => \n";

	collection.print();

	collection.eraseByIndex(0);

	cout << endl;
	cout << "collecttion.eraseByIndex(0) => \n";

	collection.print();

	system("pause");
}

void Lab6() {
	system("cls");

	std::list<int> m_list = { 1, 2, 3, 4, 5 };

	std::stack<int> m_stack;
	m_stack.push(10);
	m_stack.push(11);
	m_stack.push(12);
	m_stack.push(13);
	m_stack.push(14);
	m_stack.push(15);

	std::queue<int> m_queue;
	m_queue.push(20);
	m_queue.push(21);
	m_queue.push(22);
	m_queue.push(23);
	m_queue.push(24);
	m_queue.push(25);

	MyStack<int> mystack;

	mystack = MyStack<int>::CreateListFrom(m_list);
	mystack = MyStack<int>::CreateStackFrom(m_stack);
	mystack = MyStack<int>::CreateQueueFrom(m_queue);
	
	mystack.PrintList();
	mystack.PrintStack();
	mystack.PrintQueue();

	system("pause");
}

void Lab7() {
	system("cls");

	Number num1 = 5;
	Number num2 = 10;

	ArrayReader<Number> container;

	container.push_back(num1);
	container.push_back(num2);

	cout << "Container: " << container << endl;
	container.WriteToFile();

	system("pause");
}

void Lab8() {
	/*UserInput::GetInput("1+2");
	char* a = UserInput::GetExample();
	cout << a << endl;*/
	/*StringHandler::GetFromUserInput(UserInput::getExample());
	StringHandler::Print();*/
}