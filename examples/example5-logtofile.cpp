// example5-log2file.cpp

#define LOG_MODULE_NAME "logs"
#define LOG_TO_FILE
#include "clue.hpp"

int main()
{
    const int rpm = 3000;
    clue_LOG_NOTICE( "Rpm: " << rpm );
	return 0;
}
