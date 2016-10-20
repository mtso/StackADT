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
	Node<DataType>* next;

public:
	Node(DataType initialData);
	~Node();

	Node* getNext();
	void setNext(const Node* newNext);

	DataType getData();
	void setData(const DataType& newData);
};

#endif