/*
 * COSC 1436
 *
 * Demonstrates increment and decrement with arrays.
 */
#include <iostream>

using namespace std;

void main ( )
{
	const int size = 5;

	//Get input
	int baseArray[size];
	
	for (int index = 0; index < size; ++index)
	{
		cout << "Value " << index + 1 << ": ";
		cin >> baseArray[index];
	};

	//Increment and decrement
	int addArray[size], subArray[size];

	for (int index = 0; index < size; ++index)
	{
		addArray[index] = ++baseArray[index];
		subArray[index] = --baseArray[index];
	};

	//Print them out
	cout << "Base\t\tAdd\t\tSubtract" << endl;

	int pos = 0;
	while (pos < size)
	{
		cout << baseArray[pos] << "\t\t";
		cout << addArray[pos] << "\t\t";
		cout << subArray[pos++] << "\t\t";
		cout << endl;
	};
}
