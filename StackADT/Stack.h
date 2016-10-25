// Stack.h
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_STACK_H
#define STACKADT_STACK_H

/*
 * Stack Class
 * The Stack object provides Push and Pop functions.
 * The Class provides the boolean function isEmpty.
 */

#include "List.h"

template <typename DataType>
class Stack : protected List<DataType>
{
public:
	~Stack(); // Destructor

	/**
	 * Exposes lists's isEmpty
	 */
	bool isEmpty();

	/**
	 * Push adds an item to the top of the stack.
	 */
	bool push(const DataType& item);
};

#include "Stack.cpp"
#endif