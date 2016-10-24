// Node.h
// Lab 2: Stack ADT
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef STACKADT_NODE_H
#define STACKADT_NODE_H

/**
 * Node Class
 * The node object contains two attributes: the data item and a pointer to the next node.
 * The class provides accessors and modifiers for both attributes.
 */
template <typename DataType>
class Node
{
private:
	// The piece of data that this object holds
	DataType data;

	// Pointer to the next node in the list
	Node<DataType>* next;

public:
	/**
	 * Default constructor
	 * Initialized with a garbage value for data
	 * and `nullptr` for next
	 */
	Node();

	/**
	 * Construct with data
	 * @param initialData
	 */
	Node(const DataType& initialData);

	/** 
	 * Construct with data and next node
	 * @param initialData
	 * @param nextNode the next node in the list
	 */
	Node(const DataType& initialData, Node<DataType>* nextNode);

	// @returns the next node in the list
	Node<DataType>* getNext() const;

	// @param newNext the node to set as the next node in the list
	void setNext(Node* newNext);

	// @returns the data that this node holds.
	DataType getData() const;

	// @param sets a new piece of data for this node to hold.
	void setData(const DataType& newData);
};

#include "Node.cpp"
#endif