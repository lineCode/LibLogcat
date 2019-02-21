// TestLogcat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

extern int adb_commandline(int argc, const char** argv);

//-v long: Display all metadata fields and separate messages with blank lines.
const char* argv[] { "logcat", "-v", "long" };

// use wmain instead of main to have multibyte environment
int wmain()
{
	adb_commandline(_countof(argv), argv);
    std::cout << "Hello World!\n"; 
	return 0;
}
