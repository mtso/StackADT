#include "stdafx.h"
#include "CppUnitTest.h"
#include "Queue.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackADTTests
{
	TEST_CLASS(QueueTests)
	{
	public:

		// Enqueue
		TEST_METHOD(Enqueue)
		{
			Queue<int> queue;

			//queue.enqueue(2);

			Assert::Fail();
		}
	};
}