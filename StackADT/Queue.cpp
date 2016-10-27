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
bool Queue<DataType>::enqueue(const DataType& item)
{
	return addFirst(item);
}

#endif