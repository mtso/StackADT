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
		Node<DataType>* newNode = new Node<DataType>(newItem, head->getNext());
		head->setNext(newNode);
		length++;
		return true;
	}	
}

template <typename DataType>
bool List<DataType>::remove(const DataType& toRemove)
{
	if (isEmpty())
	{
		return false;
	}

	Node<DataType>* currentSearch = head;
	Node<DataType>* previousSearch = head;

	do
	{
		if (currentSearch->getData() == toRemove)
		{
			Node<DataType>* nodeToRemove = currentSearch;
			previousSearch->setNext(currentSearch->getNext());
			nodeToRemove->setNext(nullptr);
			delete nodeToRemove;
			nodeToRemove = nullptr;
			length--;
			return true;
		}
		else
		{
			previousSearch = currentSearch;
			currentSearch = currentSearch->getNext();
		}
	} 
	while (currentSearch != nullptr);
	
	return false;
}

//template <typename DataType>
//List::Add(DataType item)
//{
//	if (head == nullptr)
//	{
//		Node<DataType>* newItem = Node<DataType>(item);
//		head = newItem;
//		tail = newItem;
//		newItem->setNext(nullptr);
//	}
//
//	// Problem, get current node to point to new node.
//	else
//	{
//		Node<DataType>* newItem = Node<DataType>(item);
//		// no
//		tail = newItem;
//		newItem->setNext(nullptr);
//	}
//}

#endif