/**
 * Node Class
 * Single node object for use in lists.
 */

#ifndef STACKADT_NODE_H
#define STACKADT_NODE_H

template <typename DataType>
class Node
{
private:
	// The piece of data that this object holds
	DataType data;

	// Pointer to the next node in the list
	Node<DataType>* next;

public:
	// Only construct with data
	Node(const DataType& initialData); // : data(initialData), next(nullptr) {}

	/**
	 * @returns the next node in the list
	 */
	Node<DataType>* getNext() const;

	/**
	 * @param newNext the node to set as the next node in the list
	 */
	void setNext(const Node* newNext);

	/**
	 * @returns the data that this node holds.
	 */
	DataType getData() const { return data; }

	/**
	 * @param sets a new piece of data for this node to hold.
	 */
	void setData(const DataType& newData);
};

#include "Node.cpp"
#endif