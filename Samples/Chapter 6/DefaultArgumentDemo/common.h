/*
 * COSC 1436
 *
 * Defines some common functions usable in applications.
 */
#pragma once

#include <iostream>
using namespace std;

/// SUMMARY: Compares two strings.
/// PARAMETERS:
///    value1 - The first string.
///    value2 - The second string.
///    ignoreCase - True to ignore case.
/// RETURNS: 0 if they are equal, positive if the first string is greater than
///    the second or negative if the second string is greater than the first.
int StringCompare ( char* value1, char* value2, bool ignoreCase )
{
	if (ignoreCase)
		return _strcmpi(value1, value2);
	else
		return strcmp(value1, value2);
};

/// SUMMARY: Compares two strings for equality.
/// PARAMETERS:
///    value1 - The first string.
///    value2 - The second string.
///    ignoreCase - True to ignore case.
/// RETURNS: True if they are equal.
bool StringsAreEqual ( char* value1, char* value2, bool ignoreCase )
{
	return StringCompare(value1, value2, ignoreCase) == 0;
};

/// SUMMARY: Waits for the user to press ENTER
void WaitForEnter ( )
{
	cout << "Press ENTER" << endl;
	cin.get();
};

/// SUMMARY: Waits for the user to press ENTER
/// PARAMETERS:
///	   clear - True to clear the input buffer first
void WaitForEnter ( bool clear )
{
	if (clear)
		cin.ignore();

	cout << "Press ENTER" << endl;
	cin.get();
};