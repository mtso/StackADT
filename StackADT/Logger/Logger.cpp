
#ifndef LOGGER_CPP
#define LOGGER_CPP

#include "Logger.h"

void Logger::log(const string& message)
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

#endif