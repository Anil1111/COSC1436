/*
 * COSC 1436
 *
 * Demonstrates array assignment.
 */
#include <iostream>

using namespace std;

void main ( )
{
	char fName[] = "Henry";

	int source[] = { 2, 4, 6, 8, 10 };
	int destination[5];

	for (int index = 0; index < 5; ++index)
		cout << source[index] << " ";
	cout << endl;

	//Wrong way
	//destination = source;
	
	//Right way
	for (int index = 0; index < 5; ++index)
		destination[index] = source[index];


	for (int index = 0; index < 5; ++index)
		cout << destination[index] << " ";
	cout << endl;
}