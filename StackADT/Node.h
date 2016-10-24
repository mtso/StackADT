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
	// Default constructor
	Node();

	// Construct with data
	Node(const DataType& initialData);

	// Construct with data and next node
	Node(const DataType& initialData, Node<DataType>* nextNode);

	/**
	 * @returns the next node in the list
	 */
	Node<DataType>* getNext() const;

	/**
	 * @param newNext the node to set as the next node in the list
	 */
	void setNext(Node* newNext);

	/**
	 * @returns the data that this node holds.
	 */
	DataType getData() const;

	/**
	 * @param sets a new piece of data for this node to hold.
	 */
	void setData(const DataType& newData);
};

#include "Node.cpp"
#endif