/*
 * COSC 1436
 *
 * Demonstrates conversion to and from strings.
 */
#include <iostream>

using namespace std;

void main ( )
{
	while (true)
	{
		char input[100];
		cout << "Enter a number: ";
		cin >> input;
		if (strcmp(input, "0") == 0)
			break;

		cout << "As an int: " << atoi(input) << endl;
		cout << "As a long : " << atol(input) << endl;
		cout << "As a real: " << atof(input) << endl;
		
		char buffer[100];
		_itoa(atoi(input), buffer, 10);
		cout << "Roundtripped to int: " << buffer << endl;

		_gcvt(atof(input), 8, buffer);
		cout << "Roundtripped to float: " << buffer << endl;
		cout << endl;
	};
}