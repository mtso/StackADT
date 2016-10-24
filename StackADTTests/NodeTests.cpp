#include "stdafx.h"
#include "CppUnitTest.h"
#include "Node.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackADTTests
{		
	TEST_CLASS(NodeTests)
	{
	public:
		
		// Tests the constructors
		TEST_METHOD(NodeConstructors)
		{
			Node<int> intNode = Node<int>();
			Assert::IsNull(intNode.getNext());

			Node<char>* charNodePtr = new Node<char>('A');
			Node<char> charNode = Node<char>('B', charNodePtr);
			Assert::AreEqual('B', charNode.getData());
			Assert::AreEqual('A', charNodePtr->getData());
		}

		TEST_METHOD(GetData)
		{
			Node<int> node = Node<int>(3);
			Assert::AreEqual(3, node.getData());

			std::string words("Don't drink the haterade.");
			Node<std::string> message = Node<std::string>(words);
			Assert::AreEqual(words, message.getData());
		}

		TEST_METHOD(SetData)
		{
			Node<int> node = Node<int>();
			node.setData(9);
			Assert::AreEqual(9, node.getData());

			node.setData(INT_MAX);
			Assert::AreEqual(INT_MAX, node.getData());

			node.setData(INT_MIN);
			Assert::AreEqual(INT_MIN, node.getData());
		}

		TEST_METHOD(SetNext)
		{
			Node<int>* intNodePtr = new Node<int>(9);
			Node<int> intNode = Node<int>(3);

			intNode.setNext(intNodePtr);
			Node<int>* intNodeNext = intNode.getNext();
			Assert::AreEqual(intNodePtr->getData(), intNodeNext->getData());
		}

		TEST_METHOD(GetNext)
		{
			Node<int>* intNodePtr = new Node<int>(-4);
			Node<int> intNode = Node<int>(4, intNodePtr);
			Node<int>* intNodeNext = intNode.getNext();
			Assert::AreEqual(-4, intNodeNext->getData());
		}

	};
}