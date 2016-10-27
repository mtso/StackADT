#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"
#include "Currency.h"
#include <vector>
#include <fstream>
#include <iostream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace StackADTTests
{
	TEST_CLASS(StackTests)
	{
	public:

		TEST_METHOD(CurrencyStack)
		{
			Currency* balance = new Dollar(10, 150);
			delete balance;
			Assert::Fail();
		}

		// Makes sure the stack destructor was called
		// by reading the log file from the end.
		TEST_METHOD(StackDestructor)
		{
			Stack<int>* stack = new Stack<int>();
			stack->push(1);
			delete stack;

			ifstream log("stackadt_log.txt");
			if (log.is_open())
			{
				vector<string> reversedLog;
				string line;

				while (getline(log, line))
				{
					reversedLog.insert(reversedLog.begin(), line);
				}

				string listLog = util::removeTimestamp(reversedLog[0]);
				string stackLog = util::removeTimestamp(reversedLog[1]);

				Assert::AreEqual(string("~List called"), listLog);
				Assert::AreEqual(string("~Stack called"), stackLog);
			}
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

        
		/*TEST_METHOD(LotsOfInts)
		{
			Stack<int> stack;

			for (int i = 0; i < 1000000; i++)
			{
				Assert::AreEqual(i, stack.getLength());
				stack.push(i);
				Assert::AreEqual(i + 1, stack.getLength());
			}
		}*/
        
	};
}