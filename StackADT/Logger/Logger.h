
#include <fstream>
#include <string>
#include <time.h>

using namespace std;

namespace logger
{
	void log(const string& message)
	{
		static bool isFirstTime = true;
		static ofstream logFile;

		if (isFirstTime)
		{
			isFirstTime = false;
			logFile.open("log");
		}
		else
		{

		}
	}
}