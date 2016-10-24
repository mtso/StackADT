
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