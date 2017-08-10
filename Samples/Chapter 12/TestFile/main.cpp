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
	//Get a filename
	char filename[MAX_PATH + 1];
	cout << "Enter a filename: ";
	cin >> filename;
	cin.ignore();

	//If the file exists prompt to overwrite
	{
		ifstream testfile(filename);
		if (!testfile.fail())
		{
			char overwrite;
			cout << "The file already exists.  Do you want to overwrite it (Y/N)? ";
			cin >> overwrite;
			if (tolower(overwrite) != 'y')
				return -2;

			cin.ignore();		
		};
	};

	ofstream file(filename, ios::out | ios::trunc);
	if (file.fail())
	{
		cout << "Failed to open file." << endl;
		return -1;
	};

	while (true)
	{
		//Get the next line
		char line[1024];

		cout << "Enter the next line: ";
		cin.getline(line, 1024);

		if (strlen(line) == 0)
			break;

		//Write it out
		file << line << endl;
	};

	file.close();
	return 0;
}