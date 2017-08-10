/*
 * COSC 1436
 *
 * Provides some common functions needed in applications.
 */
#pragma once

#include <iostream>
using namespace std;

/*
 * Determines if the numeric value is even.
 *
 * PARAMETERS:
 *    value = The value to check.
 * RETURNS:
 *    True if the value is even or false otherwise.
 */
bool IsEven ( int value )
{
	return value % 2 == 0;
}

/*
 * Determines if the numeric value is odd.
 *
 * PARAMETERS:
 *    value = The value to check.
 * RETURNS:
 *    True if the value is odd or false otherwise.
 */
bool IsOdd ( int value )
{
	return value % 2 != 0;
}

/// Waits for the user to press ENTER
void WaitForEnter ( )
{
	cout << "Press ENTER" << endl;
	cin.get();
}