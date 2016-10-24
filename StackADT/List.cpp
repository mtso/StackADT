#include "List.h"
#include "Node.h"

template <typename DataType>
List::List()
	: head( nullptr )
{
}

template <typename DataType>
List::Add(DataType item)
{
	if (head == nullptr)
	{
		Node<DataType>* newItem = Node<DataType>(item);
		head = newItem;
		tail = newItem;
		newItem->setNext(nullptr);
	}

	// Problem, get current node to point to new node.
	else
	{
		Node<DataType>* newItem = Node<DataType>(item);
		// no
		tail = newItem;
		newItem->setNext(nullptr);
	}
}