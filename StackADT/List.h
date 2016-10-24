#include "Node.h"

template <typename DataType>
class List 
{
private:
	Node<DataType>* head;
	int length;
public:
	List();
	~List(); 
	bool isEmpty(int position);
	bool insert(int position, DataType itemn);
	bool remove(int position);
	Node<DataType> getItem(int position);
	void setItem(int position);
};