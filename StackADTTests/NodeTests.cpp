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
		
		TEST_METHOD(NodeConstructor)
		{
			Node<int> intNode = Node<int>(4);

			Assert::AreEqual(4, intNode.getData());
		}

		TEST_METHOD(NodeDestructor)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		TEST_METHOD(SetData)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		TEST_METHOD(GetData)
		{
			std::string words("Don't drink the haterade.");
			Node<std::string> message = Node<std::string>(words);
			Assert::AreEqual(words, message.getData());
		}

		TEST_METHOD(SetNext)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		TEST_METHOD(GetNext)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

	};
}