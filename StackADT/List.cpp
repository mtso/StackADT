// List.cpp
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_LIST_CPP
#define STACKADT_LIST_CPP

#include "List.h"

template <typename DataType>
List<DataType>::List()
	: head( nullptr )
	, length( 0 )
{
}

template <typename DataType>
List<DataType>::~List()
{
}

template <typename DataType>
int List<DataType>::getLength() const
{
	return length;
}

template <typename DataType>
bool List<DataType>::isEmpty() const
{
	return length == 0;
}

template <typename DataType>
bool List<DataType>::contains(const DataType& item) const
{
	return getPointerTo(item) != nullptr;
}

template <typename DataType>
bool List<DataType>::addFirst(const DataType& newItem)
{
	if (length == 0)
	{
		head = new Node<DataType>(newItem);
		length++;
		return true;
	}
	else
	{
		Node<DataType>* newNode = new Node<DataType>(newItem, head);
		head = newNode;
		length++;
		return true;
	}	
}

template <typename DataType>
Node<DataType>* List<DataType>::getPointerTo(const DataType& item) const
{
	Node<DataType>* search = head;
	while (search != nullptr)
	{
		if (item == search->getData())
		{
			return search;
		}
		else
		{
			search = search->getNext();
		}
	}
	return search;
}

template <typename DataType>
bool List<DataType>::remove(const DataType& toRemove)
{
	Node<DataType>* itemPointer = getPointerTo(toRemove);
	bool shouldRemoveItem = !isEmpty() && itemPointer != nullptr;

	if (shouldRemoveItem)
	{
		itemPointer->setData(head->getData());

		Node<DataType>* toRemovePointer = head;
		head = head->getNext();

		toRemovePointer->setNext(nullptr);
		delete toRemovePointer;
		toRemovePointer = nullptr;

		length--;
	}

	return shouldRemoveItem;
}

#include <iostream>

template <typename DataType>
void List<DataType>::printList() const
{
	using namespace std;

	if (!isEmpty()) {
		cout << head->getData() << endl;
		Node<DataType>* nextNode = head->getNext();
		while (nextNode != nullptr)
		{
			cout << nextNode->getData() << endl;
			nextNode = nextNode->getNext();
		} 
	}
	else {
		cout << "Empty List" << endl;
	}
}

#endif