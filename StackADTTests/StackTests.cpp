#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackADTTests
{
	TEST_CLASS(StackTests)
	{
	public:

		// Create
		TEST_METHOD(StackConstructor)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// Destroy
		TEST_METHOD(StackDestructor)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// Push
		TEST_METHOD(Push)
		{
			Stack<int> stack;
			
			Assert::IsTrue(stack.isEmpty());
			stack.push(1);
			Assert::IsFalse(stack.isEmpty());
		}

		// Pop
		TEST_METHOD(Pop)
		{
			Stack<int> stack;
			stack.push(1);
			Assert::IsFalse(stack.isEmpty());
			stack.pop();
			Assert::IsTrue(stack.isEmpty());
		}

		// isEmpty
		TEST_METHOD(IsEmpty)
		{
			Stack<int> stack;

			Assert::IsTrue(stack.isEmpty());
			stack.push(1);
			Assert::IsFalse(stack.isEmpty());
		}

		// isEmpty
		TEST_METHOD(GetLength)
		{
			Stack<int> stack;

			Assert::AreEqual(0, stack.getLength());
			stack.push(1);
			Assert::AreEqual(1, stack.getLength());

			stack.pop();
			Assert::AreEqual(0, stack.getLength());

		}

	};
}