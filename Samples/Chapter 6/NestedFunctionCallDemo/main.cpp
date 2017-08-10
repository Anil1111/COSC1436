/*
 * COSC 1436
 *
 * Demonstrates a function calling another function.
 */
#include <iostream>

using namespace std;

// Summary: Logs the entering of a function
void LogEnterFunction ( )
{
	cout << "Entering" << endl;
}

// Summary: Logs the exiting of a function
void LogExitFunction ( )
{
	cout << "Exiting" << endl;
}

// Summary: Some function
void SomeFunction ( )
{
	LogEnterFunction();

	cout << "SomeFunction" << endl;

	LogExitFunction();
}

// Summary: Wait for the user to press ENTER
void WaitForEnter ( )
{
	cout << "Press ENTER..." << endl;
	cin.get();
}

void main ( )
{
	LogEnterFunction();

	cout << "Calling SomeFunction" << endl;	
	SomeFunction();
	cout << "Called SomeFunction" << endl;

	LogExitFunction();

	WaitForEnter();
}