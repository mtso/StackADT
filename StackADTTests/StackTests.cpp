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

			/*Assert::IsTrue(1, stack.getLength());*/
		}

		// Pop
		TEST_METHOD(Pop)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// isEmpty
		TEST_METHOD(IsEmpty)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

	};
}