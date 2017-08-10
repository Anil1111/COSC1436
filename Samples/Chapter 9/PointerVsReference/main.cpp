/*
 * COSC 1436
 *
 * Demonstrates the difference between a pointer and a reference parameter.
 */
#include <iostream>

using namespace std;

void CStyleIncrementVariable ( int* value )
{
	if (value != nullptr)
		*value *= 2;
};

void CPlusPlusStyleIncrementVariable ( int& value )
{
	value *= 2;
};

void main ( )
{
	int someVariable = 100;

	//C-style
	CStyleIncrementVariable(&someVariable);

	//C++ style
	CPlusPlusStyleIncrementVariable(someVariable);
}