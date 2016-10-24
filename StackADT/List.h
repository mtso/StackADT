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
	int length;
public:
	List();
	~List(); 
	bool isEmpty(int position);
	bool insert(int position, DataType item);
	bool remove(int position);
	Node<DataType> getItem(int position);
	void setItem(int position);

	// TODO: add clear
	void clear();
};

//#include "List.cpp"
#endif