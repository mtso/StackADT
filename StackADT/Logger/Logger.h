
#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>
#include <time.h>

namespace Logger
{
	inline void log(const std::string& message);
}

#include "Logger.cpp"
#endif