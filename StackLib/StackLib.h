
#ifndef STACKLIB
#define STACKLIB

#include "List.h"

namespace StackLib
{
	template <typename DataType>
	class Stack : protected List<DataType>
	{
	public:
		~Stack(); // Destructor

		/**
		* Exposes lists's isEmpty
		*/
		bool isEmpty() const;

		/**
		* Returns the number of items in the stack.
		*/
		int getLength() const;

		/**
		* Expose clear
		*/
		void clear();

		/**
		* Push adds an item to the top of the stack.
		*/
		bool push(const DataType& item);

		/**
		* Pop removes the first item from the stack.
		*/
		DataType pop();

		/**
		 * Returns the top node's data without removing the node
		 */
		DataType peek();
	};
}

#endif