#pragma once

#ifdef USE_STRING
	#include <string>
	#define SCREEPS_STR std::string
#else
	#define SCREEPS_STR const char*
#endif