// Node.h
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_LIST_H
#define STACKADT_LIST_H

#include "Node.h"

/**
 * Linked List implementation of Bag ADT
 *
 */
template <typename DataType>
class List 
{
private:
	Node<DataType>* head;
	Node<DataType>* tail;
public:
	List();
	~List(); 
	Add(DataType item);
	int Delete();
	int Search(DataType item);
	bool Clear();
	bool Destroy();
};


//#include "List.cpp"
#endif

