/*
 * COSC 1436
 *
 * Demonstrates functions in header files and forward references
 */
#include <iostream>
#include "common.h"

using namespace std;

//Forward references - no real reason other than to demonstrate
void LogEnterFunction ( );
void LogExitFunction ( );

/// Some function
void SomeFunction ( )
{
	LogEnterFunction();

	cout << "SomeFunction" << endl;

	LogExitFunction();
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

/// Summary: Logs the entering of a function
void LogEnterFunction ( )
{
	cout << "Entering" << endl;
}

/// Summary: Logs the exiting of a function
void LogExitFunction ( )
{
	cout << "Exiting" << endl;
}
