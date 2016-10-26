
#ifndef LOGGER_CPP
#define LOGGER_CPP

#include "Logger.h"

void Logger::log(const std::string& message)
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

#endif