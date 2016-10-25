#include "stdafx.h"
#include "CppUnitTest.h"
#include "List.h"
#include <string>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

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

			using namespace std;
			List<string> coolshit;

			coolshit.addFirst("Cambodia");
			coolshit.printList();
		}

		// Destroy
		TEST_METHOD(ListDestructor)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// Add (an item to top of list)
		// Method should return true
		// List length should be 1
		TEST_METHOD(AddToTop)
		{
			List<int> list = List<int>();
			Assert::IsTrue(list.addFirst(-9));
			Assert::AreEqual(1, list.getLength());
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
			Assert::Fail(L"Test case has not been written yet.");
		}

	};
}