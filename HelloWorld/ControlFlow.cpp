#include "stdafx.h"
#include "HelloWorld.h"

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

void switchStatements()
{
	printLine("Enter a number between 1 and 5: ", false);
	int num = readConsole();

	string result = "You entered ";

	switch (num) {
	case 1:
		result = to_string(num) + " is rather low";
		break;
	case 2:
		result = to_string(num) + " is a bit higher but not good";
		break;
	case 3:
		result = to_string(num) + " is getting a bit better, but still not good enough";
		break;
	case 4:
		result = to_string(num) + " is better";
		break;
	case 5:
		result = to_string(num) + " well done";
		break;
	default:
		result = "You entered invalid number";
		break;
	}

	printLine(result, true);
}

void whileFor()
{
	int count = 0;

	while (count < 6)
	{
		switchStatements();
		++count;
	}

	for (int i = 0; i < 10; ++i)
	{
		printLine("i = " + to_string(i), true);
	}

}
