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
	clear();
	
	ofstream logFile;
	time_t now = time(0);
	
	logFile.open("stackadt_log.txt", ios::app);
	logFile << now << ": ~List called" << endl;
	logFile.close();

	cout << "List destructor called" << endl;
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
	// TODO: What happens if no new node could be allocated memory?
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

template <typename DataType>
bool List<DataType>::removeFirst()
{
	if (!isEmpty())
	{
		Node<DataType>* toRemovePointer = head;
		head = head->getNext();
		toRemovePointer->setNext(nullptr);
		delete toRemovePointer;
		toRemovePointer = nullptr;
		length--;
		return true;
	}
	else
	{
		return false;
	}
}

template <typename DataType>
void List<DataType>::clear()
{
	while (!isEmpty())
	{
		removeFirst();
	}
}

template <typename DataType>
void List<DataType>::printList() const
{
	printListTo(cout);
}

template <typename DataType>
void List<DataType>::printListTo(ostream& out) const
{
	if (!isEmpty()) {
		out << head->getData() << endl;
		Node<DataType>* nextNode = head->getNext();
		while (nextNode != nullptr)
		{
			out << nextNode->getData() << endl;
			nextNode = nextNode->getNext();
		}
	}
	else {
		out << "Empty List" << endl;
	}
}

#endif