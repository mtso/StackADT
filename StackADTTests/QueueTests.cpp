#include "stdafx.h"
#include "CppUnitTest.h"
#include "Queue.h"
#include <vector>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace StackADTTests
{
	TEST_CLASS(QueueTests)
	{
	public:

		// isEmpty
		TEST_METHOD(IsEmpty)
		{
			Queue<int> queue;
			Assert::IsTrue(queue.isEmpty());
			Assert::AreEqual(0, queue.getLength());
			queue.enqueue(8);
			Assert::IsFalse(queue.isEmpty());
		}

		// Enqueue
		TEST_METHOD(Enqueue)
		{
			Queue<int> iqueue;

			Assert::IsTrue(iqueue.isEmpty());
			iqueue.enqueue(2);
			Assert::IsFalse(iqueue.isEmpty());
			Assert::AreEqual(1, iqueue.getLength());
		}

		// Dequeue
		TEST_METHOD(Dequeue)
		{
			Queue<int> iqueue;
			iqueue.enqueue(45);
			iqueue.enqueue(98);
			Assert::AreEqual(2, iqueue.getLength());
			Assert::AreEqual(45, iqueue.dequeue());
			Assert::AreEqual(98, iqueue.dequeue());
			Assert::IsTrue(iqueue.isEmpty());
		}

		TEST_METHOD(QueueDestructor)
		{
			Queue<int>* queue = new Queue<int>();
			delete queue;

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
				string queueLog = util::removeTimestamp(reversedLog[1]);

				Assert::AreEqual(string("~List called"), listLog);
				Assert::AreEqual(string("~Queue called"), queueLog);
			}
		}

	};
}