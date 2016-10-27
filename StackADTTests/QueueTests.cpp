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

		// Enqueue
		TEST_METHOD(Enqueue)
		{
			Queue<int> queue;

			Assert::IsTrue(queue.isEmpty());
			queue.enqueue(2);

			Assert::IsFalse(queue.isEmpty());

			Assert::AreEqual(1, queue.getLength());
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