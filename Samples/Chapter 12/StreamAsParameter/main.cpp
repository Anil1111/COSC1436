/*
 * COSC 1436
 *
 * Demonstrates using a stream as a parameter.
 */
#include <iostream>
#include <fstream>
#include <Windows.h>

using namespace std;

void WriteEmployees ( fstream& file )
{
	//Write some employee data
	file << "1,Bill" << endl;
	file << "2,Sue" << endl;
	file << "3,Tom" << endl;
	file << "4,Jan" << endl;
};

int main ( )
{
	//Get the filename
	char filename[MAX_PATH + 1];
	cout << "Enter the filename for the employees: ";
	cin >> filename;

	fstream employeeFile(filename, ios::out | ios::trunc);
	if (employeeFile.fail())
	{
		cout << "Failed to save employees." << endl;
		return -1;
	};

	WriteEmployees(employeeFile);
	employeeFile.close();
	return 0;
}