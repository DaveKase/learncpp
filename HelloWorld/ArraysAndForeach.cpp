#include "stdafx.h"
#include "HelloWorld.h"
#include <algorithm> // for std::sort
#include <vector>

void arrays()
{
	int scores[] = { 84, 92, 120, 76, 81, 666, 56 };
	const int numStudents = sizeof(scores) / sizeof(scores[0]);

	int maxScore = 0; // keep track of our largest score
	int studentIndex = 0;

	// now look for a larger score
	for (int student = 0; student < numStudents; ++student)
	{
		if (scores[student] > maxScore)
		{
			maxScore = scores[student];
			studentIndex = student;
		}
	}

	printLine("The best score was " + to_string(maxScore) + ", with index " + to_string(studentIndex), true);

	std::sort(scores, scores + numStudents);

	for (int i = 0; i < numStudents; ++i)
	{
		printLine(to_string(scores[i]), true);
	}
}

void foreach()
{
	int fibonacci[] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89 };

	for (int number : fibonacci) // iterate over array fibonacci
	{
		printLine(to_string(number), true); // we access the array element for this iteration through variable number
	}
}

void vectors()
{
	// no need to specify length at initialization
	std::vector<int> array;
	std::vector<int> array2 = { 9, 7, 5, 3, 1 }; // use initializer list to initialize array
	std::vector<int> array3{ 9, 7, 2, 5, 3, 1 }; // use uniform initialization to initialize array (C++11 onward)

	printLine("The length is: " + to_string(array3.size()), true);
	printLine("Element at 3 is: " + to_string(array3[3]), true);
}
