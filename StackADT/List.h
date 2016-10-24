// List.h
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
	// Pointer to the first node of the list.
	Node<DataType>* head;
	
	// Keeps track of the number of list items.
	int length;

public:
	List();				// Default constructor
	virtual ~List();	// Virtual destructor

	/**
	 * Adds an item into the beginning of the list.
	 * @param newItem The new <DataType> item to add.
	 * @returns True of successful, false if unsuccessful.
	 */
	bool addFirst(const DataType& newItem);

	/**
	 * Returns the list length.
	 */
	int getLength() const;
};

#include "List.cpp"
#endif

