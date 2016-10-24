#include "List.h"
#include "Node.h"

template <typename DataType>
List::List()
	: head{ nullptr },
	length{ 0 }
{
}

template <typename DataType>
List::~List()
{
}

template <typename DataType>
bool List::isEmpty() const
{
	(head == nullptr) ? true : false;
}

template <typename DataType>
bool List::insert(int position, int DataType item)
{

}