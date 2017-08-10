/*
 * COSC 1436
 *
 * Demonstrates writing to a file using streams.
 */
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

int main ( )
{	
	char filename[MAX_PATH + 1];

	//Get the input file
	cout << "Enter a file to read: ";
	cin >> filename;

	//Open it
	ifstream inFile(filename);
	if (inFile.fail())
	{
		cout << "Error opening file for reading." << endl;
		return -1;
	};

	//Get the output file
	cout << "Enter a file to write: ";
	cin >> filename;
	
	//Open it
	ofstream outFile(filename, ios::trunc);
	if (outFile.fail())
	{
		cout << "Error opening file for writing." << endl;
		return -2;
	};

	//Read the input file
	while (!inFile.eof())
	{
		//Read the next character		
		char next = inFile.get();
		if (!inFile.fail())
		{		
			//Write it out to display and file
			cout << next;
			outFile.put(next);
		};
	};

	inFile.close();
	outFile.close();
	return 0;
}