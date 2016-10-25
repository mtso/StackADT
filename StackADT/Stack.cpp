// Stack.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_STACK_CPP
#define STACKADT_STACK_CPP

#include "Stack.h"

template <typename DataType>
bool Stack<DataType>::push(const DataType& item)
{
	addFirst(item);
}

#endif