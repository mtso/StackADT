// Stack.h
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_NODE_H
#define STACKADT_NODE_H

/*
 * Stack Class
 * The Stack object provides Push and Pop functions.
 * The Class provides the boolean function isEmpty.
 */

#include "List.h"

template <typename DataType>
class Stack : protected List
{
public:
	bool DataType Push();
};

#include "Stack.cpp"
#endif