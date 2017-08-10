/*
 * COSC 1436
 *
 * Demonstrates using a pointer as a parameter to a function.
 */
#include <iostream>

using namespace std;

void DisplayIntPointer ( int* ptr )
{
	cout << "Value at 0x" << ptr << " has value of " << *ptr << endl;
};

void main ( )
{
	int arrValue[] = { 2, 4, 6, 8 };
	int someValue = 20;

	//Assign to a stack variable
	cout << "Assigning pointer to local" << endl;
	int* pValue = &someValue;	
	DisplayIntPointer(pValue);

	//Assign to an array variable
	cout << endl << "Assigning pointer to array" << endl;
	pValue = arrValue;
	for (int index = 0; index < 10; ++index)
		DisplayIntPointer(pValue++);

	//Direct use of variable
	cout << "Direct use of variable" << endl;
	DisplayIntPointer(&someValue);
}