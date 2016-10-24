// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "List.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	List<int> list = List<int>();
	list.addFirst(2);
	list.remove(1);
	return 0;
}