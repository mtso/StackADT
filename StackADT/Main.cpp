// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Stack.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{	
	Stack<int>* stack = new Stack<int>();
	stack->push(1);
	delete stack;

	List<int>* list = new List<int>();
	list->addFirst(1);
	delete list;

	system("pause");
	return 0;
}