#include "Node.h"

template <typename DataType>
Node<DataType>::Node(DataType initialData) 
{
	data = initialData;
}
template <typename DataType>
Node<DataType>::~Node()
{
}

template <typename DataType>
Node<DataType>* Node<DataType>::getNext()
{
	return next;
}

template <typename DataType>
void Node<DataType>::setNext(const Node* newNext)
{
	next = newNext;
}

template <typename DataType>
DataType Node<DataType>::getData()
{
	return data;
}

template <typename DataType>
void Node<DataType>::setData(const DataType& newData)
{
	data = newData;
}
