#include "Node.h"

template <typename DataType>
Node<DataType>::Node(const DataType& initialdata) : data(initialdata), next(nullptr)
{
	//data = initialdata;
	//next = nullptr;
}

template <typename DataType>
Node<DataType>* Node<DataType>::getNext() const
{
	return next;
}

template <typename DataType>
void Node<DataType>::setNext(const Node* newNext)
{
	next = newNext;
}

template <typename DataType>
DataType Node<DataType>::getData() const
{
	return data;
}

template <typename DataType>
void Node<DataType>::setData(const DataType& newData)
{
	data = newData;
}
