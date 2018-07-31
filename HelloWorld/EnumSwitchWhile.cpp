#include "stdafx.h"
#include "HelloWorld.h"

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

void inMain()
{
	printLine("Program is starting", true);
	printColor(COLOR_GREEN);
	double x = jumping();
	usingWhile(x);
}