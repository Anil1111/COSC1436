/*
 * COSC 1436
 *
 * Demonstrates calling functions that return values.
 */
#include <iostream>
#include "Common.h"

using namespace std;

void main ( )
{
	while (true)
	{
		int value;

		cout << "Enter a number: " << endl;
		cin >> value;

		//Using a variable expression
		cout << "The number is " << (IsEven(value) ? "even" : "odd") << endl;

		//Using a literal
		cout << "The number 4 is " << (IsEven(4) ? "even" : "odd") << endl;

		//Using an integer expression
		cout << "The number 3 is " << (IsEven(1 + 2) ? "even" : "odd") << endl;

		//Ignoring a return value
		cin.ignore();
		cout << "Continue (Y/N)?";		
		char option = cin.get();
		if ((option == 'N') || (option == 'n'))
			break;
	};
}