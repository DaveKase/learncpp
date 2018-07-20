/*
 * HelloWorld.cpp : Defines the entry point for the console application.
 */
#include "stdafx.h"
#include "HelloWorld.h"

int STAT_SUCCESS = 0;
int STAT_FAILED = 1;

// The program starts here
int main()
{
	printLine("Program is starting", true);

	testingBoolean();
	stringTest();
	letterAge();	

    return cleanup();
}

bool getIsTrue()
{
	printLine("Are you sure (Y/N): ", false);
	string reply = readString();

	printLine("reply = " + reply, true);
	bool isTrue = (reply == "Y") ? true : false;
	
	if (reply != "Y" && reply != "N")
	{
		printLine("Your answer was out of context!", true);
	}

	return true;
}

void testingBoolean()
{
	printLine("Insert a positive number: ", false);
	int value = 0;
	value = readConsole();

	// Conditional operator
	bool isTrue(getIsTrue());
	int val = (isTrue) ? 2 : value;
	printLine("val = " + to_string(val), true);

	int res = (val > value) ? val : value;

	printLine("res = " + to_string(res), true);
}

void stringTest()
{
	string s = "This is a string";
	s += " with some addition";
	printLine(s, true);
}

void letterAge()
{
	printLine("Enter your full name: ", false);
	string name = readString();

	printLine("Your age: ", false);
	int age = readConsole();

	int letters = name.length();
	double agePerLetter = static_cast<double>(age) / letters;
	string printText = "You have lived " + to_string(agePerLetter) 
		+ " years for each letter in your name.\n";

	printLine(printText, false);
}

string readString()
{
	string s = "";
	cin.ignore();
	getline(cin, s);

	cin.clear();
	return s;
}

int readConsole()
{
	int i = 0;
	cin >> i;
	return i;
}

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

int cleanup()
{
	// Here we could do some cleanup and saving if neccessary
	// Also we could call exit() if something went wrong or use statuscodes
	printLine("Program is terminating with statuscode " + to_string(STAT_SUCCESS), true);
	return STAT_SUCCESS;
}
