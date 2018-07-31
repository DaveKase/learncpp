/*
 * HelloWorld.cpp : Defines the entry point for the console application.
 */
#include "stdafx.h"
#include "HelloWorld.h"

int STAT_SUCCESS = 0;
int STAT_FAILED = 1;

void ifConditionals()
{
	printLine("Enter a positive number: ", false);
	int nr = readConsole();
	printLine("Enter another positive number: ", false);
	int nr2 = readConsole();

	// null statement
	if (nr < 10)
		;

	int x = (nr > nr2) ? nr : nr2;
	printLine(to_string(x) + " is bigger", true);
}

// The program starts here
int main()
{
	ifConditionals();

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
