#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"
#include "Currency.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackADTTests
{
	TEST_CLASS(StackTests)
	{
	public:

		TEST_METHOD(CurrencyStack)
		{
			Currency* balance = new Dollar(10, 150);
			delete balance;
		}

		// Destroy
		TEST_METHOD(StackDestructor)
		{
			// TODO: Make sure stack destructor is called.
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
			int poppedValue = stack.pop();
			Assert::IsTrue(stack.isEmpty());
			Assert::AreEqual(1, poppedValue);
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

        /*
		TEST_METHOD(LotsOfInts)
		{
			Stack<int> stack;

			for (int i = 0; i < 1000000; i++)
			{
				Assert::AreEqual(i, stack.getLength());
				stack.push(i);
				Assert::AreEqual(i + 1, stack.getLength());
			}
		}
        */
	};
}