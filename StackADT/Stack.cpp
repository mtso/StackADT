// Stack.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_STACK_CPP
#define STACKADT_STACK_CPP

#include "Stack.h"

template <typename DataType>
Stack<DataType>::~Stack()
{
	// Do we need to explicitly call?

	ofstream logFile;
	time_t now = time(0);

	logFile.open("stackadt_log.txt", ios::app);
	logFile << now << ": ~Stack called" << endl;
	logFile.close();

	cout << "~Stack called" << endl;
}

template <typename DataType>
bool Stack<DataType>::isEmpty() const
{
	// Return superclass's isEmpty function.
	return List<DataType>::isEmpty();
}

template <typename DataType>
int Stack<DataType>::getLength() const
{
	// Return superclass's getLength function.
	return List<DataType>::getLength();
}

template <typename DataType>
void Stack<DataType>::clear()
{
	List<DataType>::clear();
}

template <typename DataType>
bool Stack<DataType>::push(const DataType& item)
{
	return addFirst(item);
}

template <typename DataType>
DataType Stack<DataType>::pop()
{
	DataType value = head->getData();
	List<DataType>::removeFirst();
	return value;
}

#endif