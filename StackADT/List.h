#include "Node.h"

template <typename DataType>
class List 
{
private:
	Node<DataType>* head;
public:
	List();
	~List(); 
	Add(DataType item);
	void Delete();
	int Search(DataType item);
	bool Clear();
	bool Destroy();
};