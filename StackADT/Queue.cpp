// Queue.cpp
// Lab 2b: Queue ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_QUEUE_CPP
#define STACKADT_QUEUE_CPP

#include "Queue.h"

T_DATA
Queue<DataType>::~Queue()
{
	util::log("~Queue called");
	// ~List should be synthesized after this.
}

T_DATA
bool Queue<DataType>::isEmpty() 
{
	return List<DataType>::isEmpty();
}

T_DATA
<<<<<<< HEAD
bool Queue<DataType>::enqueue(const DataType& item)
{
	return addFirst(item);
}

T_DATA
DataType Queue<DataType>::dequeue()
{
	DataType returnItem = tail->getData();
	removeLast();
	return returnItem;
=======
bool enqueue(const DataType& item)
{
	return List<DataType>::addLast(item);
>>>>>>> 42305917b0f65c7cfb947506eabbc4362e155a5b
}

#endif