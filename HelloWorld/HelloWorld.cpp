/*
 * HelloWorld.cpp : Defines the entry point for the console application.
 */
#include "stdafx.h"
#include "HelloWorld.h"

int STAT_SUCCESS = 0;
int STAT_FAILED = 1;

enum Colors {
	COLOR_BLACK,
	COLOR_WHITE,
	COLOR_RED,
	COLOR_GREEN,
	COLOR_BLUE,
};

void printColor(Colors color) {
	string print = "";

	switch (color)
	{
	case COLOR_BLACK:
		print = "black";
		break;
	case COLOR_WHITE:
		print = "white";
		break;
	case COLOR_RED:
		print = "red";
		break;
	case COLOR_GREEN:
		print = "green";
		break;
	case COLOR_BLUE:
		print = "blue";
		break;
	default:
		print = "no color chosen";
	}

	printLine("Chosen color is " + print, true);
}

double jumping()
{
	double x;
tryAgain: // this is a statement label
	printLine("Enter a non-negative number: ", false);
	x = readConsole();

	if (x < 0.0)
	{
		goto tryAgain;
	}

	double sqrx = sqrt(x);
	string print = "The sqrt of " + to_string(x) + " is " + to_string(sqrx);
	printLine(print, true);
	return x;
}

void usingWhile(double x)
{
	int count = 0;
	while (x > count) {
		printLine("x is " + to_string(x) + ", count is " + to_string(count), true);
		++count;
	}
}

// The program starts here
int main()
{
	printLine("Program is starting", true);
	printColor(COLOR_GREEN);
	double x = jumping();
	usingWhile(x);

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
