// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Stack.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{	
	Stack<int> numbers = Stack<int>();

	for (int i = 0; i <= 10; i++)
	{
		numbers.push(i);
	}

	for (int i = 0; i <= 10; i++)
	{
		cout << numbers.pop() << endl;
	}

	List<int>* list = new List<int>();
	list->addFirst(1);
	delete list;

	system("pause");
	return 0;
}