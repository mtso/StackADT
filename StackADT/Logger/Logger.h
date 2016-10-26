
#ifndef LOGGER_H
#define LOGGER_H

#include <fstream>
#include <string>
#include <time.h>

using namespace std;

namespace Logger
{
	void log(const string& message);
}

#include "Logger.cpp"
#endif