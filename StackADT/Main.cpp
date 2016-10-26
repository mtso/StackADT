// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Stack.h"
#include "Currency.h"
#include <iostream>
#include <string>

template <typename T>
void stackTest(T data);

using namespace std;

int main()
{	

	stackTest(45);
	stackTest("California");
	stackTest(1.45);

	//Currency dollar(10, 50);
	//stackTest(dollar);
	system("pause");
	return 0;
}

template <typename T>
void stackTest(T data)
{
	Stack<T> theStack = Stack<T>();

	for (int i = 0; i <= 5; i++)
	{
		theStack.push(data);
	}

	for (int i = 0; i <= 5; i++)
	{
		cout << theStack.pop() << endl;
	}

	cout << "Empty? " << boolalpha << theStack.isEmpty() << endl;
}