// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Node.h"
#include <iostream>
#include <string>
using namespace std;
int main()
{
	Node<int> paper(1000);
	Node<string> message("Don't drink the haterade.");

	cout << paper.getData() << endl;
	cout << message.getData() << endl;

	system("pause");
	return 0;
}