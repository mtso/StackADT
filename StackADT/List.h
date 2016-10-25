// List.h
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_LIST_H
#define STACKADT_LIST_H

#include "Node.h"
#include <iostream>

using namespace std;

/**
 * Linked List implementation of Bag ADT
 * 
 */
template <typename DataType>
class List 
{
protected:
	// Pointer to the first node of the list.
	Node<DataType>* head;
	
	// Keeps track of the number of list items.
	int length;

	/**
	 * Returns the pointer to an item
	 */
	Node<DataType>* getPointerTo(const DataType& item) const;

public:
	List();				// Default constructor
	virtual ~List();	// Virtual destructor

	/**
	 * Returns the list length.
	 */
	int getLength() const;

	/**
	 * Returns whether the list is empty or not.
	 * @returns True if the list is empty, false if not.
	 */
	bool isEmpty() const;

	/**
	 * Returns true if the list contains the data item
	 */
	bool contains(const DataType& item) const;

	/**
	 * Adds an item into the beginning of the list.
	 * @param newItem The new <DataType> item to add.
	 * @returns True if successful, false if unsuccessful.
	 */
	bool addFirst(const DataType& newItem);

	/**
	 * Removes an item from the list
	 */
	bool remove(const DataType& toRemove);

	/**
	 * Removes all the items from the list
	 */
	void clear();

	/*
	Print out contenst of list
	*/
	void printList() const;

	/**
	 * Print contents of list into an output stream.
	 * Used for testing.
	 */
	void printListTo(ostream& out) const;
};

#include "List.cpp"
#endif

