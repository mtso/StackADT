// Main.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#include "Queue.h"
#include <iostream>
#include <string>
#include "Currency.h"

template <typename T>
void queueDemo(const T& item);

using namespace std;

int main()
{
	// Queue Demo

	queueDemo(5);
	string str = "five";
	queueDemo(str);
	queueDemo(Dollar(5, 00));

	// Quick-sketch Queue Test
	
	cout << "The following is the queue test" << endl;
	Queue<int> iqueue;
	cout << "enqueue" << endl;
	iqueue.enqueue(45);
	cout << "enqueue" << endl;
	iqueue.enqueue(98);
	cout << "dequeue" << endl;
	cout << iqueue.dequeue() << endl;
	cout << "dequeue" << endl;
	cout << iqueue.dequeue() << endl;
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
		demo.enqueue(item);
	}

	int length = demo.getLength();
	for (int j = 0; j < length; j++)
	{
		cout << demo.dequeue() << endl;
	}

	if (demo.isEmpty())
	{
		cout << "Queue of " << item << " is now empty." << endl;
	}
}