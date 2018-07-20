/*
 * This file contains some basic string and boolean testing in C++
 * Not much to see in here
 */

#include "stdafx.h"
#include "HelloWorld.h"

void oldMainInStringBoolTest()
{
	testingBoolean();
	stringTest();
	letterAge();

	if (true); // this is a null statement
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
	bool isTrue(getIsTrue());
	printLine("Insert a positive number: ", false);
	int value = readConsole();

	// Conditional operator
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

	size_t letters = name.length();
	double agePerLetter = age / letters;

	string printText = "You have lived " + to_string(agePerLetter)
		+ " years for each letter in your name.\n";

	printLine(printText, false);
}
