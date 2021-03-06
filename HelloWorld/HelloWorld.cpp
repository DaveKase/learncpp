/*
 * HelloWorld.cpp : Defines the entry point for the console application.
 */
#include "stdafx.h"
#include "HelloWorld.h"
#include <algorithm> // for std::sort
#include <vector>

int STAT_SUCCESS = 0;
int STAT_FAILED = 1;


// The program starts here
int main()
{
    return cleanup();
}

// Reads text from console
string readString()
{
	string s = "";
	cin.ignore();
	getline(cin, s);

	cin.clear();
	return s;
}

// Reads mostly integers from console
int readConsole()
{
	int i = 0;
	cin >> i;
	return i;
}

// Prints a line in console and if endLine is true, adds a newline
void printLine(string textToPrint, bool endLine)
{
	if (endLine) {
		cout << textToPrint << endl;
	}
	else
	{
		cout << textToPrint;
	}
}

// Here just for fun. No real reason.
int cleanup()
{
	// Here we could do some cleanup and saving if neccessary
	// Also we could call exit() if something went wrong or use statuscodes
	printLine("Program is terminating with statuscode " + to_string(STAT_SUCCESS), true);
	return STAT_SUCCESS;
}
