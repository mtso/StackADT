#include "stdafx.h"
#include "CppUnitTest.h"
#include "Stack.h"
#include "Currency.h"
#include <vector>
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace StackADTTests
{
	TEST_CLASS(StackTests)
	{
	public:

		// Test the use of a Currency object in a Stack
		TEST_METHOD(CurrencyStack)
		{
			Stack<Currency*> balances;
			balances.push(new Dollar(10, 160));       // Should normalize to $11.60
			balances.push(new Dollar(10, 50));
			balances.push(new Yen(10, 150));          // base 1000 should not normalize

			Currency* yen = balances.pop();
			Currency* dollar1 = balances.pop();
			Currency* dollar2 = balances.pop();

			Assert::AreEqual(10, yen->getFull());
			Assert::AreEqual(10, dollar1->getFull());
			Assert::AreEqual(11, dollar2->getFull()); // Should equal 11 after normalized initialization

			*dollar1 = *dollar1 + *dollar2;           // $10.50 + $11.60 = $22.10

			Assert::AreEqual(22, dollar1->getFull()); // Should equal 22

			delete yen;
			delete dollar1;
			delete dollar2;
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

			Stack<string> strStack;
			strStack.push("two");
			string poppedString = strStack.pop();
			Assert::AreEqual<string>("two", poppedString);
		}

		// isEmpty
		TEST_METHOD(IsEmpty)
		{
			Stack<int> stack;

			Assert::IsTrue(stack.isEmpty());
			stack.push(1);
			Assert::IsFalse(stack.isEmpty());
		}

		// getLength
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