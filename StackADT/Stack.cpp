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
bool Stack<DataType>::isEmpty()
{
	return List<DataType>::isEmpty();
}

template <typename DataType>
bool Stack<DataType>::push(const DataType& item)
{
	return addFirst(item);
}

#endif