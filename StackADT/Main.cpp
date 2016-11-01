// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Stack.h"
#include "Queue.h"
#include "Currency.h"
#include <iostream>
#include <string>

template <typename T>
void queueDemo(const T& item);

using namespace std;

int main()
{
	queueDemo(2);

	// Queue Test
	cout << "The following is the queue test" << endl;
	Queue<int> iqueue;
	cout << "enqueue" << endl;
	iqueue.enqueue(45);
	iqueue.enqueue(98);
	cout << iqueue.dequeue() << endl;
	cout << iqueue.dequeue() << endl;
	cout << "dequeue" << endl;
	cout << "Empty? " << boolalpha << iqueue.isEmpty() << endl;

	system("pause");
	return 0;
}

template <typename T>
void queueDemo(const T& item)
{
	Queue<T> demo;

	for (int i = 0; i < 5; i++)
	{
		demo.enqueue(i);
	}

	for (int j = 0; j < demo.getLength(); j++)
	{
		cout << demo.dequeue() << endl;
	}

	if (demo.isEmpty())
	{
		cout << "Queue is now empty." << endl;
	}
}