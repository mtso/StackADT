// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "List.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
	List<string> coolshit;

	coolshit.addFirst("Cambodia");
	coolshit.addFirst("Solar Panels");
	coolshit.addFirst("DC Comics");
	coolshit.addFirst("Reagonimics");

	cout << "CoolShit has " << coolshit.getLength() << " items" << endl;
	coolshit.printList();

	coolshit.remove("DC Comics");

	cout << "CoolShit has " << coolshit.getLength() << " items" << endl;
	coolshit.printList();

	system("pause");
	return 0;
}