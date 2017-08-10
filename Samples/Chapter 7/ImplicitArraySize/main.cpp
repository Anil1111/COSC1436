/*
 * COSC 1436
 *
 * Demonstrates implicit array sizing using init expressions.
 */
#include <iostream>

using namespace std;

void main ( )
{
#pragma region "Implicit string array"
	char programName[] = "ImplicitArraySize";
	
	cout << programName << endl;
	cout << "The string is of length " << strlen(programName) << endl;
	cout << "The array is of length " << strlen(programName) + 1 << endl;
#pragma endregion

#pragma region "Implicit int array"	

	int someValues[] = { 2, 4, 6, 8, 0 };
	
	cout << someValues << endl;
	cout << "There is no way to determine this length" << endl;
#pragma endregion
}