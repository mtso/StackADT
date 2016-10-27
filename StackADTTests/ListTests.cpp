#include "stdafx.h"
#include "CppUnitTest.h"
#include "List.h"
#include <iostream>
#include <string>
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace StackADTTests
{
	TEST_CLASS(ListTests)
	{
	public:

		// Create
		TEST_METHOD(ListConstructor)
		{
			List<int> list = List<int>();
			Assert::AreEqual(0, list.getLength());
			Assert::IsTrue(list.isEmpty());

			List<string> coolshit;
			stringstream testStream;

			coolshit.addFirst("Cambodia");
			coolshit.printListTo(testStream);

			string actual = testStream.str();
			string expected = "Cambodia\n";
			Assert::AreEqual(expected, actual);
		}

		// Makes sure the destructor was called
		// by reading the log file from the end.
		TEST_METHOD(ListDestructor)
		{
			List<int>* list = new List<int>();
			list->addFirst(1);
			delete list;

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

				Assert::AreEqual(string("~List called"), listLog);
			}
		}

		// Add (an item to top of list)
		// Method should return true
		// List length should be 1
		TEST_METHOD(AddToTop)
		{
			List<int> list = List<int>();
			Assert::IsTrue(list.addFirst(-9));
			Assert::AreEqual(1, list.getLength());

			List<std::string> coolshit = List<std::string>();
			coolshit.addFirst("Cambodia");
			coolshit.addFirst("Solar Panels");
			coolshit.addFirst("DC Comics");
			coolshit.addFirst("Freakonomics");
			Assert::AreEqual(4, coolshit.getLength());
		}

		// Delete
		TEST_METHOD(Delete)
		{
			List<int> list = List<int>();
			list.addFirst(2);
			Assert::IsFalse(list.remove(1));
			Assert::IsTrue(list.remove(2));
			Assert::IsFalse(list.remove(0));

			list.addFirst(1);
			list.addFirst(2);
			list.addFirst(3);
			// Should now look like (head: 3, 2, 1)

			Assert::IsFalse(list.remove(4));   // Remove a nonexistent value
			Assert::IsTrue(list.remove(2));    // Remove the middle item
			Assert::IsFalse(list.remove(2));
			Assert::IsTrue(list.remove(3));    // Remove first item (in a list of >1 items)
			Assert::IsFalse(list.remove(3));
			Assert::IsTrue(list.remove(1));    // Remove last item
			Assert::IsFalse(list.remove(1));
		}

		// Search
		// search the list for a value
		TEST_METHOD(Search)
		{
			List<int> list = List<int>();
			list.addFirst(9);
			Assert::IsTrue(list.contains(9));
			Assert::IsFalse(list.contains(0));
		}

		// Clear
		TEST_METHOD(Clear)
		{
			List<int> list = List<int>();

			list.addFirst(1);
			list.addFirst(1);
			list.addFirst(1);

			list.clear();
			Assert::AreEqual(0, list.getLength());
			Assert::IsFalse(list.contains(1));
		}

		// Test removeFirst
		TEST_METHOD(RemoveFirst)
		{
			List<int> list;

			list.addFirst(-9);

			Assert::AreEqual(1, list.getLength());

			list.removeFirst();

			Assert::IsTrue(list.isEmpty());
		}

	};
}