/*
 * COSC 1436
 * 
 * Demonstrates using function overloading.
 */
#include <iostream>

using namespace std;

// Summary: Prints a character.
void Print ( char value )
{
	cout << value << endl;
}

// Summary: Prints an integer.
void Print ( int value )
{
	cout << value << endl;
}

// Summary: Prints a float to the specified precision.
void Print ( float value, int precision = 5 )
{
	cout << value << endl;
}

// Summary: Prints a double to the specified precision.
void Print ( double value, int precision = 7 )
{
	cout << value << endl;
}

void main ( )
{
	Print('A');
	Print(10);
	Print(4.56);
	Print(4.56F, 3);
}