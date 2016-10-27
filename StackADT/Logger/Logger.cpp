// Logger.cpp
// Logging utility functions.
// CIS 22C F2016: Adrian Marroquin, Matthew Tso

#ifndef LOGGER_CPP
#define LOGGER_CPP

#include "Logger.h"

void util::log(const std::string& message)
{
	static bool isFirstTime = true;
	static std::ofstream logFile;

	time_t now = time(0);

	if (isFirstTime)
	{
		isFirstTime = false;
		logFile.open("stackadt_log.txt", std::ios::app);

		logFile << "================================" << std::endl;
		logFile << now << ": New logging session" << std::endl;
	}
	
	logFile << now << ": " << message << std::endl;
}

void util::clearLog()
{
	std::ofstream log("stackadt_log.txt");
	log.close();
}

std::string util::removeTimestamp(const std::string& str)
{
	bool reachedColon = false;
	int colonIndex = 0;
	std::string stringWithoutTimestamp;

	for (int i = 0; i < static_cast<int>(str.length()); i++)
	{
		if (str[i] == ':')
		{
			reachedColon = true;
			colonIndex = i;
		}

		if (reachedColon && i > colonIndex + 1)
		{
			stringWithoutTimestamp += str[i];
		}
	}

	return stringWithoutTimestamp;
}

#endif