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
bool Stack<DataType>::push(const DataType& item)
{
	return addFirst(item);
}

template <typename DataType>
bool Stack<DataType>::pop()
{
	return removeFirst();
}

#endif