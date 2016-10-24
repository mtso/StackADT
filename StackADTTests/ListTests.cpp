#include "stdafx.h"
#include "CppUnitTest.h"
#include "List.h"

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
			Assert::IsTrue(list.isEmpty());
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

		// Delete (an item to top of list)
		TEST_METHOD(DeleteFromTop)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// Search
		// should return the index of the item or -1 if not found
		TEST_METHOD(Search)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

		// Clear
		TEST_METHOD(Clear)
		{
			Assert::Fail(L"Test case has not been written yet.");
		}

	};
}