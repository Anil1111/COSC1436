/*
 * COSC 1436
 *
 * Demonstrates a program that gets a number from the command line and then counts
 * up or down to it.
 */
#include <iostream>

using namespace std;

int main ( int argc, char* argv[] )
{
	bool increment = true;
	int countTo = 0;

	//Validate the user entered a number and an optional INC/DEC
	switch(argc)
	{
		case 3: increment = _strcmpi(argv[2], "INC") == 0; 
		case 2: countTo = atoi(argv[1]); break;
		default:
		{
			cout << "You must enter a number and (optionally) INC or DEC." << endl;
			return -1;
		};
	};

	if (increment)
		for (int counter = 1; counter <= countTo; ++counter)
			cout << counter << endl;
	else
		for (int counter = countTo; counter > 0; --counter)
			cout << counter << endl;

	return countTo;
}