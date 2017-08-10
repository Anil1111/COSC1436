/*
 * COSC 1436
 *
 * Demonstrates sending formatted output to a file.
 */
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

bool IsPrime ( int value )
{
	for (int count = 2; count < value; ++count)
	{
		if (value % count == 0)
			return false;
	};

	return true;
};

void main ( )
{
	cout << "This program determines if a number is prime." << endl;

	//Get filename
	char filename[MAX_PATH + 1];
	cout << "Enter a filename: ";
	cin >> filename;
	cin.ignore();

	ofstream file(filename, ios::out | ios::app);
	while (true)
	{	
		//Get the number
		int value;
		cout << "Enter a number: ";
		cin >> value;
		if (value <= 0)
			break;

		bool prime = IsPrime(value);

		cout << value << (prime ? " is " : " is not ") << "prime." << endl;
		file << value << (prime ? " is " : " is not ") << "prime." << endl;
	};

	file.close();	
}