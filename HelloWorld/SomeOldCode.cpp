#include "stdafx.h"
#include <iostream>
// Now that add is added as a header file, no need to function forwarding here
#include "add.h"

/*
 * Do never ever call this file
 * This is meant to keep all the old code from C++ lessons
 * Lesson can be found at http://www.learncpp.com/
 */

 // this is single line comment

 /* This is
 a multiline commment
 */

 /*
 * This is a
 * prettified multiline comment
 */

// Just prints a line
void doPrint()
{
	std::cout << "in doPrint()" << std::endl;
}

// This function takes one integer parameter named x
// The caller will supply the value of x
void printValue(int x)
{
	std::cout << x << std::endl;
}

// This function has two integer parameters, one named x, and one named y
// The caller will supply the value of both x and y
int oldAdd(int x, int y)
{
	return x + y;
}

// forward declaration of multiply() using function prototype
int multiply(int a, int b); 


// Taken from main() method in HelloWorld.cpp and stored here for future reference
void stuffInsideMain()
{
	// This prints a line and does a newline character
	std::cout << "Starting main()" << std::endl;

	int x; // this is a variable definition
	x = 5; // assign the value 5 to variable x

	int y = 5; // initialize variable x with the value 5
	/*
	std::cout << "Enter a number: ";
	int i;
	std::cin >> i;
	std::cout << "You entered " << i << std::endl;
	*/

	doPrint();	// Interrupt main() by making a function call to doPrint().  main() is the caller.

	printValue(6); // 6 is the argument passed to function printValue()
	int sum = oldAdd(2, 3); // 2 and 3 are the arguments passed to function add()
	printValue(sum);
	int mul = multiply(3, 5);
	printValue(mul);
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << std::endl;

	std::cout << "Ending main()" << std::endl;

	// using some boolean variables now
	bool b1 = true; // copy initialization
	bool b2(false); // direct initialization
	bool b3{ true }; // uniform initialization (C++11)
	b3 = false; // assignment

	std::cout << "Enter an integer: ";
	int xy;
	std::cin >> xy;

	if (xy == 0)
		std::cout << "The value is zero" << std::endl;
	else
		std::cout << "The value is non-zero" << std::endl;

	char c('w');
	char ch(97);					// even though we're initializing ch with an integer
	std::cout << c << "\n";			// cout prints a character
	std::cout << ch << std::endl;	// cout prints a character

	int i = 0; // This is a variable
	const int f(23); // Constant
}

// even though the body of multiply() isn't defined until here
int multiply(int a, int b)
{
	return a * b;
}
