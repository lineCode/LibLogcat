// TestLogcat.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>

extern int adb_commandline(int argc, const char** argv);
extern void adb_terminate();

//-v long: Display all metadata fields and separate messages with blank lines.
const char* cmdLogcat[]{ "logcat", "-v", "long" };
const char* cmdDisconnect[]{ "disconnect" };

int main()
{
	adb_commandline(_countof(cmdLogcat), cmdLogcat);
	adb_commandline(_countof(cmdDisconnect), cmdDisconnect);
	//use adb_terminate() to terminate connection

	std::cout << "Hello World!!!\n";
	return 0;
}
